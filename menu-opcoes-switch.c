#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float salario;
	float impostos, aumento, salarioComImpostos, salarioComAumento;
	int opc;
	
	printf("\nMenu de Opções: \n");
	printf("[1] Impostos \n");
	printf("[2] Novo Salário\n");
	printf("[3] Classificação\n");
	printf("Digite a opção desejada 'Ex: 1': ");
	scanf("%d", &opc);
	
	switch (opc){
		
		case 1:
			printf("Informe seu salário: ");
			scanf("%f", &salario);
			
			if (salario < 500.00){
				impostos = 0.05;
				salarioComImpostos = salario - (salario * impostos);
				printf("Salário com Impostos (5%%): %.2f\n", salarioComImpostos);
			}	
			else if (salario >= 500.00 && salario <= 850.00){
				impostos = 0.10;
				salarioComImpostos = salario - (salario * impostos);
				printf("Salário com Impostos (10%%): %.2f\n", salarioComImpostos);
			}
			else if (salario > 850.00){
				impostos = 0.15;
				salarioComImpostos = salario - (salario * impostos);
				printf("Salário com Impostos (15%%): %.2f\n", salarioComImpostos);
			}
			
			break;
		
		case 2:
			printf("Informe seu salário: ");
			scanf("%f", &salario);
			
			if (salario < 450.00){
				aumento = 100.00;
				salarioComAumento = salario + aumento;
				printf("Salário com Aumento (R$: 100,00): %.2f\n", salarioComAumento);
			}
			
			else if (salario >= 450.00 && salario <= 749.00){
				aumento = 75.00;
				salarioComAumento = salario + aumento;
				printf("Salário com Aumento (R$: 75,00): %.2f\n", salarioComAumento);
			}
			
			else if (salario >= 750.00 && salario <= 1500.00){
				aumento = 50.00;
				salarioComAumento = salario + aumento;
				printf("Salário com Aumento (R$: 50,00): %.2f\n", salarioComAumento);
			}
			
			else if (salario > 1500.00){
				aumento = 25.00;
				salarioComAumento = salario + aumento;
				printf("Salário com Aumento (R$: 25,00): %.2f\n", salarioComAumento);
			}
			
			break; 
			
		case 3:
			printf("Informe seu salário: ");
			scanf("%f", &salario);
			
			if (salario < 700.00){
				printf("Mal remunerado");
			}
			
			else if (salario > 700.00){
				printf("Bem remunerado");
			}
			
			break;
			
			default:
				printf("Opção Ínvalida! Tente Novamente");
			
	}
	
}