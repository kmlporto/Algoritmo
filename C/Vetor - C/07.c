#include <stdio.h>
/*/
Foi elaborada uma prova objetiva contendo 200 (duzentas)quest�es para um concurso
p�blico. Escreva um programa, em C, para ler a matr�cula (valor inteiro), a quantidade
de acertos, quantidade de erros e a quantidade de quest�es n�o respondidas de cada
um dos 4000 (quatro mil)(10) candidatos que fizeram essa prova. Ao final, o programa
dever� exibir o c�digo de cada candidato que acertou, no m�nimo, 50% da prova, com
respectiva taxa de acerto, erro e quest�es n�o respondidas.
/*/

int main(){

    int matri[10], i, ac[10], er[10], br[10], percAc, percEr, percBr;

    for (i=0; i<9; i++ ){
        printf("Digite sua matricula: ");
        scanf("%d", &matri[i]);
        printf("Acertos: ");
        percAc = ((ac[i]*100)/200);
        scanf("%d", &ac[i]);
        printf("Erros: ");
        scanf("%d", &er[i]);
        printf("Branco: ");
        scanf("%d", &br[i]);

        if (percAc>50){
            printf("_________________________________________________________\n");
            printf("Matricula: %d \n", matri[i]);
            printf("Taxa de acerto: %d %% \n", percAc);
            percEr = ((er[i]*100)/200);
            printf("Taxa de erro: %d %% \n", percEr);
            percBr = ((br[i]*100)/200);
            printf("Taxa de questoes em branco: %d %% \n", percBr);
            printf("_________________________________________________________\n");
        }
    }
    return 0;
}
