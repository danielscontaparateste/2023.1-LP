#include <stdio.h>
int main() {
    int i = 1;

    // Exemplo 1
    // while(i <= 10){
    //     if(i % 2 == 0) continue;
    //     printf("%d \n", i);
    //     i++; 
    // }

    // Exemplo 2
    // while(i <= 10){
    //     if(i++ % 2 == 0) continue;
    //     printf("%d \n", i);
    // }

    // Exemplo 3
    while(i <= 10){
        if (!(i++ % 2)) continue;
        printf("%d \n", i);
    }
    

    return 0; 
}