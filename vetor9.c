//Uma grande empresa deseja saber quais os tr?s empregados mais recentes. Fazer um algoritmo
//para ler um n?mero indeterminado de informa??es (m?ximo de 50) contendo a matr?cula
//funcional do empregado e o n?mero de meses de trabalho deste empregado. Mostre os tr?s
//empregados mais recentes. N?o existem dois empregados admitidos no mesmo m?s e a
//matr?cula igual a zero ?0? encerra a leitura
#include<stdio.h>
int main(){
//declaracao de variaveis iniciais
int i, fu;
//definicao do tamanho dos vetores
printf("Informe a quantidade de funcionarios: ");
scanf("%d", &fu);
printf("\n");
    int matricula[fu], meses[fu], recente[3], antigo;
    for(i=0;i<fu;i++){
        printf("Informe a matricula do funcionario|%d|: ", i+1);
        scanf("%d", &matricula[i]);
            if ( matricula<=0){
                printf("Matricula invalida");
                break;
            }else{
                 printf("Informe quantos meses o funcionario|%d| trabalha: ", i+1);
                 scanf("%d",&meses[i]);
                 printf("\n");
            }
            
            }
            for(i=0;i<fu;i++){
                if (meses[i]<=antigo){
                    antigo=meses[i];
                    recente[i]=meses[i];
                }
            }
            for(i=0;i<fu;i++){
                if (meses[i]==recente[i]){
                    printf("Funcionario mais recente e %d com %d meses\n",i+1,recente[i]);
                }
            }
            return 0;
            } 
