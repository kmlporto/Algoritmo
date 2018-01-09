#include <stdio.h>
#define TAM 2
/*
Escreva um programa que utilize uma estrutura empregado contendo os seguintes dados:
nome, sobrenome, RG e salário. O programa deve:
- Ler os dados de 10 empregados;
- Após a leitura de todos os empregados, exibir os empregados que tem salario maior
que R$ 1000,00
*/
typedef struct{
    char nome[16], sobrenome[41];
    int RG;
    float salario;
}Empregado;

int main (){
    Empregado emp[TAM];
    int i;

    for(i=0;i<TAM;i++){
        printf("Nome: ");
        scanf(" %[^\n]s", emp[i].nome);
        getchar();
        printf("Sobrenome: ");
        scanf(" %[^\n]s", emp[i].sobrenome);
        getchar();
        printf("RG: ");
        scanf("%d", &emp[i].RG);
        printf("Salario(R$): ");
        scanf("%f", &emp[i].salario);
    }

    printf("\n\n\nEmpregados com salarios maior que R$1000,00:         \n\n");
    for(i=0;i<TAM;i++){
        if (emp[i].salario > 1000)printf("Empregado %d:\nNome: %s\nSobrenome: %s\nRG: %d\nSalario(R$): %3.2f\n", i+1, emp[i].nome,emp[i].sobrenome, emp[i].RG, emp[i].salario);
    }
    return 0;
}
