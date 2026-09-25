#include <stdio.h>
#include <math.h>
#define pi 3.141592

int main() {
    double v0, anguloGraus, rad;
    double g = 9.8;
    double k = 0.5;
    double dt = 0.01; // Incremento de tempo
    
    printf("=== OPERACAO ENIAC - SIMULADOR DE TRAJETORIA ===\n");
    printf("Digite a velocidade inicial (v0 em m/s): ");
    scanf("%lf", &v0);
    printf("Digite o angulo de lancamento (em graus): ");
    scanf("%lf", &anguloGraus);

    // Conversao do angulo para radianos
    rad = anguloGraus * (PI / 180.0);

    // Decomposicao da velocidade nas componentes X e Y
    double vx = v0 * cos(rad);
    double vy = v0 * sin(rad);

    // Posicoes iniciais e tempo
    double x = 0.0;
    double y = 0.0;
    double t = 0.0;

    // Loop de simulação da trajetoria (roda enquanto o projétil estiver acima do solo)
    do {
        // Calculo das aceleracoes considerando a resistencia do ar (k)
        double ax = -k * vx;
        double ay = -g - (k * vy);

        // Atualizacao das posicoes
        x += vx * dt;
        y += vy * dt;

        // Atualizacao das velocidades
        vx += ax * dt;
        vy += ay * dt;

        // Incremento do tempo
        t += dt;

    } while (y > 0.0);

    // Exibicao dos resultados
    printf("\n--- Resultados da Trajetoria ---\n");
    printf("Tempo de Voo    : %.2f segundos\n", t);
    printf("Alcance Maximo  : %.2f metros\n", x);

    return 0;
}
