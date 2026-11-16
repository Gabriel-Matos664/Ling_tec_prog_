#include <stdio.h>

int mostrarBinario(unsigned long long n) {
    int i;
    printf("Valor em binario: ");
    for (i = 63; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);
        if (i % 4 == 0) printf(" ");
    }
    printf("\n");
    return 0;
}

int main() {
    long long n = -1;

    for (; n <= 0 || n > 64; ) {
        printf("Digite um numero positivo (ate 64): ");
        scanf("%lld", &n);
    }

    mostrarBinario((unsigned long long)n);

    return 0;
}
