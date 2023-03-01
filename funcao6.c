/*6. Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule 
e retorne o IMC (Índice de Massa Corporal) dessa pessoa: IMC = peso / (altura * altura)*/

#include <stdio.h>
#include <math.h>

int CalculaIMC (float peso, float altura){
	float imc;

	imc = peso/pow(altura,2);
	printf("O Volume eh: %.2f", imc);
}

int main (){
    float altura;
    float peso;

    printf("Informe a altura: ");
    scanf("%f", &altura);

    printf("Informe o peso: ");
    scanf("%f", &peso);

    CalculaIMC(peso,altura);

}
