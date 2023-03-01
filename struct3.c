#include <stdio.h>

struct exercicio 
{
  char a[10];
  int b;
};
int main(){
  struct exercicio num3;
  printf("Digite a string:");
  fflush(stdin);
  fgets(num3.a,10,stdin);
  printf("Digite o inteiro");
  scanf("%d",&num3.b);
}
