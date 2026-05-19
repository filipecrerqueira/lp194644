/* --------------------------------------------------------------------------
Disciplina  : LC3gica de Programacao, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search1017
ExercC-cio   : 1017
Data        : 19/05/2026
Objetivo    : Fucoes
Aprendizado : desvendar a lei de formacao e montar a matriz
-------------------------------------------------------------------------- */

#include <stdio.h>

float calcularLitros(int tempo, int velocidade){
    
     float distancia = velocidade*tempo;
     
     float litros = distancia/12;
     
     return litros;
     
}

int main(){
    
    int tempo, velocidade;
    float litros;
    
    scanf("%d", &tempo);
    scanf("%d", &velocidade);
    
    litros = calcularLitros(tempo, velocidade);
    
    printf("%.3f\n", litros);
    
    
    
    

return 0;        
    

}
