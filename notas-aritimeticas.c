#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int alunos = 0;
    int tot_reprovados = 0, tot_exame = 0, tot_aprovados = 0;
    float n1, n2, media_aluno, soma_media_classe = 0;
    
    while (alunos < 6) {
        printf("\nAluno %d\n", alunos + 1);
        
        printf("Digite a Nota 1: ");
        scanf("%f", &n1);
        
        printf("Digite a Nota 2: ");
        scanf("%f", &n2);
        
        media_aluno = (n1 + n2) / 2.0;
        printf("Média: %.2f - ", media_aluno);
        
        if (media_aluno <= 3.0) {
            printf("Situação: Reprovado\n");
            tot_reprovados++;
        } 
        else if (media_aluno <= 7.0) {
            printf("Situação: Exame\n");
            tot_exame++;
        } 
        else {
            printf("Situação: Aprovado\n");
            tot_aprovados++;
        }
        
        soma_media_classe += media_aluno;
        alunos++;
    }
    
    float media_classe = soma_media_classe / 6.0;
    
    printf("\nTotal de Alunos Reprovados: %d\n", tot_reprovados);
    printf("Total de Alunos em Exame: %d\n", tot_exame);
    printf("Total de Alunos Aprovados: %d\n", tot_aprovados);
    printf("Média da Classe: %.2f\n", media_classe);
    
    return 0;
}