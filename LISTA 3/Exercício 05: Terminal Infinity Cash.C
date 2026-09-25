#include <stdio.h>

int main() {
    int valor, resto;
    int notas100, notas50, notas10, notas5, notas2, notas1;

    printf("=== TERMINAL INFINITY CASH ===\n");
    printf("Digite o valor do saque: R$ ");
    scanf("%d", &valor);

    // Calculo da quantidade de notas de R$ 100
    notas100 = valor / 100;
    resto = valor % 100;

    // Calculo da quantidade de notas de R$ 50
    notas50 = resto / 50;
    resto = resto % 50;

    // Calculo da quantidade de notas de R$ 10
    notas10 = resto / 10;
    resto = resto % 10;

    // Calculo da quantidade de notas de R$ 5
    notas5 = resto / 5;
    resto = resto % 5;

    // Calculo da quantidade de notas de R$ 2
    notas2 = resto / 2;
    resto = resto % 2;

    // O resto final corresponde as notas de R$ 1
    notas1 = resto;

    // Exibicao do resumo de notas entregues
    printf("\n--- Resumo do Saque ---\n");
    printf("Notas de R$ 100: %d\n", notas100);
    printf("Notas de R$ 50 : %d\n", notas50);
    printf("Notas de R$ 10 : %d\n", notas10);
    printf("Notas de R$ 5  : %d\n", notas5);
    printf("Notas de R$ 2  : %d\n", notas2);
    printf("Notas de R$ 1  : %d\n", notas1);

    return 0;
}
