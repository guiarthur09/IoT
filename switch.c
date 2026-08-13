#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2;
	char op;
	
	printf("Digite um numero, escolha um operador, digite outro numero: ");
	scanf("%f %c %f", &n1, &op, &n2);
	
	switch (op){
		
		case '+':
			printf("= %.2f", n1 + n2);
			break; 
			
		case '-':
			printf("= %.2f", n1 - n2);
			break;
			
		default:
			printf("OPERADOR INVALIDO!!");
	}
}