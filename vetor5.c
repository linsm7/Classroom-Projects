//Fa�a um algoritmo que leia um vetor de at� 80 elementos. Ap�s a leitura de todos os dados, leia 
//um n�mero e verifique se existem elementos no vetor iguais ao n�mero lido. Se existirem, 
//escrever, em uma tela limpa, quantas vezes eles aparecem e quais as posi��es em que eles est�o 
//armazenados no vetor
#include<stdio.h>
int main(){
	//declaracao de variaveis
	int i;
	int vetor[80];
	int numero=0;
	
	//estrutura de repeticao e armazenamento de dados
		for(i=0;i<80;i++){
			printf("Informe o  numero|%d|: ", i+1);
			scanf("%d", &vetor[i]);
		}
				printf("\n\n\n");
					printf("Informe o numero a ser encontrado no vetor: ");
					scanf("%d", &numero);
						
						//estrutura de condicional
						if(numero==vetor[i]){
							printf("\nNumero existente no vetor\n");
							printf("Posicao em que aparece: %d\n", i+1, numero);
							}else{
								printf("Numero nao existe no vetor");
							}
	return 0;
}
