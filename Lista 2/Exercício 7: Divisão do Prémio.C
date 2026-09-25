#include <stdio.h>

int main() {
    double total = 780000.00;
    
    double primeiro = total * 0.46;
    double segundo = total * 0.32;
    double terceiro = total - (primeiro + segundo);
    
    printf("Primeiro ganhador (46%%): R$ %.2f\n", primeiro);
    printf("Segundo ganhador (32%%): R$ %.2f\n", segundo);
    printf("Terceiro ganhador (restante): R$ %.2f\n", terceiro);
    
    return 0;
}
