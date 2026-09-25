#include <stdio.h>

int main() {
    double reais, cotacao, dolares;
    
    printf("Digite o valor em reais (R$): ");
    scanf("%lf", &reais);
    printf("Digite a cotacao do dolar: ");
    scanf("%lf", &cotacao);
    
    dolares = reais / cotacao;
    
    printf("Valor em dolares: $ %.2f\n", dolares);
    
    return 0;
}
