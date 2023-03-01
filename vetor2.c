#include<stdio.h>
int main(){
	int nota[10];
	int i;
	int quanti;
	
	printf("Digite a quantidade de alunos:"); 
	scanf("%d",&quanti);
	
	printf("\n");
	
	for(i=1; i<=quanti; i++){
		printf("Digite a %d nota:",i);
		scanf("%d",&nota[i]);
	}
	
	printf("\n");
	
	for(i=1; i<=quanti; i++){
		printf("nota %d: %d\n", quanti, nota[i]);
}
    return 0;
}
