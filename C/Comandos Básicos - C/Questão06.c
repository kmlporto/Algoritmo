#include <stdio.h>
int main(){
    int choc, refri, mistquent, sorv;
    float total, vchoc, vrefr, vmistquent, vsorv;
    vchoc = 1.5;
    vrefr = 2.0;
    vmistquent = 2.0;
    vsorv = 1.5;
    printf("Chocolate (qnt): ");
    scanf("%d", &choc);
    printf("Refrigerante (qnt): ");
    scanf("%d", &refri);
    printf("Misto Quente (qnt): ");
    scanf("%d", &mistquent);
    printf("Sorvete (qnt): ");
    scanf("%d", &sorv);
    total = (choc*vchoc)+ (refri*vrefr)+(mistquent*vmistquent)+(sorv * vsorv);
    printf("Total a pagar: %.1f reais",total);
    return 0;
}
