#include <stdio.h>
/*/
18. Um número é, por definição, primo se ele não tem divisores, exceto 1 e ele próprio. Escreva um
algoritmo que leia um número e determine se ele é ou não primo.
/*/
int main(){

    int i, n;
    printf("Digite um valor N:");
    scanf("%d", &n);
    for (i=1;i>n ;i++){
        if (n % i ==0){
            printf("%d nao é primo", n);
        } else {
            if (n % i != 0){
            printf("%d é primo", n);
            }
        }
    }
    return 0;
}
