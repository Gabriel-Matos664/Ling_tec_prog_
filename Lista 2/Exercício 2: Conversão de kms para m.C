#include <stdio.h>

int main() {
    double k, m;
    
    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &k);
    
    // Formula: M = K / 3.6
    m = k / 3.6;
    
    printf("Velocidade em m/s: %.2f\n", m);
    
    return 0;
}
