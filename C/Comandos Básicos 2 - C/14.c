#include <stdio.h>
/*/
Fa�a um algoritmo que, para um n�mero indeterminado de pessoas:
� leia a idade de cada pessoa, sendo que a leitura da idade 0 (zero) indica o fim dos dados
(flag) e n�o deve ser considerada;
� calcule e escreva o n�mero de pessoas;
� calcule e escreva a idade m�dia do grupo;
� calcule e escreva a menor e a maior idade;
/*/
int main(){

int id, np=0, soma, maior=0, menor=1000, media;

    for (soma=0;id!=0;np++){
        printf("Idade: ");
        scanf("%d", &id);
        soma = soma + id;
        if (id > maior){
            maior = id;
        }
        if((id != 0) && (id<menor)){
            menor = id;
        }
    }
    np = np - 1;
    media = soma /np;
    printf("Tem %d pessoas, a idade media delas eh de %d, sendo a maior idade %d e a menor %d", np, media, maior, menor);

    return 0;
}
