#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    double raio, volume;
    
    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);
    
    // Uso de 4.0 / 3.0 para evitar a divisao inteira (4 / 3 = 1)
    volume = (4.0 / 3.0) * PI * pow(raio, 3);
    
    printf("VOLUME = %.3f\n", volume);
    
    return 0;
}
