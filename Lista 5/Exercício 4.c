#include <stdio.h>
#include <stdlib.h>

int maiorAB(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

int main() {
    int valores[10];
    int i, maior;

    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    maior = valores[0];
    for (i = 1; i < 10; i++) {
        maior = maiorAB(maior, valores[i]);
    }

    printf("%d eh o maior\n", maior);

    return 0;
}
