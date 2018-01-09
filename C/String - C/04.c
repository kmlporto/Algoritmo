#include <stdio.h>
#include <string.h>

/*/
Escreva um programa, em C, para ler 6 frases do usuário, calcule e exiba quantas frases
possui a palavra “IFPB”.
/*/

int main (){

    char frase[6][50];
    int i, cont=0;

    for (i=0;i<6;i++){
        puts("Frase: ");
        gets (frase[i]);
        if (strstr (frase[i], "IFPB")!= 0){
            cont++;
        }
    }

    printf("%d frases possuem IFPB.", cont);

    return 0;
}
