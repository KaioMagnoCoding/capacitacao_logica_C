/*
    DESAFIO

    Crie um programa que:
    - peça ao usuário um número inteiro entre 1 e 10
    - salve esse número em uma variável
    - imprima sua tabuada de multiplicação até 10 usando um for
    - não digite nenhum número fixo no printf() da tabuada

    Dica: a ideia é usar o for para repetir um único printf(), 
    alterando seus valores a cada iteração através do uso de
    variáveis de controle como argumento
*/

#include <stdio.h>

int main() {
    // implementação:
    int num = 0;

    printf("Digite um numero inteiro entre 1 e 10: ");
    do{
        scanf("%d", &num);

        if(num < 1 || num > 10)
            printf("O numero digitado não esta entre 1 e 10.\nDigite novamente: ");

    }while(num < 1 || num > 10);

    int tabuada;
    printf("\n");
    for(int i = 0; i <= 10; i++){
        tabuada = num * i;
        printf("%d\n", tabuada);
    }

    return 0;
}