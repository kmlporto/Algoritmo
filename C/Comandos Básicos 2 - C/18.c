#include <stdio.h>
/*/
18. Um n�mero �, por defini��o, primo se ele n�o tem divisores, exceto 1 e ele pr�prio. Escreva um
algoritmo que leia um n�mero e determine se ele � ou n�o primo.
/*/
int main(){

    int i, n;
    printf("Digite um valor N:");
    scanf("%d", &n);
    for (i=1;i>n ;i++){
        if (n % i ==0){
            printf("%d nao � primo", n);
        } else {
            if (n % i != 0){
            printf("%d � primo", n);
            }
        }
    }
    return 0;
}
