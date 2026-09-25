#include <stdio.h>

// Função modular que calcula exclusivamente o desconto do INSS
double calcularINSS(double salarioBruto) {
    double desconto;

    if (salarioBruto <= 1412.00) {
        desconto = salarioBruto * 0.075;
    } else if (salarioBruto <= 2666.68) {
        desconto = salarioBruto * 0.09;
    } else if (salarioBruto <= 4000.03) {
        desconto = salarioBruto * 0.12;
    } else {
        desconto = salarioBruto * 0.14;
    }

    return desconto;
}

int main() {
    double salario, inss;

    printf("=== CALCULO DE INSS ===\n");
    printf("Digite o salario bruto: R$ ");
    scanf("%lf", &salario);

    // Chamada da funcao
    inss = calcularINSS(salario);

    // Impressão dos resultados fora da função
    printf("\nSalario Bruto : R$ %.2f\n", salario);
    printf("Desconto INSS : R$ %.2f\n", inss);
    printf("Salario Liquido: R$ %.2f\n", salario - inss);

    return 0;
}
