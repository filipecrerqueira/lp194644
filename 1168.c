/* --------------------------------------------------------------------------
Disciplina  : LC3gica de Programacao, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search1168
ExercC-cio   : 1168
Data        : 19/05/2026
Objetivo    : Vetores e laços
Aprendizado : utilizar informacoes salvas no vetor
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
	int led[] = {6,2,5,5,4,5,6,3,7,6};
	int N;
	char num[110];
	int total = 0;

	scanf("%d", &N);


	for(int i=0; i<N; i++) {

		scanf("%s", num);

		for(int z=0; num[z] != '\0'; z++) {

			int digito = (num[z]-'0');

			total += led[digito];


		}
		
       
        
		printf("%d leds\n", total);
		
         total=0;
	}


	return 0;
}

