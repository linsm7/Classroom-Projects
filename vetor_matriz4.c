#include <stdio.h>

int main(){
    int num[6][6],i,j;
    for ( i = 0; i < 6; i++)
    {
        for ( j = 0; j < 6; j++)
        {
           printf("Digite o numero a ser armazenado em [%d] [%d]: ", i,j);
           scanf("%d",&num[i][j]);
        }
        
    }
     for ( i = 1; i < 6; i++)
    {
        for (  j= 0; j < 6; j++)
        {
            printf("%d\n",num[i][j]);
        }
        
    }
}
