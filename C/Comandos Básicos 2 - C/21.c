#include <stdio.h>
/*/
Num frigor�fico existem 90 bois. Cada boi traz preso em seu pesco�o um cart�o contendo seu

n�mero de identifica��o e seu peso. Fa�a um algoritmo que escreva o n�mero e o peso do boi

mais gordo e do boi mais magro (supondo que n�o haja empates).
/*/
int main(){
    int id, idg=0, idm=0, p, gordo, magro, i;

    for (i=1;i<=3;i++){
    printf ("Identifica��o: ");
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
    printf("O mais gordo � o boi %d, com %d kg\n", idg, gordo);
    printf("O mais magro � o boi %d, com %d kg\n", idm, magro);

    return 0;
}
