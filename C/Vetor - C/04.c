#include <stdio.h>

/*/
Escreva um programa, em C, para ler dois vetores (A e B) de 10 (dez) elementos. O

programa deverá gerar um vetor C com a soma dos respectivos elementos de A e B.

Exemplo: C[0] = A[0] + B[0].

/*/

int main(){

    int numa[10], numb[10], numc[10], i;


    for (i=0; i<10; i++){
        printf("Vetor A, posicao %d: ", i+1);
        scanf ("%d", &numa[i]);
        printf("Vetor B, posicao %d: ", i+1);
        scanf("%d", &numb[i]);
    }
    for (i=0; i<10; i++){
        numc[i] = numa[i] +numb[i];
        printf("Vetor C, posicao %d: %d \n", i+1, numc[i]);
    }


    return 0;
}
