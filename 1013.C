// Filipe Siqueira e Cerqueira RA194644




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
