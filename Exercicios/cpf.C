char cpf[12];
	
	printf ("Insira seu cpf (somente numero):");
	scanf ("%11s", &cpf);
	
	if (strlen(cpf) == 11){
	 printf ("cpf valido");
    } else{
	   printf ("cpf invalido");
    }
    
	
	return 0;
}





#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num1, num2, num3, num4, num5, num6, num7, num8, num9, dgv1, dgv2; 
	printf ("Insira seu cpf: ",num1, num2, num3, num4, num5, num6, num7, num8, num9, dgv1, dgv2);
	scanf ("%d%d%d.%d%d%d.%d%d%d-%d%d", num1, num2, num3, num4, num5, num6, num7, num8, num9, dgv1, dgv2);
	
	
	int mnum1, mnum2, mnum3, mnum4, mnum5, mnum6, mnum7, mnum8, mnum9, resto1, soma;
	mnum1 = num1*10; mnum2*9; mnum3*8;
	mnum4 = num4*7; mnum5*6; mnum6*5;
	mnum7 = num7*4; mnum8*3; mnum9*2;
	
	soma = mnum1+mnum2+mnum3+mnum4+mnum5+mnum6+mnum7+mnum8+mnum9;
	soma *=10;
	resto1 = soma%11;
	return 0;
}
