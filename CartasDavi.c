#include <stdio.h>

int main(){
	char estado = 'X';
	char codigo[5] = "X00";
	char cidade[25] = "XX";
	int populacao = 00000;
	float area = 00000.00;
	float pib = 000.00;
	int pontosturisticos = 000;
    
	printf("INSIRA AS INFORMAÕES DA (CARTA 1)\n\n");
	printf("1. Qual grupo pertence o estado? \nDica: Uma letra de (A a H)\n>");
	scanf("%c", &estado);
		
	if ("%c", estado == "A","a","B","b","C","c","D","d","E","e","F","f","G","g","H","h") {
		printf("ooooh yeahhhhh\n");
		}
		else {
		printf("negado\n");
		}

   	printf("\n2. Qual o Codigo de area da cidade? \nDica: A letra digitada anteriormente, mais dois digitos de (01 a 04)\n>");
	scanf(" %s", &codigo);

	printf("\n3. Qual o nome da cidade? \nDica: Acho que não precisa de dica, né? :)\n>");
	scanf(" %s", &cidade);

	printf("\n4. Qual é a população dessa cidade? \n");
	scanf(" %d", &populacao);

	printf("\n5. Qual é a area em quilômetros quadrados dessa cidade? \nDica: Veja no Google\n>");
	scanf("%f", &area);

	printf("\n6. Qual é o Produto Interno Bruto da cidade (PIB) dessa cidade? \nDica: Provavelmente voce ainda esta no Google...\n>");
	scanf("%f", &pib);

	printf("\n7. Quantos pontos turisticos essa cidade possui? \n>");
	scanf(" %d", &pontosturisticos);

	printf("\n\n==============================Resultado da Carta 1==============================\n");

	printf("Estado: %c\n", estado);
	printf("Código da cidade: %s\n", codigo);
	printf("Nome da cidade: %s\n", cidade);
	printf("População da cidade: %d\n", populacao);
	printf("Área: %.2fkm²\n", area);
	printf("PIB: %.2f\n", pib);
	printf("Quantidade de pontos turísticos: %d\n", pontosturisticos);

	char estado2 = 'X';
	char codigo2[5] = "X00";
	char cidade2[25] = "XX";
	int populacao2 = 00000;
	float area2 = 00000.00;
	float pib2 = 000.00;
	int pontosturisticos2 = 000;

	printf("\n\nAGORA INSIRA AS INFORMAÕES DA (CARTA 2)\n\n");
	printf("2.1. Qual grupo pertence o estado? \nDica: Uma letra de (A a H)\n>");
	scanf(" %c", &estado2);

   	printf("\n2.2. Qual o Codigo de area da cidade? \nDica: A letra digitada anteriormente, mais dois digitos de (01 a 04)\n>");
	scanf(" %s", &codigo2);

	printf("\n2.3. Qual o nome da cidade? \nDica: Acho que não precisa de dica, né? :)\n>");
	scanf(" %s", &cidade2);

	printf("\n2.4. Qual é a população dessa cidade? \n");
	scanf(" %d", &populacao2);

	printf("\n2.5. Qual é a area em quilômetros quadrados dessa cidade? \nDica: Veja no Google\n>");
	scanf("%f", &area2);

	printf("\n2.6. Qual é o Produto Interno Bruto da cidade (PIB) dessa cidade? \nDica: Provavelmente voce ainda esta no Google...\n>");
	scanf("%f", &pib2);

	printf("\n2.7. Quantos pontos turisticos essa cidade possui? \n>");
	scanf(" %d", &pontosturisticos2);

	printf("\n\n==============================Resultado da Carta 2==============================\n");
	printf("Estado: %c\n", estado2);
	printf("Código da cidade: %s\n", codigo2);
	printf("Nome da cidade: %s\n", cidade2);
	printf("População da cidade: %d\n", populacao2);
	printf("Área: %.2fkm²\n", area2);
	printf("PIB: %.2f\n", pib2);
	printf("Quantidade de pontos turísticos: %d\n", pontosturisticos2);
return 0;
}

