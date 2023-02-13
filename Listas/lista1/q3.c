#include <stdio.h>

int main(){
    float x;
    int y;

    puts("Digite um número: ");
    scanf("%f",&x);

    y = x;

    printf("y = %d, x = %.1f\n",y,x);
    

    return 0;
}