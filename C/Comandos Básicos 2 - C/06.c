#include <stdio.h>
//Fa�a um algoritmo que leia um n�mero N, some todos os n�meros inteiros de 1 a N, e mostre o resultado obtido.
int main(){

    int n, soma;

    printf("Digite um n�mero qualquer: ");
    scanf("%d", &n);
    for (soma=n ;n>0; n--, soma=soma+n){
    }
    printf("A soma: %d", soma);
    return 0;
}
