#include <stdio.h>
int main () {
    int idade, ano_nasc;

    printf("Digite o ano que você nasceu: ");
    scanf("%d" ,&ano_nasc);
    idade = 2017 - ano_nasc ;
    printf("Idade: %d anos" , idade);
    return 0;
}
