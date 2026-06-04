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

unsigned long long graos(int casas ){
    
    if(casas == 1){
        
        return 1;
    }
    
    
    return graos(casas-1)*2 + 1;
    
}

int main(){
    
    int teste, casas;
    
    
    scanf("%d", &teste);
    
    
    
   for(int z=0; z<teste; z++){
       
       
       scanf("%d", &casas);
       
       long long unsigned GRAOS = graos(casas);
       
       long long unsigned peso = (GRAOS/12)/1000;
       
       printf("%llu kg\n", peso);
       
   } 
    
    
    
    
    
    
 return 0;   
}
