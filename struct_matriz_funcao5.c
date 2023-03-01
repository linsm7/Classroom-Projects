#include <stdio.h>

typedef struct sVeiculo{
	int chassi, ano;
	char placa[6], nome[30], combustivel[30], modelo[50], cor[50];
} Veiculo;


int main(){
	int i;
	Veiculo carros[QNT];

	for(i = 0; i < QNT; i++)
	{
	printf("Digite o nome do proprietario:");
	gets(carros[i].nome);

	printf("Digite o combustão­vel utilizado (lcool, Diesel ou Gasolina):");
	gets(carros[i].combustivel);
	
	printf("Digite o modelo do carro:");
	gets(carros[i].modelo);

	printf("Digite a cor do carro:");
	gets(carros[i].cor);
	
	printf("Digite o numero do chassi:");
	scanf("%d", &carros[i].chassi);

	printf("Digite o ano do veiculo:");
	scanf(" %d", &carros[i].ano);
	getchar(); 

	
	printf("Digite a placa do veiculo:");
	gets(carros[i].placa);

	}

	printf("\nProprietarios com veiculos a diesel do ano de 1980 ou posterior:\n");
	for(i = 0; i < QNT; i++)
	{

		if(carros[i].ano >= 1980 && carros[i].combustivel == "Diesel")	
		{
		printf("Nome: %s \n", carros[i].nome);
		}
	}
	printf("\n");	

	printf("\nPlacas que começam com A e terminam com 0, 2, 4 ou 7:");
	for(i = 0; i < QNT; i++)
	{
		if(carros[i].placa[0] == 'A' && carros[i].placa[6] == '2')	
		{
		printf("\nPlaca: %s ", carros[i].placa);
		}
	}
	printf("\n\n");		

return 0;
}
