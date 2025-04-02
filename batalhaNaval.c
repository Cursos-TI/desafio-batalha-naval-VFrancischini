#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Matriz bidimensional para representar o tabuleiro.
    int tabuleiro[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    // Posição dos navios.
    int navio1[3] = {1, 2, 3};
    int navio2[3] = {15, 20, 25};
    // Exibição do tabuleiro com os navios posicionados.
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int posicao = tabuleiro[i][j];
            int navio = 0;
            // Verifica a posição do navio1
            for (int k = 0; k < 3; k++)
            {
                if (navio1[k] == posicao)
                {
                    navio = 1; // Uma parte do navio encontrada
                    break; // Quebra quando uma parte do navio é encontrada
                }
                
            }

            if (!navio) // Verifica quando não encontrada nada no navio1
            {
                for (int k = 0; k < 3; k++)// Verifica a posição do navio2
                {
                    if (navio2[k] == posicao)
                    {
                        navio = 1;
                        break;
                    }
                    
                }
                
            }
            printf("%d ", navio ? 3 : 0); // Printa 3 quando encontra uma parte do navio1 ou navio2 e 0 para quando não encontra.
        }
        printf("\n");// Espaçamento entre as linhas
    }
    

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
