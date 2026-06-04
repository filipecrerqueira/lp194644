/* --------------------------------------------------------------------------
Disciplina  : LC3gica de Programacao, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search1029
ExercC-cio   : 1029
Data        : 19/05/2026
Objetivo    : Fucoes recursivas
Aprendizado : escrever a lei da funcao fazer ela se chamrar e contar essa chamada
-------------------------------------------------------------------------- */
#include <stdio.h>



int chamadas; //variavel global declarada antes de tudo




long int fibonacci(int n) {


	chamadas++;  //contador para cada vez que passar a funcao ele incremente ate acabar


	if(n == 0) {
		return 0;

	}
	if( n == 1) {
		return 1;

	}

	return fibonacci(n-1)+fibonacci(n-2);

}

int main () {

	int numero;
	long int resultado;
	int casos;


	scanf("%d", &casos);

	for(int z=0; z<casos; z++) {

		chamadas=0;

		scanf("%d", &numero);

		resultado = fibonacci(numero);

		int calls = chamadas-1; // beecrowd nao quer a contagem da inicial por isso to tirando aqui.

		printf("fib(%d) = %ld calls = %d\n", numero, calls, resultado);

	}

	return 0;
}
