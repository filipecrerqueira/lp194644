/* --------------------------------------------------------------------------
Disciplina  : LC3gica de Programacao, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search1441
ExercC-cio   : 1441
Data        : 04/06/2026
Objetivo    : Fucoes recursivas, e sequencias
Aprendizado : escrever a lei da funcao fazer ela se chamrar 
-------------------------------------------------------------------------- */
#include <stdio.h>

long long collatz(long long n) {

    long long maior = n;
    
    if(n == 0){
        
        return 0;
    }

    while(n != 1) {
        
        if( n%2 == 0){
            
            n = n/2;
            
        }else{
            
            n = 3*n + 1;
        }
        
        if(n>maior){
            
            maior=n;
            
            
        }

    }

    return maior;
}

int main(){
    
    long long H;
    
    
    
    
    
    while(scanf("%lld", &H)!= EOF){
        
        if( H == 0){
            break;
        }
        
        long long resultado = collatz(H);
        
        printf("%lld\n", resultado);
        
    }
    
    
  return 0;  
}
