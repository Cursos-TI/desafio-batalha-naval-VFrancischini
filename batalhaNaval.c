#include <stdio.h>

// Desafio Batalha Naval - MateCheck

// Constantes do Tabuleiro
#define TABULEIRO_LINHAS 10
#define TABULEIRO_COLUNAS 10
// Constante dos Navios
#define TAMANHO_NAVIO 3

int main() {
    // Declaração da matriz bidimensional para representar o tabuleiro.
    int tabuleiro[TABULEIRO_LINHAS][TABULEIRO_COLUNAS];
    int soma = 0;
    // Populando a matriz
    for (int i = 0; i < TABULEIRO_LINHAS; i++)
    {
        for (int j = 0; j < TABULEIRO_COLUNAS; j++)
        {
            soma++;
            tabuleiro[i][j] = soma;
        }
    }
    // Declaração dos navios e atribuindo suas posições.
    int navio1[TAMANHO_NAVIO] = {1, 2, 3};
    int navio2[TAMANHO_NAVIO] = {20, 30, 40};
    int navio3[TAMANHO_NAVIO] = {73, 82, 91};
    int navio4[TAMANHO_NAVIO] = {78, 89, 100};
    // Exibição do tabuleiro com os navios posicionados.
    for (int i = 0; i < TABULEIRO_LINHAS; i++)
    {
        for (int j = 0; j < TABULEIRO_COLUNAS; j++)
        {
            // guarda o índice do tabuleiro
            int posicao = tabuleiro[i][j];
            // Variavel auxiliar quando é encontrado parte do navil
            // Reinicializada para 0 a cada nova posição do tabuleiro
            int navio = 0;
            // Array auxiliar para verificar as posições dos navios
            // Array de ponteiros para inteiros
            int *navios[] = {navio1, navio2, navio3, navio4};

            for (int k = 0; k < 4; k++)// Loop sobre os navios
            {
                for (int n = 0; n < TAMANHO_NAVIO; n++)// Loop sobre as posições de um navio
                {
                    if (navios[k][n] == posicao) // Verifica se parte do navio esta na posição atual (i)(j)
                    {
                        navio = 1;
                        break; // Interrompe o loop interno (n)
                    }
                    
                }
                
            }
            printf("%d ", navio ? 3 : 0); // Printa 3 quando é parte do navio ou 0 para quando é água.
        }
        printf("\n");// Espaçamento entre as linhas
    }

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
