#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,c;
	printf("insira um valor para a soma\n");
	scanf("%d",&a);
	printf("insira outro valor para a soma\n");
	scanf("%d", &b);
	c=a+b;
	printf("o resultado de %d + %d= %d", a,b,c);
	return 0;

}
