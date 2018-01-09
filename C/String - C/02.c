#include <stdio.h>
#include <string.h>

//Escreva um programa, em C, para ler uma frase do usuário. Calcular e exibir a quantidade de palavras que forma essa frase.

int main (){

    char frase[70];
    int cont = 1;
    int i;

    printf("Frase: ");
    gets(frase);
    for(i=0;frase[i]!='\0';i++){
        if (frase[i]==' '){
            cont++;
        }
    }
    printf("Esta frase possui %d palavras", cont);

    return 0;
}
