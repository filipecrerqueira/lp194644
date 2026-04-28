/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Filipe Siqueira e Cerqueira
Linguagem   : C
Problema    : 1078.C
Data        : 28/04/26
Objetivo    : Ler valores e aplicar for 
Aprendizado : imprimir dentro do for e ler valores com ele 
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int N,i,s;
    s=0;
   
    
    scanf("%d", &N);
    
    for(i=1;i<=10;i++){
        
        s=i*N;
        
        printf("%d x %d = %d\n", i,N,s);
    }
    
    

    
return 0;
    
}
