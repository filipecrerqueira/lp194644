/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1080a (sem usar vetores)
Data        : 18/04/2026
Objetivo    : Laço for
Aprendizado : usar o for e condicionais
-------------------------------------------------------------------------- */

#include<stdio.h>

 int main(){
     
     int X,i,maior,posicao;
        
     posicao=1;
     
     
     
     scanf("%d", &X);
     maior=X;
     
     for(i=2;i<=100;i++){
         
         
        scanf("%d", &X);
        
        
        
        if(X>maior){
            
            maior=X;
            posicao=i;
            
        }
        
        
    }    
    printf("%d\n",maior);
    printf("%d\n",posicao);
                
     
     

 return 0;
 }
