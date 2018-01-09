#include <stdio.h>
/*/Faça um algoritmo que leia 3 números inteiros (N, X, Y) e mostre todos os números múltiplos
de N entre X e Y.
/*/
int main(){
    int i, n, x, y, aux;
    printf("Digite um valor N:");
    scanf("%d", &n);
    printf("Digite um valor X:");
    scanf("%d", &x);
    printf("Digite um valor Y:");
    scanf("%d", &y);
    printf("Os multiplos de %d sao: ",n);
    if (y<x){
        aux = x;
        x = y;
        y = aux;
    }
    for (i=x;i<=y;i++){
        if ((n%i)==0){
            printf("%d", i);
        }
    }
        return 0;
}
