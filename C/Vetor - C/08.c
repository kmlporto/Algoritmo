#include <stdio.h>

/*/
No dia 24/06/2017 foi realizado o sorteio da Quina de S�o Jo�o, em Campina Grande.
12 (doze) apostadores v�o dividir o pr�mio de R$ 11,6 milh�es. A Caixa Econ�mica
pretende realizar uma auditoria nas apostas realizadas pelos 60(10) (sessenta) alunos de
APE/SI/IFPB, cada aluno apostou um jogo de 08 (oito) n�meros. Voc� foi contratado
para desenvolver um programa para auxiliar nessa auditoria.
O programa dever� ler as dezenas apostadas por cada aluno e verificar se a aposta �
v�lida (cada dezena est� entre [1, 80] e n�o pode haver repeti��o). Sendo v�lida, o
programa dever� calcular e exibir a quantidade de n�meros acertados em cada aposta.
N�o sendo v�lida, o programa dever� exibir �aposta inv�lida�.
Aten��o! Dezenas sorteadas s�o: 06, 07, 13, 14 e 26.
/*/

int main(){

    int  resul[5],alunos, i, num[8],j;

    resul[0]=6;
    resul[1]=7;
    resul[2]=13;
    resul[3]=14;
    resul[4]=26;

    for (i=0; i<10; i++){
        printf("Aluno numero %d, digite as 08 dezenas que voce apostou: ", (i+1));
        for (j=0; j<8; j++){
            scanf("%d", &num[j]);
            for (resul[0];resul[5];resul){
                if (num[i]){
                }
            }


            if((num[j]=<1)&& (num[j]=>80)){
                printf("Aposta Invalida!");
            }else{
                if (num[j]){
                }
            }
        }
    }

    return 0;
}
