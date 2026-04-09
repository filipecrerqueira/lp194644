//Filipe Siqueira 194644

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
