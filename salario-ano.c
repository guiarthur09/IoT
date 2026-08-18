#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float salario = 1000, aumento = 1.5;
	int i, ano = 2019, anoAtual = 2026;

	printf("Digite o ano: ");
	scanf("%d", &ano);
	
	if (ano > 2026){
		printf("Ano invalido!");
	}
	
	else {
		
	for(i=ano; i<=anoAtual; ano++){
		salario += salario * (aumento /100);
		aumento*=2; // aumento = aumento * 2
	}
		
	}
	
	
	printf("Salário de %d: %.2f\n", anoAtual, salario);
	
}