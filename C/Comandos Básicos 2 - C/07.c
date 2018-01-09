#include <stdio.h>

float main(){
    float h, n;

    printf("Digite um número qualquer: ");
    scanf("%f", &n);
    for (h=0 ;n>0; n--){
        h = h + (1/n);
    }
    printf("H : %.4f", h);

    return 0;
}
