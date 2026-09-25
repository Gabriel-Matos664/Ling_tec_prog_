#include <stdio.h>
#include <stdlib.h>


int main() {
    double valor;
    
    printf("Digite um valor do tipo double: ");
    scanf("%lf", &valor);
    
    // %e exibe o numero no formato de notacao cientifica (A x 10^N)
    printf("Valor em notacao cientifica: %e\n", valor);
    
    return 0;
}
