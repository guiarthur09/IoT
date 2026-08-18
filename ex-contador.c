#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, num, cont;
	
	for (i=1; i<=5; i++){
		printf("Digite um numero: ");
		scanf("%d\n", &num);
		
		if (num > 5){
			cont+=1;
		}
		
		printf("Quantidade de numeros maiores que 5 = %d", cont);
	}
	
}