/*Faça um programa que receba o valor de um depósito
e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor
total depois do rendimento.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    float deposito, juros, deposito_com_juros, tx_juros, deposito_com_rendimento;
    
    printf("Digite o Valor do Depósito: ");
    scanf("%f%*c", &deposito);
    
    printf("Digite o Valor de Taxa de Juros (%): ");
    scanf("%f%*c", &juros);
    
    tx_juros = juros/100;
    
    deposito_com_juros = deposito * tx_juros;
    deposito_com_rendimento = deposito_com_juros + deposito;
    
    printf("Valor de Imposto: R$ %.2f\n", deposito_com_juros);
    printf("Valor do imposto com Rendimento: R$ %.2f\n", deposito_com_rendimento);

    
    system("pause"); 
    return 0;
    }
