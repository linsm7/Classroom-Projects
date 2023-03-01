#include <stdio.h>

struct endereco
{
  char rua[50],bairro[50],cidade[50],estado[50];
};
struct cadastro
{
  struct endereco end;
  char nome[50],cpf[11],sexo;
  int salario,identidade,idade;
};
int main (){
  int i, maior = -1,a,busca ;
  struct cadastro cliente[5];//A
  for ( i = 0; i < 5; i++)//B
  {
    
    printf("Me forneca o Nome:");
    fflush(stdin);
    fgets(cliente[i].nome,50,stdin);
    printf("Me forneca o CPF:");
    fflush(stdin);
    fgets(cliente[i].cpf,11,stdin);
    printf("Me forneca sexo (M)asculino ou (F)eminino:");
    fflush(stdin);
    fgets(cliente[i].cpf,1,stdin);
    printf("Me forneca o Salario");
    scanf("%d",&cliente[i].salario);
    printf("Me forneca a identidade");
    scanf("%d",&cliente[i].identidade);
    printf("Me forneca a idade");
    scanf("%d",&cliente[i].idade);
    printf("Me forneca rua:");
    fflush(stdin);
    fgets(cliente[i].end.rua,50,stdin);
    printf("Me forneca a cidade:");
    fflush(stdin);
    fgets(cliente[i].end.cidade,50,stdin);
    printf("Me forneca o bairro:");
    fflush(stdin);
    fgets(cliente[i].end.bairro,50,stdin);
    printf("Me forneca o estado:");
    fflush(stdin);
    fgets(cliente[i].end.estado,50,stdin);
  }
  for ( i = 0; i < 5; i++)
  {
    if (cliente[i].idade > maior )//C
    {
      maior = cliente[i].idade;
      a = i ;
    }
    if (cliente[i].sexo == 'm' || cliente[i].sexo == 'M')//D
    {
      printf("Cliente %d e do sexo Masculino:");
    }
    if (cliente[i].salario > 1000)//D
    {
      printf("Cliente %d e do Recebe um salario Maior que 1000");
    }
    
    }
    printf("A pessoa %d tem a maior idade com %d",a,maior);
    printf ("Qual identidade esta buscando :");
    scanf("%d",&busca);
    for ( i = 0; i < 5; i++)
    {
      if (busca == cliente[i].identidade)
      {
        printf("A Pessoa %d e a que vc busca com a identidade de %d",i,cliente[i].identidade);
      }
      
    }
}
