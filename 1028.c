/* --------------------------------------------------------------------------
Disciplina  : LC3gica de Programacao, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search1028
ExercC-cio   : 1028
Data        : 04/06/2026
Objetivo    : Fucoes recursivas, e mmc
Aprendizado : escrever a lei da funcao fazer ela se chamrar e contar essa chamada
-------------------------------------------------------------------------- */
#include <stdio.h>

int mdc(int a, int b) {


	if(b == 0) { // se temos um divisivel pelo outro ja temos que b sera o mdc

		return a;
	}
	 // se nao temos isso troca e faz dnv ate a%b=0 que eh a condição de "parada"

	return mdc(b, a%b);
	

}

int main () {

	int a, b;
	int resultado;
	int jogadas;

	scanf("%d", &jogadas);

	for(int z=0; z<jogadas; z++) {

		scanf("%d %d", &a, &b);

		resultado = mdc(a,b);

		printf("%d\n", resultado);

	}


	return 0;
}

