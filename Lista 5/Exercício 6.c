#include <stdio.h>
#include <math.h>

int main() {
    double x1[10], y1[10], x2[10], y2[10];
    int i;

    printf("Insira as coordenadas para o Ponto 1 (10 posicoes):\n");
    for (i = 0; i < 10; i++) {
        printf("x1[%d] y1[%d] (separados por espaco): ", i, i);
        scanf("%lf %lf", &x1[i], &y1[i]);
    }

    printf("\nInsira as coordenadas para o Ponto 2 (10 posicoes):\n");
    for (i = 0; i < 10; i++) {
        printf("x2[%d] y2[%d] (separados por espaco): ", i, i);
        scanf("%lf %lf", &x2[i], &y2[i]);
    }

    printf("\n--- Distancias Euclidianas ---\n");
    for (i = 0; i < 10; i++) {
        double d = sqrt(pow(x2[i] - x1[i], 2) + pow(y2[i] - y1[i], 2));
        printf("Par %d -> Distancia: %.4f\n", i + 1, d);
    }

    return 0;
}
