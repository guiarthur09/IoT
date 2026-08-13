#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int mes, dia;
	
	printf("Digite o mês do seu nascimento: ");
	scanf("%d", &mes);
	
	printf("Digite o dia a qual voce nasceu: ");
	scanf("%d", &dia);
	
	switch(mes){
	
		
		case 1:
			
			if (dia <= 19){
				printf("Signo: Capricornio");
			} else {
				printf("Signo: Aquario");
			}
			break;
		
		case 2:
			if (dia <= 18){
				printf("Signo: Aquario");
			} else{
				printf("Signo: Peixes");
			}
			break;
			
		case 3:
			if (dia <= 20){
				printf("Signo: Peixes");
			} else{
				printf("Signo: Aries");
			}
			break;
			
		case 4:
			if (dia <= 20){
				printf("Signo: Aries");
			} else {
				printf("Signo: Touro");
			}
			break;
			
		case 5:
			if (dia <= 21){
				printf("Signo: Touro");
			} else{
				printf("Signo: Gemeos");
			}
			break;
			
		case 6:
			if (dia <= 22){
				printf("Signo: Gemeos");
			} else{
				printf("Signo: Cancer");
			}
			break;
			
		case 7:
			if (dia <= 22){
				printf("Signo: Cancer");
			} else{
				printf("Signo: Leao");
			}
			break;
			
		case 8:
			if (dia <= 22){
				printf("Signo: Leao");
			} else{
				printf("Signo: Virgem");
			}
			break;
			
		case 9:
			if (dia <= 22){
				printf("Signo: Virgem");
			} else{
				printf("Signo: Libra");
			}
			break;
			
		case 10:
			if (dia <= 22){
				printf("Signo: Libra");
			} else {
				printf("Signo: Escorpiao");
			}
			break;
			
		case 11:
			if (dia <= 21){
				printf("Signo: Escorpiao");
			} else{
				printf("Signo: Sagitario");
			}
			break;
			
		case 12:
			if (dia <= 21){
				printf("Signo: Sagitario");
			} else{
				printf("Capricornio");
			}
			break;
			default:
				printf("Mes Invalido!");
				
	}
	
}