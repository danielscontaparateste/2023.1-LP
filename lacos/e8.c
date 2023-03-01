#include <stdio.h>

int main(){
    
    // Uso do continue
    for (int i=0; i<10; i++){
        printf("%d\t:\t",i);
        for (int j=0; j<10; j++){
            // O continue ignora todas as instruções posteriores do laço.
            if (j==3) continue; 
            printf("%d ",j);
        }
        printf("\n");
    }
    
    return 0;
}