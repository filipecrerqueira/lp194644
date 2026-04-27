/* --------------------------------------------------------------------------
Disciplina  : LC3gica de ProgramaC'C#o, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
ExercC-cio   : 1234
Data        : 26/04/2026
Objetivo    : vetores (strings)
Aprendizado : usar o vetor e funcoes de outras biblioteca
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
	char frase [50];
	int i, contador=0, tamanho;

	while(fgets(frase, sizeof(frase), stdin) !=NULL) {

		tamanho=strlen(frase);

        contador=0;

		for(i=0; i<tamanho; i++) {

			if(isalpha(frase[i])) {

				contador++;

				if(contador%2!=0) {


					frase[i]=toupper(frase[i]);

				} else {

					frase[i]=tolower(frase[i]);
				}




			}



		}

        
		printf("%s", frase);
	}
	return 0;
}
