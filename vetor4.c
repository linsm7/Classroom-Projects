//Fa?a um algoritmo que leia at? 30 letras e as escreva na ordem inversa (ou contr?ria) da que 
//foram lidas.
#include<stdio.h>
int main(void){
int i;
char letra[30][2];
    for(i=0;i<30;i++){
        printf("Digite a letra|%d|: ",i+1);
        scanf("%s", letra[i]);
    }
    printf("\n|LETRAS NA ORDEM INVERSA|\n");

    for(i=29;i>=0;i--){
        printf("%s", letra[i]);
    
}
return 0;
}
