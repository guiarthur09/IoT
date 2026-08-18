#include <stdio.h>
#include <stdlib.h>

#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, soma, num;
	
	soma = 0; // Inicializando a variavel SOMA com o valor = 0
	
	for (i=1; i<=5; i++){
		printf("Digite um número: ");
		scanf("%d", &num);
		
		soma = soma + num; //Acumulando o valor de variavel NUM na variavel SOMA
	}
	
	printf("Soma = %d", soma);
	
}