#include <stdio.h>
//Faça um algoritmo que leia um número N, some todos os números inteiros de 1 a N, e mostre o resultado obtido.
int main(){

    int n, soma;

    printf("Digite um número qualquer: ");
    scanf("%d", &n);
    for (soma=n ;n>0; n--, soma=soma+n){
    }
    printf("A soma: %d", soma);
    return 0;
}
