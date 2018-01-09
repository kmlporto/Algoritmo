#include <stdio.h>
int main(){
    float nota01, nota02, nota03, MA, MP;
    printf("Digite o valor da primeira nota:");
    scanf("%f", &nota01);
    printf("Digite o valor da segunda nota:");
    scanf("%f", &nota02);
    printf("Digite o valor da terceira nota:");
    scanf("%f", &nota03);
    MA = (nota01+nota02+nota03)/3;
    MP = (nota01*0,2)+(nota02*0,3)+(nota03*0,5);
    printf("Média aritimetica:%.1f", MA);
    printf("Media ponderada:%.1f", MP);
    return 0;
}
