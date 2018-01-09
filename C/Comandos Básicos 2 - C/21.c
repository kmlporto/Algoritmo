#include <stdio.h>
/*/
Num frigorífico existem 90 bois. Cada boi traz preso em seu pescoço um cartão contendo seu

número de identificação e seu peso. Faça um algoritmo que escreva o número e o peso do boi

mais gordo e do boi mais magro (supondo que não haja empates).
/*/
int main(){
    int id, idg=0, idm=0, p, gordo, magro, i;

    for (i=1;i<=3;i++){
    printf ("Identificação: ");
    scanf ("%d", &id);
    printf ("Peso: ");
    scanf ("%d", &p);
        if(p<magro){
            magro = p;
            idm = id;
        }else{
            if (p>gordo)
                gordo = p;
                idg = id;
            }
    }
    printf("O mais gordo é o boi %d, com %d kg\n", idg, gordo);
    printf("O mais magro é o boi %d, com %d kg\n", idm, magro);

    return 0;
}
