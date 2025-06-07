/*
    DESAFIO

    O código abaixo é idêntico ao do exercício anterior.
    Modifique-o, dessa vez, para que some cada numero de índice par 
    no vetor e subtraia cada número de índice ímpar.
    Teste seu programa.
*/


#include <stdio.h>

int main() {
    int v[5];  // declara um vetor de 5 posições
    int resultado, i;

    printf("Por favor, digite 5 inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("%dº valor: ", i + 1);
        scanf("%d", &v[i]);  // Guarda cada número do vetor
    }

    // Imprime os números armazenados no vetor
    printf("\nSeus números são:\n");
    for (i = 0; i < 5; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }

    // Calcula a soma dos índices pares e subtrai os ímpares
    resultado = 0;
    for (i = 0; i < 5; i++) {
        if (i % 2 == 0) {  // Se o índice for par
            resultado += v[i];  // Soma o valor
        } else {  // Se o índice for ímpar
            resultado -= v[i];  // Subtrai o valor
        }
    }
    printf("\n%d\n", resultado);

    return 0;
}