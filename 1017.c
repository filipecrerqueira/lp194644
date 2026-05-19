/* --------------------------------------------------------------------------
Disciplina  : LC3gica de Programacao, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search1017
ExercC-cio   : 1017
Data        : 19/05/2026
Objetivo    : Fucoes
Aprendizado : encontrar uma lei para calcular um valor
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
    
    int tempo, velocidade;
    float litros=0;
    
    scanf("%d", &tempo);
    scanf("%d", &velocidade);
    
    float distancia = tempo*velocidade;
    
    litros = distancia/12;
    
    printf("%.3f\n", litros);
    
return 0;        
    

}
