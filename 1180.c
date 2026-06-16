/* --------------------------------------------------------------------------
Disciplina  : LC3gica de ProgramaC'C#o, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search1180
ExercC-cio   : 1180
Data        : 16/06/2026
Objetivo    : vetores
Aprendizado : Procurar posicoes e valores em vetores
-------------------------------------------------------------------------- */



#include<stdio.h>

int main() {
   int n,menor,i,posicao;
   
   i=0;
   
   scanf("%d",&n);
   
   int x[n];
   
   scanf("%d", &x[0]);
   
   menor=x[0];
   
   
   for(i=1;i<n;i++){
       
      
       
       scanf("%d", &x[i]);
       
       if(x[i]<menor){
           
           
           menor=x[i];
           posicao=i;
           
           
       }
      
   }
   
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
   
   
	return 0;
}
