#include <stdio.h>

int main() {
    int vet[100];
    int i;

    printf("Digite 100 numeros inteiros:\n");
    for (i = 0; i < 100; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("\n--- Sequencias Consecutivas Encontradas ---\n");
    int encontrou = 0;
    
    for (i = 0; i < 99; i++) {
        if (vet[i + 1] == vet[i] + 1) {
            printf("Valores consecutivos encontrados: %d e %d (posicoes %d e %d)\n", 
                   vet[i], vet[i + 1], i, i + 1);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum par de valores consecutivos foi encontrado em sequencia direta.\n");
    }

    return 0;
}
