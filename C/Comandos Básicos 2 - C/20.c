#include <stdio.h>
/*/Faça um algoritmo que leia um número N, calcule e mostre os N primeiros termos da seqüência
de Fibonacci (0, 1, 1, 2, 3, 5, 8, 13, ...). O valor lido para N sempre será maior ou igual a 2./*/
int main(){
    int n, n1, n2, i, auxiliar;

    printf("Digite um valor para N: ");
    scanf("%d", &n);

    n1=0;
    n2=1;

    printf("Digite um valor para N: ");
    scanf("%d", &n);
    printf("0,1, ");
    for (i=1;i<=n;i++){}
        auxiliar = n1+n2;
        n1 = n2;
        n2 = auxiliar;
        printf("%d, ", n2);
    }

    return 0;
}
