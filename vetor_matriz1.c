//Escreva um programa em C que lê matricula e as notas de no máximo 100
//alunos. O programa deve ler e armazenar uma nova matricula e uma nova nota
//enquanto o usuário desejar. Após o armazenamento permita ao usuário
//consultar a nota de um aluno digitando sua matricula, o programa deve permitir
//no máximo 10 consultas para um mesmo ciclo de execução do programa

#include <stdio.h>
int main(){
    int matricula[4],i,notas[4],continua,count=0,pesquisa;
    
    
    for ( i = 0; i < 4; i++)
    {
        printf("Qual a matricula do aluno %d: ",i+1);
        scanf("%d",&matricula[i]);
        printf("Qual a nota do aluno %d: ",i+1);
         scanf("%d",&notas[i]);
        printf("Deseja inserir um usuario (1 ou 0): ");
        fflush(stdin);
        scanf("%d", &continua);
        count ++;
                
        if(continua == 0){
            printf("Pessoas cadastradas atualmente %d\n\n", count);
            break;
        }
    }
    for ( i = 0; i < 10; i++)
    {
        printf("Deseja consultar alguma nota (1 ou 0): ");
        scanf("%d",&continua);
        if (continua == 1)
        {
            printf("Me forneca a matricula: ");
            scanf("%d",&pesquisa);
            for ( i = 0; i < 4; i++)
            {
                if (pesquisa == matricula[i])
                {
                    printf("Matricula %d\nNota%d \n\n",matricula[i],notas[i]);
                    break;
                }
            }
        }
        else if( continua == 0)
        {
            break;
        }
    }
}
