/*
Faça um programa que receba o salário base de um funcionario, calcule e mostre
o salário a receber, sabendo-se que o funcionario tem gratificacao de 5% sobre
o salario base e paga imposto de 7% tambem sobre o salario base

Faça exibir o valor da gratificacao, valor do imposto e o salario a receber.

*/

#include <stdio.h>
#include <locale.h>  //Definir assentos;

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    float salario_base;
    printf("Digite o salario base: ");
    scanf("%f%*c", &salario_base);
    
    float gratificacao = 0.05 * salario_base;
    float impostos = 0.07 * salario_base;
    
    float novo_salario = (salario_base + gratificacao) - impostos;
    
    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Valor do imposto: R$ %.2f\n", impostos);
    printf("Novo salario: R$ %.2f\n", novo_salario);
    
    system("pause"); //or getchar();
    return 0;
    
    }
