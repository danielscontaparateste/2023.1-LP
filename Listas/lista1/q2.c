#include <stdio.h>

int main(){
    int x;

    puts("Digite um número: ");
    scanf("%d",&x);

    printf("Inteiro: %d\n",x);
    printf("Hexadecimal: %x\n",x);
    printf("Octal: %o\n",x);
    printf("Endereço de x: %p\n",&x);

    return 0;
}