#include <stdio.h>

int main(){
	char estado = 'A';
	char codigo[4] = "A01";
	char cidade[25] = "Bauru";
	int populacao = 151152;
	float area = 85080.79;
	float pib = 215.55;
	int pontosturisticos = 152;
    
	printf("Qual grupo pertence o estado? \n", estado);
	scanf(" %c", &estado);

    printf("Qual o Codigo de area da cidade? \n", codigo);
	scanf(" %s", &codigo);

	printf("Qual o nome da cidade? \n", cidade);
	scanf(" %sA", &cidade);

	printf("Qual é a população dessa cidade? \n", populacao);
	scanf("%i", &populacao);

	printf("Qual é a area em quilômetros quadrados dessa cidade? \n", area);
	scanf(" %.2f", &area);

	printf("Qual é o Produto Interno Bruto da cidade (PIB) dessa cidade? \n", pib);
	scanf("%.2f", &pib);

	printf("Quantos pontos turisticos essa cidade possui? \n", pontosturisticos);
	scanf(" %d", &pontosturisticos);

}