#include <stdio.h>
/*/

Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro

elemento com o último, o segundo elemento com o penúltimo, etc., até trocar o 10o com

o 11o. Mostre o vetor modificado.

/*/

int main(){

    int N[20], i,aux;

    for (i=0; i<20; i++){
        printf("Digite um numero: ");
        scanf ("%d", &N[i]);

    }

    for (i=0; i<10; i++){
        aux = N[i];
        N[i] = N [19-i];
        N[19-i] = aux;

    }
    for (i=0;i<20; i++){
        printf("%d\n", N[i]);
    }
    return 0;
}
