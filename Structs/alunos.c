#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

int main() {
    struct Aluno alunos[5];
    float soma = 0;
    int i;

    for (i = 0; i < 5; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);

        soma = soma + alunos[i].nota;
    }

    printf("\nmedia das notas: %.2f\n", soma / 5);

    return 0;
}