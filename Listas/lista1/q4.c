#include <stdio.h>

int main(){
    int y;

    puts("Digite um número: ");
    scanf("%d",&y);

    printf("triplo = %d, quadrado = %d,  metade: %.2f \n",3*y,y*y,((float)y)/2);
    // printf("triplo = %d, quadrado = %d,  metade: %.2f \n",3*y,y*y,y/2.0);
    
    return 0;
}