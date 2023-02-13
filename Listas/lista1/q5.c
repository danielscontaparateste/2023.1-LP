#include <stdio.h>

int main(){
    float consumido, valorFinal;
    const int taxa =  10;

    // Entrada de Dados
    puts("Digite o valor consumido: ");
    scanf("%f",&consumido);

    // Processamento
    valorFinal = consumido + (consumido * taxa/100);

    // Saída
    printf("Valor a ser pago: R$ %.2f\n",valorFinal);

    return 0;
}