/*
#include <nome_da_biblioteca>
int main(){
    bloco_de_comando;
    return 0;
}

Fa�a um programa que receba o salario de um funcionario, calcule e mostre:
     - O Salario atual;
     - O Valor do aumento
     - Novo salario, sabendo-se que este sofreu um aumemnto de 25%*/

#include <stdio.h>
#include <locale.h>  //Definir assentos;

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    float salario_atual;
    printf("Digite o salario atual: ");
    scanf("%f%*c", &salario_atual); 
    
    float valor_aumento = salario_atual * 0.25;
    
    float novo_salario = salario_atual + valor_aumento;
    
    printf("Salario atual: R$ %.2f\n", salario_atual);
    printf("Valor do aumento (25%%): R$ %.2f\n", valor_aumento);
    printf("Novo salario: R$ %.2f\n", novo_salario);
    
    system("pause");
    return 0;
}

