/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 194644
Nome        : Filipe Siqueira e Cerqueira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 07/05/2026
Objetivo    : comparar strings
Aprendizado : analisar termo a termo
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
	int n;
	char A[1001], B[1001];

	scanf("%d", &n);



	for(int i=0; i<n; i++) {

		int encaixa=1;

		scanf("%s %s", A, B);


		int tamanhoA = strlen(A);

		int tamanhoB = strlen(B);

		if(tamanhoB>tamanhoA) {

			encaixa=0;

		} else {

			for(int i=0; i<tamanhoB; i++) {



				int diferenca = (tamanhoA-tamanhoB);

				if(B[i]!=A[i+diferenca]) {

					encaixa = 0;
					break;

				}

			}


		}    

			if(encaixa == 0) {
				printf("nao encaixa\n");
			} else {
				printf("encaixa\n");
			}
		
	}

	return 0;
}

