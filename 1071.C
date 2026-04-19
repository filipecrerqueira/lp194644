/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1071
Data        : 17/04/2026
Objetivo    : Laço for
Aprendizado : usar o for e condicionais
-------------------------------------------------------------------------- */

#include<stdio.h>

 int main(){
 
 
    int X,Y,s,i,maior,menor;
    
    X=0;
    Y=0;
    s=0;
    scanf("%d %d", &X, &Y);
    
    if (Y<X){
        menor=Y; 
        maior=X;
        
        
    } else{
        menor=X;
        maior=Y;
      }
    
    for(i=menor;i<maior;i++){
        if(i%2!=0 && i!=menor){
            
         s+=i;
        }
        
    }    
        
        
        
    printf("%d\n",s);
        
    
    
    
        return 0;          
  }
    
    
    
