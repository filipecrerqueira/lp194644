/* --------------------------------------------------------------------------
Disciplina  : LC3gica de ProgramaC'C#o, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search1175
ExercC-cio   : 1175
Data        : 13/05/2026
Objetivo    : vetor e trocas
Aprendizado : manipular elementos de um vetor 
-------------------------------------------------------------------------- */
#include <stdio.h>


int main(){
    
    int v[20];
    int aux=0;

    
    for(int i=0;i<20;i++){
        
       scanf("%d", &v[i]);
        
    }
    
    for(int i=0; i<10; i++){
        
        aux=v[i];
        
        v[i]=v[19-i];
        
        v[19-i]=aux;
        
        
        
    }
    
    
    for(int i=0; i<20; i++){
        
        
        printf("N[%d] = %d\n", i, v[i]);
        
        
    }
    
    
return 0;    
}
