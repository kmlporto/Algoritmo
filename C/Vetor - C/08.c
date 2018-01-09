#include <stdio.h>

/*/
No dia 24/06/2017 foi realizado o sorteio da Quina de São João, em Campina Grande.
12 (doze) apostadores vão dividir o prêmio de R$ 11,6 milhões. A Caixa Econômica
pretende realizar uma auditoria nas apostas realizadas pelos 60(10) (sessenta) alunos de
APE/SI/IFPB, cada aluno apostou um jogo de 08 (oito) números. Você foi contratado
para desenvolver um programa para auxiliar nessa auditoria.
O programa deverá ler as dezenas apostadas por cada aluno e verificar se a aposta é
válida (cada dezena está entre [1, 80] e não pode haver repetição). Sendo válida, o
programa deverá calcular e exibir a quantidade de números acertados em cada aposta.
Não sendo válida, o programa deverá exibir “aposta inválida”.
Atenção! Dezenas sorteadas são: 06, 07, 13, 14 e 26.
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
