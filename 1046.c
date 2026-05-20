/* --------------------------------------------------------------------------
Disciplina  : LC3gica de Programacao, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search1046
ExercC-cio   : 1046
Data        : 19/05/2026
Objetivo    : Fucoes
Aprendizado : escrever a lei da funcao e chamar ela depois
-------------------------------------------------------------------------- */

#include <stdio.h>

int calcularHoras(int hora1, int hora2) {
    
    int tempo=0;

	if(hora1>=hora2) {

		tempo =(24-hora1) +  hora2;

	} else {

		tempo =(hora2) -  hora1;
	}


	return tempo;
}

int main() {
	int hora1, hora2;
	int tempo;

	scanf("%d %d", &hora1, &hora2);

	tempo = calcularHoras(hora1, hora2);

	printf("O JOGO DUROU %d HORA(S)\n", tempo);

	return 0;
}

