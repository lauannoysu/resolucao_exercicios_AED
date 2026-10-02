#include <stdio.h>

struct Pessoa{
    char nome[50];
    int idade;
    float altura;
};


int main(){
    struct Pessoa p;
    printf("Digite seu nome");
    scanf("%[^\n]", p.nome);
    printf("Digite a idade: ");
    scanf("%d", &p.idade);
    printf("Digite a altura: ");
    scanf("%f", &p.altura);

    printf("\nDados\n");

    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Altura: %.2f\n", p.altura);

    return 0;
}