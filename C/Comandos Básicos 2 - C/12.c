#include <stdio.h>
/*/Faça um algoritmo que leia uma lista de números inteiros positivos terminada pelo número 0
(zero). Ao final, o algoritmo deve mostrar a média aritmética de todos os números lidos
(excluindo o zero). /*/
int main(){

    int nn, nt, soma=0, media;

    for (nt=0;nn!=0;nt++){
        printf("Digite um numero: ");
        scanf("%d", &nn);
        soma = soma + nn;
    }
    media = soma / (nt-1);
    printf("A media dos numeros eh: %d", media);

    return 0;
}
