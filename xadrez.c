#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    int b = 1;
    int r = 1;
    int opcao;
    printf("\n1. Bispo\n2. Torre\n3. Rainha\nEscolha a peça para movimentar:");
    scanf("%d", &opcao);
    switch (opcao)
    {
// Implementação de Movimentação do Bispo
    case 1:
        printf("Movimentando o Bispo...\n");
        do
        {
            printf("Cima,Direita\n");
            b++;
        } while (b <= bispo);
        break;
// Implementação de Movimentação da Torre
    case 2:
        printf("Movimentando a Torre...\n");
        for (int i = 0; i < torre; i++)
     {
        printf("Direita\n");
     }
        break;
// Implementação de Movimentação da Rainha
    case 3:
        printf("Movimentando a Rainha...\n");
        while (r <= rainha)
        {
            printf("Esquerda\n");
            r++;
        }
        break;
    default:
        printf("Opção inválida. Por favor, escolha uma peça válida.\n");
        break;
    }        

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
