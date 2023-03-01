#include <stdio.h>

struct Pessoa{
    char nome[50],endereco[50]; 
    int telefone;
};
int main (){
  struct Pessoa infos[3];
  int i ;
  for ( i = 0; i <3 ; i++)
  {
      
      printf("Me forneca o nome da pessoa %d",i);
      fflush(stdin);
      fgets(infos[i].nome,50,stdin);
      printf("Me forneca o endereco da pessoa %d",i);
      fflush(stdin);
      fgets(infos[i].endereco,50,stdin);
      printf("Me forneca o telefone da pessoa %d",i);
      scanf("%d",&infos[i].telefone);
  }
  for ( i = 0; i < 3; i++)
  {
    printf("Infos:\n%s\n%s\n%d",infos[i].nome,infos[i].endereco,infos[i].telefone);
  }
}
