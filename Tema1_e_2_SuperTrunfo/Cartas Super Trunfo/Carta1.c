#include <stdio.h>

int main(){
    //Declaração de variaveis da carta 1.
    char estado1[10] = "Amazonas";
    char codigo1[4] = "A01";
    char cidade1[10] = "Manaus";
    int populacao1 = 2064;
    float area1 =11401;
    float pib1 = 103281;
    int pontosturisticos1 = 18;

    //Declaração de variaveis da carta 2.
    char estado2= "Bahia";
    char codigo2[4] = "B02";
    char cidade2[10] = "Salvador";
    int populacao2 = 2418;
    float area2 = 6938;
    float pib2 = 62954;
    int pontosturisticos2 = 13;

    //Entrada de dados da carta 1.
    printf("Carta1:\n");
    printf("Digite o Estado:\n");
    scanf(" %s", &estado1);
    printf("Digite o código da carta:\n");
    scanf(" %s", &codigo1);
    printf("Digite o nome da cidade:\n");
    scanf(" %s", &cidade1);
    printf("Digite o numero de habitantes:\n");
    scanf("%i", &populacao1);   
    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area1);    
    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos túristicos:\n");
    scanf("%d", &pontosturisticos1);
    printf(" \n");

    //Entrada de dados da carta 2.
    printf("Carta2:\n");
    printf("Digite o Estado:\n");
    scanf(" %s", &estado2);
    printf("Digite o código da carta:\n");
    scanf(" %s", &codigo2);
    printf("Digite o nome da cidade:\n");
    scanf(" %s", &cidade2);
    printf("Digite o numero de habitantes:\n");
    scanf("%i", &populacao2);
    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos túristicos:\n");
    scanf("%d", &pontosturisticos2);
    printf(" \n");

    //Saida de dados da carta 1.
    printf("Carta1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nomde da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f1", area1);
    printf(" Km²\n");
    printf("PIB: %f1", pib1);
    printf(" bilhoes de reais\n");
    printf("Número de Pontos Túristicos: %d\n\n", pontosturisticos1);
    
    //Saida de dados da carta 2.
    printf("Carta2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nomde da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f1", area2);
    printf(" Km²\n");
    printf("PIB: %f1", pib2);
    printf(" bilhoes de reais\n");
    printf("Número de Pontos Túristicos: %d\n\n", pontosturisticos2);

    }