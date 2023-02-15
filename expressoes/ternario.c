#include <stdio.h>

int main(){
    int x;

    // Entrada de Dados
    puts("Digite um valor inteiro: ");
    scanf("%d",&x);

    // Processamento
    // x *= (x%2 == 0)?2:1;
    x *= (x%2)?1:2;

    // Saída
    printf("Resultado: %d\n",x);

    return 0;

}