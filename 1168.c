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
	
	int N;
	char num[110];
	int total = 0;

	scanf("%d", &N);


	for(int i=0; i<N; i++) {

		scanf("%s", num);

		for(int z=0; num[z] != '\0'; z++) {
		    

		    switch(num[z]){
		        case '0':
		            total+= 6;
		            break;
		        case '1':
		            total+= 2;
		            break;
		        case '2':
		            total+= 5;
		            break;
		        case '3':
		            total += 5;
		            break;
		        case '4':
		            total += 4;
		            break;
		        case '5':
		            total += 5;
		            break;
		        case '6':
		            total += 6;
		            break;
		        case '7':
		            total += 3;
		            break;
		        case '8':
		            total += 7;
		            break;        
		        case '9':
		            total += 6;
		            break;
		    }    
		


		}
		
       
        
		printf("%d leds\n", total);
		
         total=0;
	}


	return 0;
}
