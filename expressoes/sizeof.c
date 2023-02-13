#include <stdio.h>

int main(){

    int a, b = 5, c;
    float x;

    unsigned long tam; //unsigned long int tam;

    printf("Variáveis: b: %d a: %d\n",b,a);

    puts("Espaço ocupado em memória: ");
    printf("int : %lu bytes\n",sizeof(int));
    printf("long int : %lu bytes\n",sizeof(long int));
    printf("short int : %lu bytes\n",sizeof(short int));
    printf("float : %lu bytes\n",sizeof(x));

    tam = sizeof(double);

    printf("double : %lu bytes\n", tam);

    
    return 0;
}