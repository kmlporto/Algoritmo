#include <stdio.h>
//Escreva um algoritmo que leia um conjunto de 100 números inteiros positivos e determine o maior deles.
int main(){

    int n1=0, nf=0, i;

   for (i=0;i<100; i++){
        printf("Digite um numero: ");
        scanf("%d", &n1);
        if(nf<n1){
                nf=n1;
        }
    }
    printf("O maior numero eh: %d", nf);

    return 0;
}
