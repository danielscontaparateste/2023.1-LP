#include <stdio.h>
#include <stdlib.h>

int somar(int a, int b);
int subtrair(int a, int b);

int main(){

    int x, y;

    // Entrada de Dados
    puts("Digite o primeiro valor: ");
    scanf("%d",&x);

    puts("Digite o segundo valor: ");
    scanf("%d",&y);

    puts("Escolha uma das opções a seguir: ");
    puts("1. Somar");
    puts("2. Subtrair");
    puts("3. Multiplicação");
    puts("4, 5 ou 6. Dividir");

    int op;
    scanf("%d",&op);

    // Processamento
    // int r;
    // if (op == 1){
    //     r = x + y;
    // }else if(op == 2){
    //     r = x - y;
    // }else if(op == 3){
    //     r = x * y;
    // }else if(op == 4){
    //     r = x / y;
    // }else{
    //     puts("Opção Inválida");
    // }

    int r; 
    switch(op){
        case 1:
            r = somar(x,y);
        break;
        case 2:
            r = subtrair(x,y);
        break;
        case 3:
            r = x * y;   
        break;
        case 4:
        case 5:
        case 6:
            r = x / y;         
        break;
        default:
            puts("Opção Inválida");    
            exit(1);
    }

    // Saída
    printf("Resultado da operação: %d\n",r);

    return 0;
}


int somar(int a, int b){
    int res;
    res = a + b;
    return res;
}

int subtrair(int a, int b){
    return (a-b);
}