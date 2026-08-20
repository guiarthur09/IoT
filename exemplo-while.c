#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int X = 1;
	int Y = 10;
	
	while (Y > X){
		
		printf("Valor de Y = %d \n", Y);
		Y = Y - 3;
	}
	
	printf("\nVAlor de Y depois que sair da estrutura = %d ", Y);
}