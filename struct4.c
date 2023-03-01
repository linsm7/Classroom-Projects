#include <stdio.h>

struct dados
{
 char marca[30],modelo[50],cor[30],motorizacao[50];
 int portas;
};
int armazemDeDados(){
  struct dados carro[10];
  int i;
   for ( i = 0; i < 10; i++)
   {
    printf("Digite a marca :");
    fflush(stdin);
    fgets(carro[i].marca,30,stdin);
    printf("Digite o modelo :");
    fflush(stdin);
    fgets(carro[i].modelo,50,stdin);
    printf("Digite a cor :");
    fflush(stdin);
    fgets(carro[i].cor,30,stdin);
    printf("Digite a motorizacao :");
    fflush(stdin);
    fgets(carro[i].motorizacao,50,stdin);
    printf("Digite o numero de portas:");
    scanf("%d",&carro[i].portas);
   }
   
}
int mostraDados(){
  struct dados carro[10];
  int i;
  
  for ( i = 0; i < 10; i++)
  {
    
  printf ("O carro %d\nmarca:%s\nmodelo:%s\ncor:%s\n,motorizacao;%s\nQuantidade de portas:%d",carro[i].marca,carro[i].modelo,carro[i].cor,carro[i].motorizacao,carro[i].portas);
  }
  
}
int main(){
  armazemDeDados();
  mostraDados();
  
}
