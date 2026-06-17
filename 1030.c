/* --------------------------------------------------------------------------
Disciplina  : LC3gica de ProgramaC'C#o, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search1030
ExercC-cio   : 1030
Data        : 16/06/2026
Objetivo    : Josephos
Aprendizado : logica circular de vetores
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{

    int casos;

    scanf("%d", &casos);

    for (int i = 0; i < casos; i++)
    {

        int n;

        scanf("%d", &n);

        int pessoas[n];

        int pulos;

        scanf("%d", &pulos);

        for (size_t j = 0; j < n; j++)
        {
            pessoas[j] = 1;
        }

        int pessoasvivas = n;
        int posicaoatual = -1;

        while (pessoasvivas > 1)
        {

            int passosdados = 0;

            while (passosdados < pulos)
            {

                posicaoatual = (posicaoatual + 1) % n;

                if (pessoas[posicaoatual] == 1)
                {
                    passosdados++;
                }
            }

            pessoas[posicaoatual] = 0;
            pessoasvivas--;
        }

        int Y = 0;

        for (size_t z = 0; z < n; z++)
        {
            if (pessoas[z] == 1)
            {

                Y = z + 1;
            }
        }

        printf("Case %d: %d\n", i+1, Y);
    }

    return 0;
}
