#include <stdio.h>
//Escreva um algoritmo que leia um n�mero inteiro N e uma lista de N n�meros inteiros positivose determine o maior n�mero da lista.
int main(){
    int n, nn, nf, i;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
    for (nf=0,i=0;i!=n; i++){
        printf("Digite um numero: ");
        scanf("%d", &nn);
        if(nn>nf){
                nf = nn;
        }
    }
    printf("O maior dos %d numeros eh: %d", n, nf);

    return 0;
}
