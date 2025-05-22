#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibPerCapita1, pibPerCapita2;

    // Entrada de dados para a Carta 1
    printf("Digite o estado da Carta 1 (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da Carta 1: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da Carta 1: ");
    scanf("%s", nomeCidade1);
    printf("Digite a população da Carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área da Carta 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados para a Carta 2
    printf("Digite o estado da Carta 2 (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da Carta 2: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da Carta 2: ");
    scanf("%s", nomeCidade2);
    printf("Digite a população da Carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área da Carta 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Escolha fixa do atributo para comparação (exemplo: População)
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d habitantes\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: %d habitantes\n", nomeCidade2, populacao2);

    // Determinação da carta vencedora
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}