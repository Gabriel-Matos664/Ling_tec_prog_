#include <stdio.h>

int ehPrimo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int vet[100];
    int i;

    printf("Digite 100 numeros inteiros:\n");
    for (i = 0; i < 100; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &vet[i]);
    }

    printf("\n--- Analise de Paridade e Primalidade ---\n");
    for (i = 0; i < 100; i++) {
        printf("Valor: %d -> ", vet[i]);
        
        if (vet[i] % 2 == 0) {
            printf("Par, ");
        } else {
            printf("Impar, ");
        }

        if (ehPrimo(vet[i])) {
            printf("Primo\n");
        } else {
            printf("Nao primo\n");
        }
    }

    return 0;
}
