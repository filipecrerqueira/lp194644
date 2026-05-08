/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 194644
Nome        : Filipe Siqueira e Cerqueira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 07/05/2026
Objetivo    : comparar strings
Aprendizado : analisar termo a termo
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    
    int n;
    char frase[1001];

    scanf("%d", &n);
    getchar();//serve para limpar o enter do leitor
    
    for(int i=0; i<n; i++){
        
        fgets(frase, 1001, stdin);//leitura da string completa
        
        frase[strcspn(frase, "\n")] = '\0';
        
        int tamanho = strlen(frase);//preciso pegar o tamanho da string pra trocar a posicao
        
        for(int z=0; frase[z]!='\0'; z++){
            
            
            if(isalpha(frase[z])){
                
                frase[z]+=3;
                
            }
            
            
        }
        
        for(int z=0; z<tamanho/2; z++){
        
            char aux = frase[z]; //isso aqui vai salvar o valor do char original
            
            frase[z]=frase[tamanho-(z+1)];// um tamanho 5, a posiçao 0 fica na 4, posicao 1 fica na 3
            
            frase[tamanho-(z+1)]=aux;
        }
        
        
        for(int z=(tamanho/2); frase[z]!='\0'; z++){
            
            
            frase[z]-= 1;
            
           
        }
        
        printf("%s\n", frase);
        
        
    }
    
    
    
    
return 0;
    
}

