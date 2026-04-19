/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1080b (vetores)
Data        : 18/04/2026
Objetivo    : vetores
Aprendizado : usar o vetor e comparações, declarar a posição
-------------------------------------------------------------------------- */

#include<stdio.h>

 int main(){
    
    
    int v[100],maior,i,posicao;
    posicao=1;
    
    scanf("%d", &v[0]);
    maior=v[0];
    
    for(i=1;i<=99;i++){
        scanf("%d", &v[i]);
        if(v[i]>maior){
            maior=v[i];
            posicao=i+1;
        }
        
        
        
    }
    
        printf("%d\n", maior);
        printf("%d\n", posicao);

    
 return 0;
 }
