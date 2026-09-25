#include <stdio.h>

int main() {
    double c, f;
    
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &c);
    
    // Formula: F = C * (9.0 / 5.0) + 32.0
    f = c * (9.0 / 5.0) + 32.0;
    
    printf("Temperatura em Fahrenheit: %.2f\n", f);
    
    return 0;
}
