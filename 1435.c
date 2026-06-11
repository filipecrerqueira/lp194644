/* --------------------------------------------------------------------------
Disciplina  : LC3gica de ProgramaC'C#o, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search1435
ExercC-cio   : 1435
Data        : 11/06/2026
Objetivo    : Matrizes
Aprendizado : montar uma matriz
-------------------------------------------------------------------------- */

#include <stdio.h>

int main (){

    int ordem;

    int matriz[ordem][ordem];

   
    

    while (scanf("%d", &ordem) != 0)
    {

     int inicio = 0;
     int fim = ordem;


        for (int i = 0; i < ordem; i++)
        {
            for (int j = 0; j < ordem; j++)
            {
                matriz[i][j]= 0;
            }
            
        }
        
 
        while(fim > ordem/2){

            for (int i = inicio; i < fim; i++)
            {
                for (int j = inicio; j < fim; j++)
                {
                    
                
                    matriz[i][j]+=1;
                    



                }
                
            }
            inicio ++;
            fim --;
     
        }
       
        for (int i = 0; i < ordem; i++)
        {   for (int z = 0; z < ordem; z++)


            {
                printf("%d", matriz[i][j]);
            }
        
            printf("\n");
        }
        


    

}

return 0;
}
