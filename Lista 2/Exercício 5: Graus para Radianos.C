#include <stdio.h>

int main() {
    double g, r;
    double p = 3.141592;
    
    printf("Digite o angulo em graus: ");
    scanf("%lf", &g);
    
    // Formula: R = G * p / 180
    r = g * p / 180.0;
    
    printf("Angulo em radianos: %.6f\n", r);
    
    return 0;
}
