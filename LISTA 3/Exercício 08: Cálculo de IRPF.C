#include <stdio.h>

// Função modular que calcula exclusivamente o desconto do IRPF
double calcularIRPF(double salarioBase) {
    double imposto = 0.0;

    if (salarioBase <= 2259.20) {
        imposto = 0.0; // Isento
    } else if (salarioBase <= 2826.65) {
        imposto = (salarioBase * 0.075) - 169.44;
    } else if (salarioBase <= 3751.05) {
        imposto = (salarioBase * 0.15) - 381.44;
    } else if (salarioBase <= 4664.68) {
        imposto = (salarioBase * 0.225) - 662.77;
    } else {
        imposto = (salarioBase * 0.275) - 896.00;
    }

    // Garante que o valor retornado não seja negativo caso o resultado do desconto dê menor que zero
    if (imposto < 0.0) {
        imposto = 0.0;
    }

    return imposto;
}

int main() {
    double salarioBase, irpf;

    printf("=== CALCULO DE IRPF ===\n");
    printf("Digite o salario base (Salario Bruto - INSS): R$ ");
    scanf("%lf", &salarioBase);

    // Chamada da funcao
    irpf = calcularIRPF(salarioBase);

    // Impressão do resultado fora da função
    printf("\nSalario Base: R$ %.2f\n", salarioBase);
    printf("Desconto IRPF: R$ %.2f\n", irpf);

    return 0;
}
