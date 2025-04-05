#include <stdio.h>
 
int main() {

    // Variaveis da Primeira carta

    char estado1;
    char carta1[4];
    char cidade1[50];
    int populacao1, pontosturisticos1;
    float area1, pib1;

    // Variaveis da Segunda carta
    char estado2;
    char carta2[4];
    char cidade2[50];
    int populacao2, pontosturisticos2;
    float area2, pib2;

    // Primeira carta
    printf("Cadastrando carta 1:\n");
    printf("Digite um estado ('A' a 'H'): \n");
    scanf("%c", &estado1);

    printf("Digite o código da carta (exemplo:'A01' ou 'B02'): \n");
    scanf("%s", &carta1);

    printf("Digite o Nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população:");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos1);

    // Segunda carta

    printf("Cadastrando carta 2:\n");
    printf("Digite um estado ('A' a 'H'): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (exemplo:'A01' ou 'B02'): \n");
    scanf("%s", &carta2);

    printf("Digite o Nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos2);    

    // Exibnido na tela as informações das cartas

    // Carta 1:
    printf("\nCartas cadastradas com sucesso.\nDados da carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s \n", cidade1);
    printf("Codigo da carta: %s \n", carta1);
    printf("População: %d \n", populacao1);
    printf("Área em km²: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Numero de pontos turísticos: %d \n", pontosturisticos1);

    // Carta 2:
    printf("\nDados da carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s \n", cidade2);
    printf("Codigo da carta: %s \n", carta2);
    printf("População: %d \n", populacao2);
    printf("Área em km²: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Numero de pontos turísticos: %d \n", pontosturisticos2);
    return 0;
}