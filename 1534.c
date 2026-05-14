/* --------------------------------------------------------------------------
Disciplina  : LC3gica de ProgramaC'C#o, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search1534
ExercC-cio   : 1534
Data        : 13/05/2026
Objetivo    : montar uma matriz
Aprendizado : desvendar a lei de formacao e montar a matriz
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
	int n;
	int i,j,a;
	a=0;


	while (scanf("%d", &n) != EOF) {

		

		for(i=1; i<=n; i++) {
			for(j=1; j<=n; j++) {

				if((i+j) == (n+1)) {


					a=2;

				} else if(i == j) {

					a=1;

				        }else{
				            
				            a=3;
				        }
				 printf("%d", a);       

			}
			
			printf("\n");
		}
	}
	
return 0;
}


