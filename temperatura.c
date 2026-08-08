#include <stdio.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    float temperatura;
    
    printf("Digite a temperatura (C°): ");
    scanf("%f%*c", &temperatura);
    
    if (temperatura <15){
           printf("Temperatura: %.1f\n", temperatura);
          printf("Temperatura Baixa\n");
    }else if(temperatura > 15 && temperatura <= 30){
          printf("Temperatura: %.1f\n", temperatura);
          printf("Temperatura Normal\n");
    }else {
          printf("Temperatura: %.1f\n", temperatura);
          printf("Temperatura Alta\n");
    }

    getchar();
    return 0;
    
    
}
