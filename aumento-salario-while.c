#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int anoContratado = 2020, anoAtual;
    float salarioInicial = 1000, salarioReceber, aumento = 0.015; // 0.015 representa 1.5%
    
    printf("Digite o Ano Atual: ");
    scanf("%d", &anoAtual);
    
    salarioReceber = salarioInicial;
    
    while (anoContratado < anoAtual){
        
        salarioReceber = salarioReceber + (salarioReceber * aumento);
        aumento = aumento * 2;
        anoContratado++;
    }
    
    printf("\nSalário em %d: R$ %.2f\n", anoAtual, salarioReceber);
    
    return 0;
}