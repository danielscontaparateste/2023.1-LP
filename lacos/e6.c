#include <stdio.h>

int main(){
    
    /* Exercício: inserir uma "," entre os números de 0..9. Não pode ter vírgula depois do 9.*/
    
    for (int i=0; i<10; i++){
        printf("%d\t:\t",i);
        for (int j=0; j<10; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    
    
    return 0;
}