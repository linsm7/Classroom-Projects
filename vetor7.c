/*Desenvolva um algoritmo que cadastre os pre�os de at� 100 diferentes CDs em uma loja. Ap�s
este cadastro, o algoritmo dever� possibilitar a execu��o de uma de duas fun��es para aumento
dos pre�os cadastrados, sendo a primeira de 10% para todos os CDs, enquanto a segunda
aumenta o percentual informado pelo vendedor para todos os CDs. Ser� o vendedor que
escolher� o tipo de aumento desejado. Ap�s os c�lculos dever� ser apresentado o percentual de
aumento e, para cada CD, o valor sem aumento e o valor com aumento
*/
#include <stdio.h>
#include <stdlib.h>     
int main(void) {
	//declaracao de variaveis
	int i,q;
		//definicao de tamanho dos vetores
		do{
			printf("Informe a quantidade de cds a serem precificados: ");
			scanf("%d", &q);
			printf("\n\n");
				if(q<=100){
				break;
				}else{
					printf("Maximo de CDs e 100, por favor informe outro valor");
					}
				}while(q<100);
					//declaracao de variaveis com vetores
					double cd[q], cd10[q],cdv[q], porcentagem;
						//definicao de precos 
						for(i=0;i<q;i++){
							printf("Informe o preco do cd|%d|:",i+1);
							scanf("%lf", &cd[i]);
							}
								for(i=0;i<q;i++){
									cd10[i] = cd[i] + cd[i] * 0.10;
									}
										//impressao de precos com aumento de 10%
											printf("\n\n|Valores com aumento fixo|---------------------------------------------------------------------------------------------\n\n");
												for(i=0;i<q;i++){
													printf("cd|%d|%.1lf\n",i+1, cd10[i]);
											}
														//definicao de aumento informada pelo vendedor
														printf("\nVendedor informe a porcentagem de aumento que deseja: ");
														scanf("%lf", &porcentagem);
														
															for(i=0;i<q;i++){
																cdv[i]=cd[i] + cd[i] * (porcentagem/100);
														}
																	//impressao de precos com aumento informado pelo vendedor
																	printf("\n\n|Valores com aumento do vendedor|---------------------------------------------------------------------------------------\n\n");
				
																		for(i=0;i<q;i++){
																			printf("cd|%d|%.1lf\n",i+1, cdv[i]);
																		}

	return 0;
}
