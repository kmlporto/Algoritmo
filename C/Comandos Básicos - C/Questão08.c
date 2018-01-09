#include <stdio.h>
int main(){
    int num1, num2;
    printf("Primeiro numero:");
    scanf("%d", &num1);
    printf("Segundo numero:");
    scanf("%d", &num2);
    printf("Quociente: %d",num1/num2);
    printf("\nResto: %d", num1%num2);
    return 0;
}
