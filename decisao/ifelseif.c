#include <stdio.h>
#include <stdlib.h>

int main(){ 
    int idade;

    // Entrada
    puts("Digite sua idade: ");
    scanf("%d",&idade);

    // Validação do dado de entrada
    if (idade < 0){
        puts("Nem nasceu");
        exit(1);
    }

    // Processamento e Saída

    // if (idade < 16){
    //     puts("Não vota, Não Dirige");
    // }else if ( (idade >= 16) && (idade < 18)){
    //     puts("Vota, Não Dirige");
    // }else if (idade >= 18){
    //     puts("Vota, Dirige");
    // }

    if (idade < 16){
        puts("Não vota, Não Dirige");
    }else if ( idade < 18){
        puts("Vota, Não Dirige");
    }else{
        puts("Vota, Dirige");
    }


    return 0;
}