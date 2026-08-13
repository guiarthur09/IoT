#include <stdio.h>

int main (){
	
	int n1, n2;
	
	printf("Digite o Numero 1: ");
	scanf("%d", &n1);
	
	printf("Digite o Numero 2: ");
	scanf("%d", &n2);
	
	if (n1 == n2){
		printf("Error! Dois Numeros iguais");
	}
	
	else if (n2 == n1){
		printf("Error! Dois Numeros iguais");
	} 
	
	else if (n1>n2){
		printf("Numero 1: %d\nNumero 2: %d\nOrdenado: %d - %d", n1, n2, n1, n2);
	}
	 
	else if (n2>n1){
		printf("Numero 1: %d\n Numero 2: %d\n Ordenado: %d - s%d", n2, n1, n2, n1);
}	}	