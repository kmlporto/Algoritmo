#include <stdio.h>
int main (){
    float verba, custo, saudo, passagem, hospedagem, alimentacao;

    verba = 8000;
    printf("Valor da passagem: ");
    scanf("%f", &passagem);
    printf("Valor da hospedagem: ");
    scanf("%f", &hospedagem);
    printf("Valor da alimentacao: ");
    scanf("%f", &alimentacao);
    custo = (passagem+hospedagem+alimentacao);
    saudo = verba - custo;
    if (saudo>0){
        printf("E poss�vel viajar!");
    }else{
        printf("Nao e poss�vel viajar!");
        }
    return 0;
}
