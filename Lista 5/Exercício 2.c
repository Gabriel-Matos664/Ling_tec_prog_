#include <stdio.h>

int main() {
    double valor;

    printf("Digite um valor do tipo double positivo: ");
    scanf("%lf", &valor);

    printf("Notacao cientifica: %e\n", valor);

    return 0;
}
