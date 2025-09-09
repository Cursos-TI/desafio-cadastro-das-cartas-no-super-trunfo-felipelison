#include <stdio.h>

int main (){

    unsigned long int populacao, populacao2;
    int turismo, turismo2, comparar;
    char estado[3], estado2[3], codigoCarta[5], codigoCarta2[5], cidade[21], cidade2[21];
    float area, area2, pib, pib2, pibpercapita, densidade, pibpercapita2, densidade2, SuperPoder, SuperPoder2;

    //CARTA 1
    printf("Carta 1\n");
    printf("Estado (Uma letra de 'A' a 'H'): ");
    scanf("%s", estado);
    printf("Código da Carta (A letra do estado seguida de um número de 01 a 04): ");
    scanf("%s", codigoCarta);
    printf("Nome da cidade: ");
    scanf(" %s", cidade);
    printf("População da cidade: ");
    scanf("%lu", &populacao);
    printf("Área da cidade: ");
    scanf("%f", &area);
    printf("PIB da cidade: ");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turismo);

    //CARTA 2
    printf("\nCarta 2\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código da Carta: ");
    scanf("%s", codigoCarta2);
    printf("Nome da cidade: ");
    scanf(" %s", cidade2);
    printf("População da cidade: ");
    scanf("%lu", &populacao2);
    printf("Área da cidade: ");
    scanf("%f", &area2);
    printf("PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turismo2);

    // CALCULOS
    densidade = populacao / area;
    pibpercapita = pib / populacao;
    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    SuperPoder = populacao + area + pib + turismo + pibpercapita + (1/densidade);
    SuperPoder2 = populacao2 + area2 + pib2 + turismo2 + pibpercapita2 + (1/densidade2);

    // IMPRIMIR CARTAS
    printf("\nMostrando carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turismo);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: %.2f reais\n\n", pibpercapita);

    printf("Mostrando carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n\n", pibpercapita2);

    // COMPARAÇÃO
    printf("COMPARAÇÃO! Com 1 a carta 1 vence, com 0 a carta 2 vence.\n\n");

    comparar = populacao > populacao2;
    printf("População: %d\n", comparar);
    comparar = area > area2;
    printf("Área: %d\n", comparar);
    comparar = pib > pib2;
    printf("PIB: %d\n", comparar);
    comparar = turismo > turismo2;
    printf("Pontos Turísticos: %d\n", comparar);
    comparar = densidade2 > densidade;
    printf("Densidade Populacional: %d\n", comparar);
    comparar = pibpercapita > pibpercapita2;
    printf("PIB per Capita: %d\n", comparar);
    comparar = SuperPoder > SuperPoder2;
    printf("Super Poder: %d\n", comparar);

    return 0;
}
