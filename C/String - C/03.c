#include <stdio.h>
#include <string.h>

/*/
Escreva um programa, em C, para ler v�rias palavras do usu�rio. Monte uma frase com
as palavras informadas (separadas por �espa�o em branco�). O programa dever� encerrar
quando o usu�rio informar a palavra �acabou�. Calcular e exibir:
- Quantidade de palavras informadas;
- Exibir a frase montada.
/*/
int main (){

    char palavra[20], frase[400]=" ";
    int cont=0;

    printf("Palavra: ");
    gets(palavra);
    while (strcmp(palavra, "acabou")!=0){
        strcat(frase, palavra);
        strcat(frase, " ");
        cont ++;
        printf("Palavra: ");
        gets(palavra);
    }

    printf("A frase montada possui %d palavras.\n", cont);
    printf("Frase: %s.", frase);

    return 0;
}
