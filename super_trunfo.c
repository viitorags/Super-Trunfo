#include <stdio.h>
#include <stdlib.h>

struct Cartas
{
    // Declaração de variávieis para armazenar os dados de duas cartas
    char estado[3];
    char codigo[4];
    char cidade[100];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade_populacional;
    float pib_percapita;
    float super_poder;
};

// Função para cadastrar as cartas
void cadastro_cartas(struct Cartas *cartas[2])
{
    // Loop para cadastrar as cartas
    for (int i = 0; i < cartas; i++)
    {
        printf("Cadastro carta %i°:\n", i + 1);

        printf("Digite o estado:\n");
        scanf("%s", &cartas[i]->estado);

        printf("Digite o código:\n");
        scanf("%s", &cartas[i]->codigo);

        printf("Digite o nome da cidade:\n");
        getchar();                                                  // Limpa o buffer do teclado;
        fgets(cartas[i]->cidade, sizeof(cartas[i]->cidade), stdin); // Lê o texto com espaços

        printf("Digite a quantidade da população:\n");
        scanf("%i", &cartas[i]->populacao);

        printf("Digite a área da cidade:\n");
        scanf("%f", &cartas[i]->area);

        printf("Digite o PIB da cidade:\n");
        scanf("%f", &cartas[i]->pib);

        printf("Digite a quantidade de pontos turísticos:\n");
        scanf("%i", &cartas[i]->pontosTuristicos);

        system("clear"); // Limpa a linha de comando
    }
}

// Função para exibir as cartas
void exibir_cartas(struct Cartas cartas[2])
{

    // Calcular PIB per capita, densidade populacional, e super poder
    // cartas.pib_percapita_1 = cartas[i].pib_1 / cartas[i].area_1;
    // cartas.pib_percapita_2 = cartas[i].pib_2 / cartas[i].area_2;
    // cartas.densidade_populacional_1 = (float)(cartas[i].populacao_1) / cartas[i].area_1;
    // cartas.densidade_populacional_2 = (float)(cartas[i].populacao_2) / cartas[i].area_2;
    // cartas.super_poder_1 = (float)(cartas[i].populacao_1) + cartas[i].area_1 + cartas[i].pib_1 + (float)(cartas[i].pontosTuristicos_1);
    // cartas.super_poder_2 = (float)(cartas[i].populacao_2) + cartas[i].area_2 + cartas[i].pib_2 + (float)(cartas[i].pontosTuristicos_2);

    // // Exibe os dados de todas as cartas
    for (int i = 0; i < cartas; i++)
    {
        printf("Carta %i:\n", i + 1);
        printf("Estado: %s\n", cartas[i].estado);
        printf("Código: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s", cartas[i].cidade);
        printf("População: %i\n", cartas[i].populacao);
        printf("Área: %f km²\n", cartas[i].area);
        printf("PIB: %f bilhões de reais\n", cartas[i].pib);
        printf("Número de Pontos Turísticos: %i\n", cartas[i].pontosTuristicos);
        printf("Densidade Populacional: %f hab/km²", cartas[i].densidade_populacional);
        printf("PIB per Capita: %f reais", cartas[i].pib_percapita);
        printf("\n");
    }

    // printf("Comparação de Cartas:\n");
    // printf("População: %s\n", (cartas[i].populacao_1 > cartas[i].populacao_2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
    // printf("Área: %s\n", (cartas[i].area_1 > cartas[i].area_2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
    // printf("PIB: %s\n", (cartas[i].pib_1 > cartas[i].pib_2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
    // printf("Pontos Turísticos: %s\n", (cartas[i].pontosTuristicos_1 > cartas[i].pontosTuristicos_2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
    // printf("Densidade Populacional: %s\n", (cartas[i].densidade_populacional_1 > cartas.densidade_populacional_2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
    // printf("PIB per Capita: %s\n", (cartas[i].pib_percapita_1 > cartas[i].pib_percapita_2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
    // printf("Super Poder: %s\n", (cartas[i].super_poder_1 > cartas[i].super_poder_2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
}

int main(void)
{
    struct Cartas cartas;

    // Chamada da função para cadastrar cartas
    cadastro_cartas(&cartas);
    // Chamada da função para exibir as cartas cadastradas
    exibir_cartas(&cartas);
    // Chamada para função que compara as cartas
    comparar_cartas();
}
