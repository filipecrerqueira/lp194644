
/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search1258
Exercício   : 1258
Data        : 27/05/2026
Objetivo    : struct e ordenacao.
Aprendizado : preencher uma struct, comparar valores e ordenar, to usando o bubble sort que aprendi em um vídeo.
-------------------------------------------------------------------------- */


#include <stdio.h>
#include <string.h>


typedef struct {
	char cor[50];
	char tamanho;
	char nome[100];
} camisas;

int main () {


	int quantidade;
	int primeiro = 1; // controle para linha em branco entre casos

	while (scanf("%d", &quantidade) != EOF) { // agora lê TODOS os casos, e fica lendo enquanto tem dados na entrada

		if (primeiro == 0) {
		
		printf("\n");
		}
		primeiro = 0;

		camisas c[100];
		camisas aux; // aqui eh para o swap mais pra frente, que vou precisar salvar a struct temporareamente

		for(int i=0; i<quantidade; i++) {

			scanf(" %[^\n]", c[i].nome); // lê nome completo (com espaço)
			scanf("%s %c", c[i].cor, &c[i].tamanho);

		}/* preenchendo a struct com cada uma das informacoes e armazenando uma por uma
       com o c[i] */

		//agora vamos fazer o bubbleSort para organizar em ordem alfabetica.

		for(int z=0; z<quantidade-1; z++) {
			for(int i=0; i<quantidade-1-z; i++) {
				// vi que esse parametro quantidade-1-z serve para otimizar e o for nao vai ficar lendo tudo dnv

				if(

				    strcmp(c[i].cor,c[i+1].cor)>0 ||
				    /* primeira condicao lendo a cor e ordenando elas, temos que criar um if composto, esse tera 3 condicoes
				       e assim o primeiro caso vai ordenar as cores dps ordena o tamanho dps ordena o nome */


				    ( strcmp(c[i].cor,c[i+1].cor) == 0 &&

				      c[i].tamanho < c[i+1].tamanho) ||

				    (strcmp(c[i].cor,c[i+1].cor) == 0 &&
				     // esse eh o condicional triplo para comparar vetor por vetor e trocar sempre que precisar

				     c[i].tamanho == c[i+1].tamanho &&

				     strcmp(c[i].nome,c[i+1].nome)>0)


				) {

					// agora vamos fazer o swap

					aux = c[i];
					c[i] = c[i+1];
					c[i+1] = aux;

				}

			}
		}

		for(int z=0; z<quantidade; z++) {

			printf("%s %c %s\n", c[z].cor, c[z].tamanho, c[z].nome);

		}

	}

	return 0;
	

}
