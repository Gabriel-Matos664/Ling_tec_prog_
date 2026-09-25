#include <stdio.h>

int main() {
    int idadeDias, anos, meses, dias;
    
    printf("Digite a idade em dias: ");
    scanf("%d", &idadeDias);
    
    anos = idadeDias / 365;
    int resto = idadeDias % 365;
    meses = resto / 30;
    dias = resto % 30;
    
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
    
    return 0;
}
