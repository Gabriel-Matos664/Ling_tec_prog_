#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float Base, Altura, Area;
	
	printf("insira o valor da base \n");
	scanf("%f", &Base);
	printf("insira o valor para a altura \n");
	scanf("%f",&Altura);
	Area = (Base*Altura)/2;
	
	printf(" A base do triangulo = %0.2f a altura do triangulo = %0.2f e a area = %0.2f", Base, Altura, Area);
	
	return 0;
}
