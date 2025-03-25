#include <stdio.h>
#include <stdlib.h>

struct Cartas
{
    // Declaração de variávieis para armazenar os dados de duas cartas
    char estado[3];
    char codigo[4];
    char cidade[100];
    long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade_populacional;
    float pib_percapita;
    float super_poder;
};

// Função para cadastrar as cartas
void cadastro_cartas(struct Cartas cartas[2])
{
    // Loop para cadastrar as cartas
    for (int i = 0; i < 2; i++)
    {
        printf("Cadastro carta %i°:\n", i + 1);

        printf("Digite o estado:\n");
        scanf("%s", cartas[i].estado);

        printf("Digite o código:\n");
        scanf("%s", cartas[i].codigo);

        printf("Digite o nome da cidade:\n");
        getchar();                                                  // Limpa o buffer do teclado;
        fgets(cartas[i].cidade, sizeof(cartas[i].cidade), stdin); // Lê o texto com espaços

        printf("Digite a quantidade da população:\n");
        scanf("%li", &cartas[i].populacao);

        printf("Digite a área da cidade:\n");
        scanf("%f", &cartas[i].area);

        printf("Digite o PIB da cidade:\n");
        scanf("%f", &cartas[i].pib);

        printf("Digite a quantidade de pontos turísticos:\n");
        scanf("%i", &cartas[i].pontosTuristicos);

         // Calculando densidade populacional e PIB per capita
        cartas[i].densidade_populacional = (float)(cartas[i].populacao) / cartas[i].area;
        cartas[i].pib_percapita = cartas[i].pib / cartas[i].populacao;

        // Calculando o "super poder" da cidade (com base em população, área, PIB e pontos turísticos)
        cartas[i].super_poder = (float)(cartas[i].populacao) + cartas[i].area + cartas[i].pib + (float)(cartas[i].pontosTuristicos);

        system("clear"); // Limpa a linha de comando
    }
}

// Função para exibir as cartas
void exibir_cartas(struct Cartas cartas[2])
{

    //Exibe os dados de todas as cartas
    for (int i = 0; i < 2; i++)
    {
        printf("Carta %i:\n", i + 1);
        printf("Estado: %s\n", cartas[i].estado);
        printf("Código: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s", cartas[i].cidade);
        printf("População: %li\n", cartas[i].populacao);
        printf("Área: %f km²\n", cartas[i].area);
        printf("PIB: %f bilhões de reais\n", cartas[i].pib);
        printf("Número de Pontos Turísticos: %i\n", cartas[i].pontosTuristicos);
        printf("Densidade Populacional: %f hab/km²\n", cartas[i].densidade_populacional);
        printf("PIB per Capita: %f reais\n", cartas[i].pib_percapita);
        printf("\n");
    }

}

void comparar_cartas(struct Cartas cartas[2])
{
    int opcao;

    printf("Qual atributo deseja comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Densidade Populacional\n");
    printf("5. PIB per Capita\n");
    printf("6. Super Poder\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao)
    {
        case 1:
            printf("População: %s\n", (cartas[0].populacao > cartas[1].populacao) ? "Carta 1 Venceu" : "Carta 2 Venceu");
            break;

        case 2:
            printf("Área: %s\n", (cartas[0].area > cartas[1].area) ? "Carta 1 Venceu" : "Carta 2 Venceu");
           break;

        case 3:
            printf("PIB: %s\n", (cartas[0].pib > cartas[1].pib) ? "Carta 1 Venceu" : "Carta 2 Venceu");
            break;

        case 4:
            printf("Densidade Populacional: %s\n", (cartas[0].densidade_populacional > cartas[1].densidade_populacional) ? "Carta 1 Venceu" : "Carta 2 Venceu");
            break;

        case 5:
            printf("PIB per Capita: %s\n", (cartas[0].pib_percapita > cartas[1].pib_percapita) ? "Carta 1 Venceu" : "Carta 2 Venceu");
            break;

        case 6:
            printf("Super Poder: %s\n", (cartas[0].super_poder > cartas[1].super_poder) ? "Carta 1 Venceu" : "Carta 2 Venceu");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }
    printf("\n");
}

int main(void)
{
    struct Cartas cartas[2];

    // Chamada da função para cadastrar cartas
    cadastro_cartas(cartas);
    // Chamada da função para exibir as cartas cadastradas
    exibir_cartas(cartas);
    // Chamada da função para comparar as cartas exibindo um menu de escolha de qual atributo deve ser comparado
    comparar_cartas(cartas);
}
