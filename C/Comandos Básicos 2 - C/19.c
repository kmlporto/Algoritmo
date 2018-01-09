#include <stdio.h>
/*/
19. Faça um algoritmo que leia dois valores inteiros (X e Y) e mostre todos os números primos entre X e Y.
/*/
int main(){

  int x,y, cont, ax, i;

    printf("Digite um valor X:");
    scanf("%d", &x);
    printf("Digite um valor Y:");
    scanf("%d", &y);
    if (y<x){
      ax = x;
      x = y;
      y = ax;
    }
  for (;x<=y;x++){
      cont=0;
      for (i=2;i<=(x-1);i++){
        if (x%i==0){
          cont += 1;
        }
      }
      if (cont>=1){
       // printf ("%d nao e primo\n", x);
      }else{
        printf ("%d e primo\n", x);
      }
  }
    return 0;
}
