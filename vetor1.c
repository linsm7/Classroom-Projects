///Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos.
#include<stdio.h>
int main(void){
double notas[30];
int i;

	for(i=0;i<30;i++){
		printf("Digite a nota %d: ", i+1);
		scanf("%lf", &notas[i]);	
	}
	
		for(i=0;i<30;i++){
			printf("%.1lf", notas[i]);
        }

    return 0;
}

