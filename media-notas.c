#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, n4, soma, media;

    printf("Digite a Primeiro Nota: ");
    scanf("%f", &n1);

    printf("Digite a Segunda Nota: ");
    scanf("%f", &n2);

    printf("Digite a Terceira Nota: ");
    scanf("%f", &n3);

    printf("Digite a Quarta Nota: ");
    scanf("%f", &n4);

    soma = n1 + n2 + n3 + n4;
    media = soma / 4;

    printf("Soma das quatro notas: %.1f\n", soma);
    printf("Média das quatro notas: %.1f", media);

    getchar();
    return 0;
}