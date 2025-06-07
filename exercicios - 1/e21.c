/*
    Complete o código para que imprima os 10 primeiros números pares usando um loop.
*/

#include <stdio.h>

int main() {
    int i;

    printf("Os 10 primeiros números pares são:\n");
    
    // Implemente a lógica:
    i = 0;
    int contador = 0;
    while(contador < 10){
        if(i % 2 == 0){
            printf("%d ", i);
            contador++;
        }
        i++;
    }

    return 0;
}