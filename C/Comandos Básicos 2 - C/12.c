#include <stdio.h>
/*/Fa�a um algoritmo que leia uma lista de n�meros inteiros positivos terminada pelo n�mero 0
(zero). Ao final, o algoritmo deve mostrar a m�dia aritm�tica de todos os n�meros lidos
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
