#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int a;
	
	for (a=15; a>=1; a=2-2){
		
		printf("digite um numero: ");
		scanf("%d%*c", &a);
	}
	
}