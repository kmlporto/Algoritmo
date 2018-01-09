#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*/
Escreva um programa, em C, para ler uma frase do usuário. Calcule e exiba:
- Quantidade de vogais;
- Quantidade de consoantes;
- Quantidade de caracteres especiais.
/*/

int main (){

    char frase[200], teste[2], vogais[]="aAeEiIoOuU", cons[]="bBcCdDfFgGhHjJkKlLmMnNpPqQrRsStTvVxXzZwWyY";
    int qtv, qtc, qtce, i, tamanho;

    qtv=qtc=qtce=0;

    teste[1]='\0';
    printf("Frase: ");
    gets(frase);
    tamanho = strlen(frase);

    for(i=0;i<tamanho;i++){
        teste[0] = frase[i];
        if(strstr(vogais, teste)) qtv++;
        else if (strstr(cons, teste)) qtc++;
        else qtce++;
    }

    printf("%d vogais\n%d consoantes\n%d digitos especiais\n", qtv, qtc, qtce);

    return 0;
}
