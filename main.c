
#include <stdio.h>  // Biblioteca padrão de entrada e saída, necessária para usar printf e scanf

int main() {
    // Declaração de um vetor de inteiros com tamanho 5
    int vetor[5];  
    
    // Variável para armazenar a soma de todos os elementos do vetor
    int soma = 0;  
    
    // Variável de controle do laço
    int i;  

    // Solicita ao usuário que digite 5 números inteiros
    printf("Digite 5 numeros inteiros:\n");

    // Laço for para ler os 5 números do usuário
    for(i = 0; i < 5; i++) {
        // Solicita o i-ésimo número
        printf("Numero %d: ", i + 1);

        // Lê o número fornecido pelo usuário e armazena na posição i do vetor
        scanf("%d", &vetor[i]);

        // Soma o valor digitado à variável soma
        soma += vetor[i];
    }

    // Exibe uma mensagem indicando que os elementos do vetor serão mostrados
    printf("\nElementos do vetor:\n");

    // Laço for para imprimir cada elemento do vetor em uma linha
    for(i = 0; i < 5; i++) {
        printf("%d\n", vetor[i]);
    }

    // Exibe a soma total de todos os elementos do vetor
    printf("\nSoma dos valores: %d\n", soma);

    // Indica que o programa terminou corretamente
    return 0;
}






