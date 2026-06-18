#include <stdio.h>
#include <stdlib.h>

int verificacao_linhas(int sudoku[9][9], int linha);
int verificacao_colunas(int sudoku[9][9], int coluna);
int verrificacao_bloco(int sudoku[9][9], int linha_inicio, int coluna_inicio);

int verificacao_linhas(int sudoku[9][9], int coluna)
{

    int verif[9];

    for (size_t i = 0; i < 9; i++)
    {
        verif[i] = 0;
    }

    for (size_t i = 0; i < 9; i++)
    {

    
        if (verif[sudoku[i][coluna]-1] == 0) //primeira leitura que verfica se ta ok, se tiver ok soma mais um e confirma a 'leitura'
        {

            verif[sudoku[i][coluna]-1] += 1;
        }
        else
        {
            return 0;
        }
    }


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

    
        if (verif[sudoku[i][coluna]-1] == 0)
        {

            verif[sudoku[i][coluna]-1] += 1;
        }
        else
        {
            return 0;
        }
    }

}    
int verrificacao_bloco(int sudoku[9][9], int linha_inicio, int coluna_inicio ) // precisa verificar o bloco com isso tem 9 blocos e precisa separar cada inicio deles  
{

    //precisa montar algo aqui para mudar sempre a lina de inico e/ou coluna


    for (int i = linha_inicio; i < linha_inicio + 3; i++)
    {   for (int j = coluna_inicio; i < coluna_inicio + 3; i++)
    {
        


    }
    
        
    }
    


}

int main()
{

    int casos;

    scanf("%d", &casos);

    for (int i = 0; i < casos; i++)
    {
    }
}
