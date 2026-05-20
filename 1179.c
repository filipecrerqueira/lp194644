/* --------------------------------------------------------------------------
Disciplina  : LC3gica de ProgramaC'C#o, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search1179
ExercC-cio   : 1179
Data        : 13/05/2026
Objetivo    : preencher vetor
Aprendizado : preencher com regras cada vetor com base de dados de outro vetor pré lido
-------------------------------------------------------------------------- */
#include <stdio.h>


int main(){
    
    int par[5];
    int impar[5];
    int geral[15];
    int contadori=0, contadorp=0;
    
    for(int i=0; i<15; i++){
        
        scanf("%d", &geral[i]);
        
    }
    
    for(int i=0; i<15; i++){
        
        if(geral[i]%2 == 0){
            
            par[contadorp]=geral[i];
            
            contadorp++;
            
            if(contadorp==5){
                
                contadorp=0;
                
                for(int z=0; z<5; z++){
                    
                    printf("par[%d] = %d\n", z, par[z]);
                }
            }
            
            
        }else{
            impar[contadori]=geral[i];
            
            contadori++;
            
            if(contadori==5){
                
                contadori=0;
                
                for(int z=0; z<5; z++){
                    
                    printf("impar[%d] = %d\n", z, impar[z]);
                }
            }
            
        }
        
        
    }
    
     for(int i=0; i<contadori; i++){
        
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    
    for(int i=0; i<contadorp; i++){
        
        printf("par[%d] = %d\n", i, par[i]);
    }
    
    

return 0;    
}
