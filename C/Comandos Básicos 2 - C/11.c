#include <stdio.h>
//Escreva um algoritmo que leia um conjunto de números inteiros positivos e determine o maior deles. A leitura do valor 0 (zero) indica o fim dos dados (flag).
int main(){
    int nn, nf;

    for (nf=0;nn!=0;){
        printf("Digite um numero: ");
        scanf("%d", &nn);
        if(nn>nf){
            nf = nn;
        }
    }
    printf("O maior dos numeros eh: %d", nf);

    return 0;
}
