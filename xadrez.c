#include <stdio.h>
void movimentarbispo(int bispo){
    printf("Movimentando o Bispo...\n");
    for (int i = 0; i < bispo ; i++)
    {
      printf("Cima\n");
      int j = 0;
      while (j < 1)
      {
        printf("Direita\n");
        j++;
      }   
    }
    }

void movimentarcavalo(int cavalo){
    printf("Movimentando o Cavalo...\n");

    for (int i = 1; i <= cavalo; i++)
    {

        for (int j = 1; j <= 2; j++)
        {
            printf("Cima\n");

            if (j == 1)
                continue;
        }

        printf("Direita\n");

        break;
    }
}
void movimentarrainha(int r,int rainha){
    printf("Movimentando a Rainha...\n");
    if (rainha > 0){
    printf("Esquerda\n");
    movimentarrainha(r, rainha - 1);
  }
}
void movimentartorre(int torre){
     printf("Movimentando a Torre...\n");
    if (torre > 0){
    printf("Direita\n");
    movimentartorre(torre - 1);
  }
}

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    int torre = 5;
    int bispo = 5;
    int b = 1;
    int rainha = 8;
    int r = 1;
    int cavalo = 2;
    int opcao;
    printf("\n1. Bispo\n2. Torre\n3. Rainha\n4. Cavalo\nEscolha a peça para movimentar:");
    scanf("%d", &opcao);
    switch (opcao)
    {
// Implementação de Movimentação do Bispo
    case 1:
        movimentarbispo(bispo);
        break;
// Implementação de Movimentação da Torre
    case 2:
        movimentartorre(torre);
        break;
// Implementação de Movimentação da Rainha
    case 3:
       movimentarrainha(r, rainha);
        break;
// Implementação de Movimentação do Cavalo
    case 4:
        movimentarcavalo(cavalo);
        break;
    default:
        printf("Opção inválida. Por favor, escolha uma peça válida.\n");
        break;
    }        
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
