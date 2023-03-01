#include <stdio.h>

#define TRUE 1

int main(){
    int i = 0;
    
    // Versão 1.
    // while(i < 10){
    //     printf("%d\n",i);
    //     i++;
    // }

    // Versão 2
    // while(i < 10) printf("%d\n",i++);

    // E isso? O que acontece?
    // while(i < 10);
    // while(i++ < 10);

    // Loop infinito
    // while(1){
    //     printf("OI\n");
    // }

    while(TRUE){
        printf("OI\n");
    }
    

    return 0;

}