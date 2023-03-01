#include <stdio.h>
#include <string.h>

typedef struct registro{
    char nome[30], endereco[50],  telefone[20];
}registro;

int main(void){

    registro user[3];
    int i;

    for(i=0; i<3; i++){
        printf("Digite o nome: ");
        fgets(user[i].nome, 30, stdin);

        printf("Informe o endereco: ");
        fgets(user[i].endereco, 50, stdin);

        printf("Informe o telefone: ");
        fgets(user[i].telefone, 20, stdin);
    }
    for(i=0; i<3; i++){
        printf("\nNome: %s", user[i].nome);
        printf("Endereco: %s", user[i].endereco);
        printf("Telefone: %s", user[i].telefone);
    }
return 0;
}
