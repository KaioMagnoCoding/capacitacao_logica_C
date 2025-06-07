/*
    O programa abaixo deve verificar se um número informado pelo usuário está presente no vetor.
    
    Crie a lógica para realizar essa verificação.
    Se o número for encontrado, imprima "Número presente!".
    Se não for encontrado, imprima "Número ausente!".

    EXTRA: Utilize "break;" para interromper o loop quando o número é encontrado,
    de modo que a execução não continua verificando os outros números, tornando o código mais eficiente.
*/

#include <stdio.h>

int main() {
    int numeros[] = {3, 7, 12, 25, 30};
    int tamanho = 5;
    int alvo;
    int encontrado = 0;

    printf("Digite um número para buscar no array: ");
    scanf("%d", &alvo);
    
    // Lógica:
    for(int i = 0; i < tamanho; i++){ //o loop irá iterar sobre i de acordo com a variavel tamanho
        if(numeros[i] == alvo){ //verifica se o número atual é igual ao diigtado pelo usuario
            encontrado = alvo; //se for, a variavel 'encontrado' recebe o valor do alvo e é chamado um break após isso para quebrar o loop
            break;
        }
    }

    // Mensagem de resultado:
    if(encontrado == alvo){ //se o numero do usuario não for encontrado no loop, a segunda mensagem é imprimida dizendo que o numero esta ausente
        printf("Número encontrado!\n");
    }else
        printf("Número ausente!\n");

    return 0;
}