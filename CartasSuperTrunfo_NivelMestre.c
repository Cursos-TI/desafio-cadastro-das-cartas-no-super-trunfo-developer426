#include <stdio.h>

int main(){
    // Declaração das variáveis Carta 1
    char estado1;
    char codigo_carta1[4];
    char nome_cidade1[50];
    unsigned long int populacao1; // 'int' foi substituido por 'unsigned long int'
    float area1;
    float pib1;
    int num_pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1; // Variável para o novo atributo Carta 1

    // Declaração das variáveis Carta 2
    char estado2;
    char codigo_carta2[4];
    char nome_cidade2[50];
    unsigned long int populacao2; // 'int' foi substituido por 'unsigned long int'
    float area2;
    float pib2;
    int num_pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2; // Variável para o novo atributo Carta 2

    printf ("--- Cadastro de Carta 1 ---\n");
    
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1); // O espaço que vem antes de '%c' ignora os espaços em branco e quebra de linha

    printf("Digite o codigo da carta (Ex: A01): ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1); // Realiza a linha inteira

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1); // '%lu' é utilizado para 'unsigned long int'

    printf("Digite a area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &num_pontos_turisticos1);

    // Cálculo Densidade Populacional e PIB per capita C1
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / (float)populacao1;

    printf("--- Cadastro da Carta 2 ---\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (Ex: B02): ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2); // '%lu' é utilizado para 'unsigned long int'

    printf("Digite a area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &num_pontos_turisticos2);

    // Cálculo Densidade Populacional e PIB per capita C2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / (float)populacao2;

    // Cálcuo do super poder carta 1
    super_poder1 = (float)populacao1 + area1 + pib1 + num_pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade_populacional1);
    // Cálculo do super poder carta 2
    super_poder2 = (float)populacao2 + area2 + pib2 + num_pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_populacional2);
    
    printf("\n--- Cartas Cadastradas ---\n");

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.0f km2\n", area1);
    printf("PIB: %.0f\n", pib1);
    printf("Numero de Pontos Turísticos: %d\n", num_pontos_turisticos1);
    printf("Densidade Populacional: %.2f habitantes/km2\n", densidade_populacional1); // Resolução para densidade populacional Carta 1
    printf("PIB per Capita: %.2f\n", pib_per_capita1); // Resolução para PIB per Capita Carta 2
    printf("Super Poder: %.2f\n", super_poder1); // Exibição do super poder

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Area: %.0f\n", area2);
    printf("PIB: %.0f\n", pib2);
    printf("Numero de Pontos Turísticos: %d\n", num_pontos_turisticos2);
    printf("Densidade Populacional: %.2f habitantes/km2\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    printf("--- Comparação de Atributos ---\n");

    printf("Comparação de População (carta 1 vence: 1 | Carta 2 vence: 0): %d\n", populacao1 > populacao2);
    printf("Comparação de Área (carta 1 vence: 1 | Carta 2 vence: 0): %d\n", area1 > area2);
    printf("Comparação de Pib (carta 1 vence: 1 | Carta 2 vence: 0): %d\n", pib1 > pib2);
    printf("Comparação de Pontos Turísticos (carta 1 vence: 1 | Carta 2 vence: 0): %d\n", num_pontos_turisticos1 > num_pontos_turisticos2);
    printf("Comparação de PIB per Capita (carta 1 vence: 1 | Carta 2 vence: 0): %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Comparação de Densidade Populacional (carta 1 vence: 1 | Carta 2 vence: 0): %d\n", densidade_populacional1 > densidade_populacional2);
    printf("Comparação de Super Poder (carta 1 vence: 1 | Carta 2 vence: 0): %d\n", super_poder1 > super_poder2);

    return 0;
}