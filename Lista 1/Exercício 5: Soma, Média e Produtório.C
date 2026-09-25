#include <stdio.h>

int main() {
    double v1, v2, v3, v4;
    
    printf("Digite 4 valores: ");
    scanf("%lf %lf %lf %lf", &v1, &v2, &v3, &v4);
    
    double soma = v1 + v2 + v3 + v4;
    double media = soma / 4.0;
    double produtorio = v1 * v2 * v3 * v4;
    
    printf("Soma: %.2f\n", soma);
    printf("Media: %.2f\n", media);
    printf("Produtorio: %.2f\n", produtorio);
    
    return 0;
}
