#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2;
	
	printf("Digite o Numero 1: ");
	scanf("%d", &n1);
	
	printf("Digite o Numero 2: ");
	scanf("%d", &n2);
	
	if (n2){
		printf("%f.1f", n1/n2);
	}
	
	else {
		printf("Não posso dividir");
	}
}