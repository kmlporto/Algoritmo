#include <stdio.h>

int main (){

    int num[10], i;

    for (i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf ("%d", &num[i]);
    }

    for(i=9; i>=0; i--){
        printf ("%d\n", num[i]);
    }
    return 0;
}
