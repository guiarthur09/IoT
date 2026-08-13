#include <locale.h>
#include <stdio.h>

int main (){
	
	int n1, n2, n3;
	
	printf("Digite o Numero 1: ");
	scanf("%d", &n1);
	
	printf("Digite o Numero 2: ");
	scanf("%d", &n2);
	
	printf("Digite o Numero 3: ");
	scanf("%d", &n3);
	
	if (n1 == n2 && n2 == n1){
	    printf("Nao deve haver dois ou mais numeros repetidos!");
	}else if (n2 == n3 && n3 == n2){
	    printf("Nao deve haver dois ou mais numeros repetidos!");
	}else if (n1 == n3 && n3 == n1){
	    printf("Nao deve haver dois ou mais numeros repetidos!");
	}else if (n1> n2 && n1 > n3){
		printf("O Numero: %d é o maior numero", n1);
	} else if(n2 > n1 && n2 > n3){
		printf("O Numero: %d é o maior numero", n2);
	} else if (n3 > n1 && n3 > n2){
		printf("O Numero: %d é o maior numero", n3);
	}
}