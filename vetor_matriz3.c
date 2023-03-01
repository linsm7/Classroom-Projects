#include <stdio.h>

int main (){
    int num[10],i,a,j;
    for ( i = 0; i < 10; i++)
    {
       printf("Digite o numero %d :",i);
       scanf("%d",&num[i]);
       a=num[i];
       for ( j = 0; j < 10; j++)
        {
            if (a ==num[j])
            {
                printf("Me forneca outro numero pfv pois o num %d ja existe :",num[j]);
                scanf("%d",&num[j]);
                
            }
            
        }
    
    }
}
