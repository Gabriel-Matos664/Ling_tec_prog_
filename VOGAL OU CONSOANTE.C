#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char letra;
	printf ("Insira uma letra:\n");
	scanf("%c",&letra);
	
	if(letra == 'a' || letra =='e' || letra =='i' || letra =='o' || letra =='u'){
		if(letra =='a' || letra =='o'){
			printf("aoba");
		}
		if( letra =='i' || letra =='u'){
			printf("la ele");
		}
		if(letra =='e'){
			printf("ego");
	    } 
	    if(letra =='a' || letra =='e' || letra =='i' || letra =='o' || letra =='u'){
	    	printf("aura + ego");
		}
		}else{
			printf("67");
			
    }
    printf("\n");
    
    if(letra == 'a')
	return 0;
}
