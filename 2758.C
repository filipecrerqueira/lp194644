/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 2578
Data        : 15/04/2026
Objetivo    : Entrada e saida de números reais
Aprendizado : Declaração de variaveis reais, manipulação de casas decimais.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main(){
   
    float A,B;
    double C,D;
    scanf("%f %f %lf %lf", &A, &B, &C, &D);
    
    printf("A = %.6f, ", A);
    printf("B = %.6f\n", B);
    printf("C = %.6f, ", C);
    printf("D = %.6f\n", D);

    printf("A = %.1f, ", A);
    printf("B = %.1f\n", B);
    printf("C = %.1f, ", C);
    printf("D = %.1f\n", D);
    
    printf("A = %.2f, ", A);
    printf("B = %.2f\n", B);
    printf("C = %.2f, ", C);
    printf("D = %.2f\n", D);
    
    printf("A = %.3f, ", A);
    printf("B = %.3f\n", B);
    printf("C = %.3f, ", C);
    printf("D = %.3f\n", D);
    
    printf("A = %.3E, ", A);
    printf("B = %.3E\n", B);
    printf("C = %.3E, ", C);
    printf("D = %.3E\n", D);
    
    printf("A = %.0f, B = %.0f\n", A,B);
    printf("C = %.0f, D = %.0f\n", C,D);
    
    return 0;

}
