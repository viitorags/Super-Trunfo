#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variávieis para armazenar os dados de duas cartas
    char estado_1[3];
    char estado_2[3];
    char codigo_1[4];
    char codigo_2[4];
    char cidade_1[100];
    char cidade_2[100];
    unsigned long int populacao_1;
    unsigned long int populacao_2;
    float area_1;
    float area_2;
    float pib_1;
    float pib_2;
    int pontosTuristicos_1;
    int pontosTuristicos_2;
    float densidade_populacional_1;
    float densidade_populacional_2;
    float pib_percapita_1;
    float pib_percapita_2;
    float super_poder_1;
    float super_poder_2;

    // LEITURA DE DADOS DA CARTA 1
    printf("Carta 1:\n");

    printf("Digite o estado:\n");
    scanf("%s", &estado_1);

    printf("Digite o código:\n");
    scanf("%s", &codigo_1);

    printf("Digite o nome da cidade:\n");
    getchar();                   // Limpa o buffer do teclado;
    fgets(cidade_1, 100, stdin); // Lê o texto com espaços

    printf("Digite a quantidade da população:\n");
    scanf("%i", &populacao_1);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area_1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib_1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%i", &pontosTuristicos_1);

    system("clear"); // Limpa a linha de comando

    // LEITURA DE DADOS DA CARTA 2
    printf("Carta 2:\n");

    printf("Digite o estado:\n");
    scanf("%s", &estado_2);

    printf("Digite o código:\n");
    scanf("%s", &codigo_2);

    printf("Digite o nome da cidade:\n");
    getchar();                   // Limpa o buffer do teclado;
    fgets(cidade_2, 100, stdin); // Lê o texto com espaços

    printf("Digite a quantidade da população:\n");
    scanf("%i", &populacao_2);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area_2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib_2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%i", &pontosTuristicos_2);

    system("clear"); // Limpa novamente a linha de comando

    // // Exibe todos os dados da carta 1
    // printf("Carta 1:\n");
    // printf("Estado: %s\n", estado_1);
    // printf("Código: %s\n", codigo_1);
    // printf("Nome da Cidade: %s", cidade_1);
    // printf("População: %i\n", populacao_1);
    // printf("Área: %f km²\n", area_1);
    // printf("PIB: %f bilhões de reais\n", pib_1);
    // printf("Número de Pontos Turísticos: %i\n", pontosTuristicos_1);
    // printf("Densidade Populacional: %f hab/km²", densidade_populacional_1);
    // printf("PIB per Capita: %f reais", pib_percapita_1);

    // printf("\n");

    // // Exibe todos os dados da carta 2
    // printf("Carta 2:\n");
    // printf("Estado: %s\n", estado_2);
    // printf("Código: %s\n", codigo_2);
    // printf("Nome da Cidade: %s", cidade_2);
    // printf("População: %i\n", populacao_2);
    // printf("Área: %f km²\n", area_2);
    // printf("PIB: %f bilhões de reais\n", pib_2);
    // printf("Número de Pontos Turísticos: %i\n", pontosTuristicos_2);
    // printf("Densidade Populacional: %f hab/km²", densidade_populacional_2);
    // printf("PIB per Capita: %f reais", pib_percapita_2);

    // Calcular PIB per capita, densidade populacional, e super poder
    pib_percapita_1 = pib_1 / area_1;
    pib_percapita_2 = pib_2 / area_2;
    densidade_populacional_1 = (float)(populacao_1) / area_1;
    densidade_populacional_2 = (float)(populacao_2) / area_2;
    super_poder_1 = (float)(populacao_1) + area_1 + pib_1 + (float)(pontosTuristicos_1);
    super_poder_2 = (float)(populacao_2) + area_2 + pib_2 + (float)(pontosTuristicos_2);

    printf("Comparação de Cartas:\n");
    printf("População: %s\n", (populacao_1 > populacao_2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
    printf("Área: %s\n", (area_1 > area_2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
    printf("PIB: %s\n", (pib_1 > pib_2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
    printf("Pontos Turísticos: %s\n", (pontosTuristicos_1 > pontosTuristicos_2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
    printf("Densidade Populacional: %s\n", (densidade_populacional_1 > densidade_populacional_2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
    printf("PIB per Capita: %s\n", (pib_percapita_1 > pib_percapita_2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
    printf("Super Poder: %s\n", (super_poder_1 > super_poder_2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
}
