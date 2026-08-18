#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int n;
	printf("Entre com o valor de N");
	scanf("%d", &n);
	print("o numero %d, seu antecessor %d e seu sucessor %d",n, n-1, n+1);
	return 0;
	
	
	int a,b,c, maiorTemp, maior;
	printf("insira tres valores para identificar o maior: ");
	scanf("%d %d %d", &a,&b,&c);
	
	maiorTemp = ((a+b+abs(a-b))/2);
	
	maior = ((maiorTemp+c+abs(maiorTemp-c))/2);
	
	printf("o maior entre |%d|%d|%d|=%d", a,b,c, maiorTemp);
	
	
	return 0;
}
