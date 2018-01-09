#include <stdio.h>
/*/Escreva um algoritmo que calcule o fatorial de um número inteiro lido, sabendo-se que:
• N ! = 1 x 2 x 3 x ... x N-1 x N
• 0 ! = 1 /*/

int main(){
    int n, fatorial=1, i;

    printf("Digite um numero:");
    scanf("%d", &n);
    for (i=n;i>=1; i--){
        fatorial = fatorial * i;
    }
    printf("%d!: %d ",n, fatorial);
    return 0;
}
