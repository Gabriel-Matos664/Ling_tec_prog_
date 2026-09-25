#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num1, num2;
    
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);
    
    // Imprime na ordem inversa
    printf("Ordem inversa: %d, %d\n", num2, num1);
    
    return 0;
}
