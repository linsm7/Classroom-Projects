#include <stdio.h>

struct dados
{
  int a,b,c;
};

int main (){
  struct dados vetor[2];
  int i,resultado[3];

  for ( i = 0; i < 2; i++)
  {
    printf("Qual o valor de A: ");
    scanf("%d",vetor[i].a);

    printf("Qual o valor de B: ");
    scanf("%d",vetor[i].b);

    printf("Qual o valor de C: ");
    scanf("%d",vetor[i].c);
  }
  resultado[0]=vetor[0].a + vetor[1].a;
  resultado[1]=vetor[0].b + vetor[1].b;
  resultado[3]=vetor[0].c + vetor[1].c;


}
