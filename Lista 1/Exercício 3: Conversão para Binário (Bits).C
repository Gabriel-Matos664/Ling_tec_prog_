#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
    printf("Digite um numero inteiro positivo (n <= 64): ");
    scanf("%d", &n);
    
    printf("Valor em binario: ");
    // Percorre do bit 6 ate o bit 0 (suficiente para cobrir ate 64)
    for (int i = 6; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
    
    return 0;
}
