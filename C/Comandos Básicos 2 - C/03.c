#include <stdio.h>

//Fa�a um algoritmo que mostre todos os n�meros inteiros pares de 2 a 100.

int main(){

    int n;
    for (n=2;n<101;n ++){
        if ((n%2)==0){
            printf("%d\n",n);
        }
    }
    return 0;
}
