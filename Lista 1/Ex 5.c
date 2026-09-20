#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int n, resultado;
	float soma, media, produtorio, valor1, valor2, valor3, valor4;
	
	printf("Digite 1 Valor:\n");
	scanf ("%f", &valor1);
	
	printf("Digite 2 Valor:\n");
	scanf ("%f", &valor2);
	
	printf("Digite 3 Valor:\n");
	scanf ("%f", &valor3);
	
	printf("Digite 4 Valor:\n");
	scanf ("%f", &valor4);
	
	soma = valor1+valor2+valor3+valor4; 
	
	media = (valor1+valor2+valor3+valor4)/4;
	
	produtorio =  valor1*valor2*valor3*valor4;
	
	printf("\nA soma desses valores e:\n%.2f",soma);
	
	printf("\nA media desses valores e:\n%.2f", media);
	
	printf("\nO produtorio desses valores e:\n%.2f", produtorio);
	
	
	return 0;
}
