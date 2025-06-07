/*
    DESAFIO:

    Crie um código que solicite um número N ao usuário
    e calcule a some dos N primeiros números naturais.

    exemplo: se o usuário digitar 5, o programa deve calcular 1 + 2 + 3 + 4 + 5 = 15
    Não utilize recursão, apenas loops.
*/
#include <stdio.h>

int main(){

    int N;

    printf("Digite um número maior que 0: ");
    scanf("%d", &N);
    printf("\n");

    int soma = 0;
    for(int i = 1; i <= N; i++){
        soma += i;
    }

    printf("A soma dos primeiros números naturais de %d é igual a: %d\n", N, soma);

    return 0;
}