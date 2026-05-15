/* --------------------------------------------------------------------------
Disciplina  : Logica de Programacao, turma IB, 194644
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search1181
ExercC-cio   : 1015
Data        : 14/05/2026
Objetivo    : distancia entre pontos 
Aprendizado : aplicacao de formula matematica e biblioteca nova de funções
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <math.h>

int main() {
    
    double x1,y1;
    double x2,y2;
    double distancia;
    
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    
    double termo1=(x2-x1)*(x2-x1);
    double termo2=(y2-y1)*(y2-y1);
    
    distancia = sqrt(termo1+termo2);
    
    printf("%.4lf\n", distancia);
    

return 0;
}
