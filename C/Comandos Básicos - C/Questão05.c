#include <stdio.h>
//Escreva um programa, em C, para obter uma data (dia, m�s e ano) e converter em segundos. Considere o m�s com 30 dias e o ano com 12 meses.//
unsigned long long int main() {
    int min, hora, dia, mes, xdia, xmes, xano;
    unsigned long long int ano, s, s1, s2, s3;
    min = 60;
    hora = 60 * min;
    dia = 24 * hora;
    mes = 30 * dia;
    ano = 12 * mes;
    printf("Digite o dia: ");
    scanf("%d", &xdia);
        s1 = (dia * xdia) ;
    printf("Digite o m�s: ");
    scanf("%d", &xmes);
        s2 = (mes * (xmes-1));
    printf("Digite o ano: ");
    scanf ("%lli", &xano);
        s3 = (ano * xano);
    s = (s1 + s2 + s3);
    printf("Tempo em segundos:%lli\n", s);
    return 0;
}
