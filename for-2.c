#include <stdio.h>
#include <stdlib.h>

#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	for(i=1; i<=5; i++){
		print("%d", i);
	}
	
	//ou for(i=1; i<=5; i+1){printf("%d", i)}
}