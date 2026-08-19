#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3, n4, soma;

    printf("Digite o Primeiro Número: ");
    scanf("%d", &n1);

    printf("Digite o Segundo Número: ");
    scanf("%d", &n2);

    printf("Digite o Terceiro Número: ");
    scanf("%d", &n3);

    printf("Digite o Quarto Número: ");
    scanf("%d", &n4);

    soma = n1 + n2 + n3 + n4;

    printf("Soma dos quatros números: %d", soma);

    getchar();
    return 0;
}