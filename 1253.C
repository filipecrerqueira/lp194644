/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 194644
Nome        : Filipe Siqueira e Cerqueira
Linguagem   : C
Problema    : 1253.C
Data        : 28/04/2026
Objetivo    : manipular strings, tabela ASC
Aprendizado : realizar multiplos deslocamentos de casas e reescrever uma string
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char texto[1001];
        int N;

        scanf("%s", texto);
        scanf("%d", &N);

        int i;
        int tamanho = strlen(texto);

        for (i = 0; i < tamanho; i++) {
            texto[i] = ((texto[i] - 'A' - N + 26) % 26) + 'A';
        }

        printf("%s\n", texto);
    }

    return 0;
}
