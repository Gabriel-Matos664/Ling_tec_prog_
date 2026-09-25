#include <stdio.h>

int main() {
    int duracaoSegundos, horas, minutos, segundos;
    
    printf("Digite o tempo em segundos: ");
    scanf("%d", &duracaoSegundos);
    
    horas = duracaoSegundos / 3600;
    int resto = duracaoSegundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;
    
    printf("%d:%d:%d\n", horas, minutos, segundos);
    
    return 0;
}
