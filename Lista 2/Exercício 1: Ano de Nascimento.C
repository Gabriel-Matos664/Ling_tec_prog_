#include <stdio.h>

int main() {
    int idade, anoAtual, anoNascimento;
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    
    anoNascimento = anoAtual - idade;
    
    printf("Ano de nascimento aproximado: %d\n", anoNascimento);
    
    return 0;
}
