/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1013
Data        : 06/04/2026
Objetivo    : if else
Aprendizado : resolver sem formulas especificas, traduzir pseudocodigo.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){

    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    
    if(A==B && B==C){
        printf("São Iguais!\n");
    }else if(A>B&&A>C){
        printf("%d eh o maior\n",A);
        
    }else if(B>C){
        printf("%d eh o maior\n",B);
    }else{
        printf("%d eh o maior\n",C);
    }
   

return 0;
}
