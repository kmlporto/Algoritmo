#include <stdio.h>
/*
Escreva um programa para ler o NOME e a IDADE de 3 pessoas.
Defina um novo tipo de dados (estrutura) para armazenar esses dados.
Após ler os dados das 3 pessoas, exibir o nome e a idade de cada uma.
*/
typedef struct{
    char nome[31];
    int idade;
}Pessoa;


int main(){
    Pessoa pessoas[3];
    int i;

    for(i=0;i<3;i++){
        printf("Nome: ");
        scanf(" %[^\n]s", pessoas[i].nome);
        printf("Idade: ");
        scanf("%d", &pessoas[i].idade);
        getchar();
    }
    printf("\n            Pessoas cadastradas:         \n");
    for(i=0;i<3;i++){
       printf("Pessoa n%d:\nNome: %s\nIdade: %d\n", i+1, pessoas[i].nome,pessoas[i].idade);
    }
    return 0;
}
