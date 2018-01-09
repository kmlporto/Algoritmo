#include <stdio.h>
/*/Faça um algoritmo que leia a altura de um grupo de 20 pessoas, calcule e exiba:
• a maior altura do grupo;
• a altura média;
• o número de pessoas com altura superior a 2 metros./*/
float main(){
    int np, npm2=0;
    float id, idt=0, maior, media;

    for(np=0; np<20; np++){
        printf("Altura: ");
        scanf("%f", &id);
        idt = idt + id;
            if (id>maior){
                maior = id;
            }
            if (id>2){
                npm2 = npm2+1;
            }
    }
    media = idt/20;
    printf("Maior altura do grupo: %.1f\n", maior);
    printf("Media da altura do grupo: %.2f\n", media);
    printf("Numero de pessoas com altura supeior a 2 metros: %d\n", npm2);

    return 0;
}
