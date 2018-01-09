#include <stdio.h>

int main(){
    int n, nn, soma, i;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
    for (soma=0,i=0;i!=n; i++){
        printf("Digite um numero: ");
        scanf("%d", &nn);
        soma = soma + nn;
    }
    printf("A soma dos %d numeros eh: %d", n, soma);

    return 0;
}
