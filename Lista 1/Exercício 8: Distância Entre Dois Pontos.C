#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distancia;
    
    printf("Digite x1 e y1 (ponto 1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Digite x2 e y2 (ponto 2): ");
    scanf("%lf %lf", &x2, &y2);
    
    // Formula da distancia euclidiana: sqrt((x2 - x1)^2 + (y2 - y1)^2)
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("Distancia = %.4f\n", distancia);
    
    return 0;
}
