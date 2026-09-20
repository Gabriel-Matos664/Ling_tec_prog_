#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592
#include <math.h>

int main(int argc, char *argv[]) {
	
	float r, area, r2;
	
	printf("Insira o raio R do circulo\n");
	scanf("%f",&r);
	
	r2 = pow(r,2);
	r2 = r*r;
	area = pi*r2;
	area = pi *(r*r);
	area = 	M_PI * pow(r,2);
	
	printf("A area do circulo de raio R %f = %f", r, area);
	
	return 0;

}
