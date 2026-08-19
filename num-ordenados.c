#include <stdio.h>

int main () {
    int n1, n2;
    
    printf("Digite o Numero 1: ");
    scanf("%d", &n1);
    
    printf("Digite o Numero 2: ");
    scanf("%d", &n2);
    
    if (n1 == n2) {
        printf("Error! Dois Numeros iguais\n");
    } 
    else if (n1 > n2) {
        printf("Numero 1: %d\nNumero 2: %d\n", n1, n2);
        printf("Ordenado: %d - %d\n", n1, n2);
    } 
    else {
        printf("Numero 1: %d\nNumero 2: %d\n", n1, n2);
        printf("Ordenado: %d - %d\n", n2, n1);
    }
    
    return 0;
}
