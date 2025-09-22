#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Declaração das variáveis da Carta 1
    char estado1;
    char codigo_carta1[4];
    char nome_cidade1[50];
    unsigned long int populacao1; // 'int' foi substituído por 'unsigned long int'
    float area1;
    float pib1;
    int num_pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    // Declarção das variáveis da Carta 2
    char estado2;
    char codigo_carta2[4];
    char nome_cidade2[50];
    unsigned long int populacao2; // 'int' foi substituido por 'unsigned long int'
    float area2;
    float pib2;
    int num_pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    int escolha_atributo;

    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1); // O espaço que vem antes de '%c' ignora os espaços em branco e quebra de linha

    printf("Digite o código da carta (Ex: A01): ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1); // Realiza a linha inteira

    printf("Digite a população: ");
    scanf("%lu", &populacao1); // '%lu' é utilizado para unsigned long int

    printf("Digite a área (km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &num_pontos_turisticos1);

    // Cálculo Densidade Populacional e PIB per capita da CARTA 1
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (Ex: B02): ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &num_pontos_turisticos2);

    // Cálculo Densidade Populacional e PIB per capita da CARTA 2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    printf("\n--- Cartas Cadastradas ---\n");

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo_carta1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Densidade Populacional: %.2f habitantes/km2\n", densidade_populacional1); // Resolução para a Densidade Populacional da Carta 1
    printf("PIB per capita: %.2f\n", pib_per_capita1); // Resolução para PIB per capita da Carta 1

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo_carta2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade Populacional: %.2f habitantes/km2\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    // Menu interativo para escolha dos atributos
    printf("\n--- Escolha o atributo para comparação ---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Digite a sua escolha: ");
    scanf("%d", &escolha_atributo);
}