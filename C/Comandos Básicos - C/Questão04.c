#include <stdio.h>
//Escreva um programa, em C, para calcular e exibir o tempo necess�rio (em segundos)para percorrer uma determinada dist�ncia. Obtenha a dist�ncia percorrida e considere o movimento uniforme (MU), com velocidade de 20 m/s.//

int main(){
    float dist, tempo;
    int veloc;
    printf("Distancia a percorrer (m): ");
    scanf("%f", &dist);
    tempo = dist/20;
    printf("O tempo sera de %.1f segundos para percorrer a distancia de %.1f metros", tempo, dist);
    return 0;
}
