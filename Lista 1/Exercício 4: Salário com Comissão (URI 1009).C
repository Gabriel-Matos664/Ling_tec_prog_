#include <stdio.h>

int main() {
    double salarioFixo, vendas, total;
    
    printf("Digite o salario fixo: ");
    scanf("%lf", &salarioFixo);
    printf("Digite o valor total das vendas: ");
    scanf("%lf", &vendas);
    
    // Salario acrescido de 15% das vendas
    total = salarioFixo + (vendas * 0.15);
    
    printf("TOTAL = R$ %.2f\n", total);
    
    return 0;
}
