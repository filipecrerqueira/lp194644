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

int josephus(int n, int k) {
    int sobrevivente = 0;
    for (int j = 2; j <= n; j++) {
        sobrevivente = (sobrevivente + k) % j;
    }
    return sobrevivente;
}

int main() {
    int n;

    while (scanf("%d", &n) && n != 0) {
        int m = 1;
        
        while (1) {
            if (josephus(n - 1, m) == 11) {
                printf("%d\n", m);
                break;
            }
            m++;
        }
    }

    return 0;
}
