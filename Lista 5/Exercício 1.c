#include <iostream>


int main(int argc, char** argv) {
	int numero [100], i, copiap[100];;
	for (i=0; i<100; i++){
		printf ("Digite o Numero %d: ", i+1);
		scanf ("%d", &numero[i]);
	}
	
	printf ("\n---Ordem inversa--- ");
	for (i=99; i>=0; i--){
		printf ("\nNumero %d: %d ", i+1, numero[i] );
    }
    printf("\nNumeros ordenados do maior para o menor:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", copiap[i]);
    }
    printf("\n");
	
	
	
	return 0;
}
