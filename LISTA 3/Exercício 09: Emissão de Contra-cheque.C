#include <stdio.h>

// Função do Exercício 07: Cálculo do INSS
double calcularINSS(double salarioBruto) {
    if (salarioBruto <= 1412.00) {
        return salarioBruto * 0.075;
    } else if (salarioBruto <= 2666.68) {
        return salarioBruto * 0.09;
    } else if (salarioBruto <= 4000.03) {
        return salarioBruto * 0.12;
    } else {
        return salarioBruto * 0.14;
    }
}

// Função do Exercício 08: Cálculo do IRPF
double calcularIRPF(double salarioBase) {
    double imposto = 0.0;

    if (salarioBase <= 2259.20) {
        imposto = 0.0;
    } else if (salarioBase <= 2826.65) {
        imposto = (salarioBase * 0.075) - 169.44;
    } else if (salarioBase <= 3751.05) {
        imposto = (salarioBase * 0.15) - 381.44;
    } else if (salarioBase <= 4664.68) {
        imposto = (salarioBase * 0.225) - 662.77;
    } else {
        imposto = (salarioBase * 0.275) - 896.00;
    }

    return (imposto < 0.0) ? 0.0 : imposto;
}

int main() {
    double valorHora, horasTrabalhadas;

    printf("Digite o valor da hora trabalhada: R$ ");
    scanf("%lf", &valorHora);
    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%lf", &horasTrabalhadas);

    // Cálculos da folha
    double salarioBruto = valorHora * horasTrabalhadas;
    double descontoINSS = calcularINSS(salarioBruto);
    
    // Salário Base para o IRPF = Salário Bruto - INSS
    double salarioBaseIRPF = salarioBruto - descontoINSS;
    double descontoIRPF = calcularIRPF(salarioBaseIRPF);
    
    double salarioLiquido = salarioBruto - descontoINSS - descontoIRPF;

    // Impressão formatada
    printf("\n======================================================\n");
    printf("    RECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)\n");
    printf("======================================================\n");
    printf(" Salario Bruto (Horas x Valor):   R$ %10.2f\n", salarioBruto);
    printf(" (-) Desconto INSS:               R$ %10.2f\n", descontoINSS);
    printf(" (-) Desconto IRPF:               R$ %10.2f\n", descontoIRPF);
    printf("------------------------------------------------------\n");
    printf(" LIQUIDO A RECEBER:               R$ %10.2f\n", salarioLiquido);
    printf("======================================================\n");

    return 0;
}
