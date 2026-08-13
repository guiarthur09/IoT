#include <stdio.h>

int main (){
	
	int idade;
	
	printf("Digite a sua Idade: ");
	scanf("%d", &idade);
	
	
	if (idade <=0){
		printf("Error! Idade Invalida");
	} else if(idade <= 11){
		printf("Voce ainda é crianca");
	} else if (idade >= 12 && idade <= 18){
		printf("Voce ainda é adolescente");
	} else if (idade >= 19 && idade <= 24){
		printf("Voce ainda é jovem");
	} else if (idade >=25 && idade <=59){
		printf("Voce ainda e adulto");
	} else if (idade >= 60){
		printf("Voce ainda é idoso");
	}
}