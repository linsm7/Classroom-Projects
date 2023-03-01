/*3. Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a 
retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) * (5.0/9.0), 
sendo F a temperatura em Fahrenheit e C a temperatura em Celsius*/

#include <stdio.h>
#include <math.h>


int conversao(double f){
    double c;
	
	c = (f - 32) * (5.0/9.0);
	printf("A temperatura em Celsius eh: %.2lf",c);
}


int main(){
    double f ;
    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%lf",&f);
     conversao(f);
}
