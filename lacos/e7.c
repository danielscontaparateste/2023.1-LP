#include <stdio.h>

int main(){
    
    // Uso do break
    for (int i=0; i<10; i++){
        printf("%d\t:\t",i);
        for (int j=0; j<10; j++){
            // O break só permite sair do laço que está imediatamente inserido.
            if (j==3) break; 
            printf("%d ",j);
        }
        printf("\n");
    }
    
    return 0;
}