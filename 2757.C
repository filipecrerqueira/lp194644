/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 2757
Data        : 09/04/2026
Objetivo    : variáveis inteiras
Aprendizado : manipular variaveis inteiras.
-------------------------------------------------------------------------- */

#include<stdio.h>

int main(){
    int num1,num2,num3;
    
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    printf("A = %d, B = %d, C = %d\n",num1,num2,num3);
    
    printf("A = % 10d, B = % 10d, C = % 10d\n",num1,num2,num3);
    
    printf("A = %010d, B = %010d, C = %010d\n",num1,num2,num3);
    
    printf("A = %-10d, B = %-10d, C = %-10d\n",num1,num2,num3);
    
    
    
return 0;
    
    
}
