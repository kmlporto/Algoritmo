#include <stdio.h>

/*/

Escreva um programa, em C, para ler 10 (dez) números. Ao final exiba se os números

são distintos, ou seja, não possui repetição.

/*/


int main(){

    int num[10], i, aux[10], j, a=0;

    for (i=j=0; i<10; i++, j ++){
        printf("Digite um numero: ");
        scanf ("%d", &num[i]);
        aux[j] = num[i];
    }
    for (i=0; i<10;i++){
        for (j=0; j<10, j!=i;j++){
            if (num[i] == aux[j]){
               a++;
            }
        }
    }
    if (a==0){
        printf("Os numeros sao distintos, ou seja, nao possui repeticao");
    }else{
        printf("ha %d repeticoes", a);
    }
    return 0;
}
