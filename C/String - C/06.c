#include <stdio.h>
#include <string.h>

/*/
Escreva um programa, em C, para ler 6 frases do usu�rio. Para cada frase o programa
dever� remover todos os �espa�os em branco�. O programa dever� exibir uma frase
contendo os 4 �ltimos caracteres de cada frase (separadas por �espa�o em branco�). Se a
frase n�o tiver 4 caracteres n�o dever� ser concatenada.
/*/

int main (){

    char frases[6][100];
    int cont, i, j, aux;

    for (i=0;i<6;i++){
        printf("Frase: ");
        gets (frases[i]);
        cont = strlen(frases[i]);
        if (cont>4){
            for (j=0; j<cont; j++){
                if (frases[i][j]==' '){
                    for(aux=j;aux<cont;aux++) {
                        frases[i][aux] = frases[i][aux+1];
                    }
                }
            }
            for(j=cont-5;j<cont;j++) printf("%c ", frases[i][j]);
        }
        else {
            printf("%s\n", frases[i]);
            cont = strlen (frases[i]);
            for(j=0;j<cont;j++) printf("%c ", frases[i][j]);
        }

        puts(" ");
    }


    return 0;
}
