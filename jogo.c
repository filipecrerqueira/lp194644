#include <stdio.h>
#include <stdlib.h>

int verificacao_linhas(int sudoku[9][9], int linha);
int verificacao_colunas(int sudoku[9][9], int coluna);
int verificacao_bloco(int sudoku[9][9], int linha_inicio, int coluna_inicio);

int verificacao_linhas(int sudoku[9][9], int linha)
{

    int verif[9];

    for (size_t i = 0; i < 9; i++)
    {
        verif[i] = 0;
    }

    for (size_t i = 0; i < 9; i++)
    {
        if (sudoku[linha][i] == 0)
            continue;

        if (verif[sudoku[linha][i] - 1] == 0) // primeira leitura que verfica se ta ok, se tiver ok soma mais um e confirma a 'leitura'
        {

            verif[sudoku[linha][i] - 1] += 1;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int verificacao_colunas(int sudoku[9][9], int coluna)
{

    int verif[9];

    for (size_t i = 0; i < 9; i++)
    {
        verif[i] = 0;
    }

    for (size_t i = 0; i < 9; i++)
    {
        if (sudoku[i][coluna] == 0)
            continue;

        if (verif[sudoku[i][coluna] - 1] == 0)
        {

            verif[sudoku[i][coluna] - 1] += 1;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int verificacao_bloco(int sudoku[9][9], int linha_inicio, int coluna_inicio) // precisa verificar o bloco com isso tem 9 blocos e precisa separar cada inicio deles
{
    int verif[9];

    for (size_t i = 0; i < 9; i++)
    {
        verif[i] = 0;
    }

    for (int i = linha_inicio; i < linha_inicio + 3; i++)
    {
        for (int j = coluna_inicio; j < coluna_inicio + 3; j++)
        {

            int numero = sudoku[i][j]; // aqui ro armazenando o valor das casas para o verif ler

            if (numero == 0)
                continue;

            if (verif[numero - 1] == 0) // começa a verificacao, ja tem um loop para garantir que vai verif tudo
            {

                verif[numero - 1] += 1;
            }
            else
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int sudoku[9][9] = {0};

    int linha_inicio, coluna_inicio;
    FILE *arquivo;

    arquivo = fopen("C:\\Users\\Filipe Cerqueira\\Documents\\Codigos Beecrowd\\Sudoku\\input2.txt", "r");

    if (arquivo == NULL)

    { // se der errado esse passo precisa finalizar o programa para evitar travamentos

        printf("Erro ao ler o arquivo.\n");
        printf(" Coloque o arquivo na mesma pasta do jogo e tente novamente.\n");
        return 1;
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            fscanf(arquivo, "%d", &sudoku[i][j]);
        }
    }
    fclose(arquivo);

    printf("Tabuleiro carregado com sucesso!\n\n");

    printf("=========SUDOKU INTERATIVO===============\n");
    printf("COMO JOGAR:\n selecione a linha depois a coluna em que o 0 se encontra\n e escolha o numero que deseja substituir.\n");

    printf("Jogo carregado com sucesso!.");
    printf("\n===================================\n");

    int jogo_ativo = 1;

    while (jogo_ativo == 1)
    {

        for (int i = 0; i < 9; i++)
        {
            // A cada 3 linhas, imprime uma linha divisória horizontal
            if (i > 0 && i % 3 == 0)
            {
                printf("------+-------+------\n");
            }

            for (int j = 0; j < 9; j++)
            {
                // A cada 3 colunas, imprime uma barra vertical
                if (j > 0 && j % 3 == 0)
                {
                    printf("| ");
                }

                // Imprime o número da matriz diretamente, mantendo os zeros (0)
                printf("%d ", sudoku[i][j]);
            }
            printf("\n");
        }
        int linha, coluna, numero; // entrada de dados do usuario

        printf("Digite a linha (1-9):\n");

        scanf("%d", &linha);

        printf("Digite a coluna (1-9):\n");

        scanf("%d", &coluna);

        printf("Digite o seu palpite (1-9):\n");

        scanf("%d", &numero);

        linha--;
        coluna--;

        if (linha > 8 || linha < 0 || coluna < 0 || coluna > 8 || numero > 9 || numero < 1)
        {

            printf("Palpite invalido, favor escolher linha (1-9), coluna (1-9) e palpite de (1-9).\n Pressione ENTER para continuar...");

            getchar();
            continue;
        }

        if (sudoku[linha][coluna] != 0)
        {
            printf("Posição invalida favor escolher algum 0 para substituir.\nPressione ENTER para continuar...");

            getchar();
            continue;
        }

        sudoku[linha][coluna] = numero;

        int valido = 1;

        for (size_t z = 0; z < 9; z++) // laco para comecar as verif, com um parametro fixo e outro variavel como ja passado para a função
        {
            if (verificacao_colunas(sudoku, z) == 0 || verificacao_linhas(sudoku, z) == 0)
            {

                valido = 0;
                break;
            }
        }

        for (linha_inicio = 0; linha_inicio < 9; linha_inicio += 3)
        {
            for (coluna_inicio = 0; coluna_inicio < 9; coluna_inicio += 3)
            {

                if (verificacao_bloco(sudoku, linha_inicio, coluna_inicio) == 0)
                {

                    valido = 0;
                    break;
                }
            }
        }

        if (valido == 1)
        {
            printf("Palpite inserido com sucesso, vamos para o proximo!");
        }
        else
        {
            printf(" Palpite errado !");

            sudoku[linha][coluna] = 0;
        }

        system("pause");
        system("cls");
        getchar();

        int zeros_restantes = 0;

        for (size_t i = 0; i < 9; i++)
        {
            for (size_t j = 0; j < 9; j++)
            {
                if (sudoku[i][j] == 0)
                {
                    zeros_restantes++;
                }
            }
        }
        if (zeros_restantes == 0)
        {
            system("cls");

            for (int i = 0; i < 9; i++)
            {
                if (i > 0 && i % 3 == 0)
                {
                    printf("------+-------+------\n");
                }

                for (int j = 0; j < 9; j++)
                {
                    if (j > 0 && j % 3 == 0)
                    {
                        printf("| ");
                    }
                    printf("%d ", sudoku[i][j]);
                }
                printf("\n");
            }

            printf("\n=============================================\n");
            printf("PARABENS! Voce completou o Sudoku com sucesso!\n");
            printf("=============================================\n");
            system("pause");
            jogo_ativo = 0;
        }
    }
    return 0;
}
