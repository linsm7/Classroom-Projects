//1. Escreva uma funcao que receba por parametro dois numeros e retorne o maior deles.
#include <stdio.h>
#include <math.h>

int main(){
    int a[2];
    int i;
    
	for ( i = 0; i < 2; i++){
        printf("Informe o numero: ");
        scanf("%d", &a[i]);
    }
    
	if(a[0] > a[1]){
    	printf("Numero maior: %d", a[0]);
    }
	else if(a[1] > a[0]){
    	printf("Numero maior: %d", a[1]);
    }
	else{
        printf("Numeros iguais");
    }
    
}
