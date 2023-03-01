//Elabore um algoritmo que leia um conjunto de valores inteiros correspondentes a até 80
//notas, variando de 0 a 10, dos alunos de uma turma (vários alunos). Calcule a frequência de
//cada nota e apresente uma tabela contendo os valores das notas e suas respectivas frequências.
#include <stdio.h>

int main(void){

    int notas[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, i, size, nota;

    printf("Quantos alunos deseja inserir?: ");
    scanf("%d", &size);

    for(i=0; i<size; i++){
        printf("Informe a nota: ");
        scanf("%d", &nota);

        switch (nota)
        {
        case 0:
            notas[0]++;
            break;
        case 1:
            notas[1]++;
            break;
        case 2:
            notas[2]++;
            break;
        case 3:
            notas[3]++;
            break;
        case 4:
            notas[4]++;
            break;
        case 5:
            notas[5]++;
            break;
        case 6:
            notas[6]++;
            break;
        case 7:
            notas[7]++;
            break;
        case 8:
            notas[8]++;
            break;
        case 9:
            notas[9]++;
            break;
        case 10:
            notas[10]++;
            break;
    
        default:
            break;
        }

    }

    printf("\n");

    for(i=0; i<=10; i++){

        printf("A nota %d aparece %d vezes\n", i, notas[i]);

    }


    return 0;
}
