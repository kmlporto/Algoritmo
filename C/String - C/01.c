#include <stdio.h>
#include <string.h>

//Escreva um programa, em C, para ler uma frase do usuário e imprimir na ordem inversa

int main (){

    char frase[50];

    printf ("Frase: ");
    gets (frase);
    printf("Frase invertida: %s.\n" ,strrev(frase));

    return 0;
}
