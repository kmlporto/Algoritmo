#include <stdio.h>
/*/
Escreva um programa, em C, para ler 20 (vinte) n�meros do usu�rio e armazene em um

vetor (array). Ap�s a leitura dos n�meros o programa dever� ler outro n�mero (N).

Verifique se N est� no vetor, caso esteja informe seu �ndice, caso n�o esteja informe o

valor �-1�. /*/

int main(){

    int num[20], i, N, j=0;

    for (i=0; i<4; i++){
        printf("Digite um numero: ");
        scanf ("%d", &num[i]);
    }

    printf("N: ");
    scanf ("%d", &N);

    for(i=0; i<4; i++){
        if (num[i] == N){
            printf("indice: %d", i);
        }else {
            j++;
        }
    }

    if (j==i){
        printf("Indice: -1");
    }
    return 0;
}
