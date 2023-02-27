#include <stdio.h>

int main(){
    int op, op2;
    
    puts("Digite a opção para o switch externo");
    scanf("%d",&op);

    // switch externo
    switch(op){

        case 1:
            
            puts("Digite a opção para o switch interno");
            scanf("%d",&op2);

            // switch interno
            switch(op2){
                case 1:
                    puts("Opção 1 do switch interno");    
                break;
                case 2:
                    puts("Opção 2 do switch interno");    
                break;    

            }    

        break;
        case 2:
            puts("Opção 2 do switch externo");
        break;

    }


    return 0;
}