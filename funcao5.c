/*5. Escreva uma função para o cálculo do volume de uma esfera  
V = 4/3PI * r³ em que p = 3.1414592 valor do raio r deve ser passado por parâmetro*/

#include <stdio.h>
#include <math.h>
#define PI 3.1414592

int volume(float raio){
	float volume;
 	
	volume = 4/((3*PI)*pow(raio,3));
	printf(" O Volume eh %.2f", volume);
}


int main (){
    float raio;
    
    printf("Informe o raio: ");
    scanf("%f", &raio);
    volume(raio);
}
