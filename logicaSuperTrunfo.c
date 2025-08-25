#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Nível Novato: Cadastro de cartas e comparação simples

struct CartaCidade {
    char estado[3];
    char codigo[5];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
};

int main() {
    struct CartaCidade carta1, carta2;

    // Cadastro da primeira carta
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (UF): ");
    scanf("%2s", carta1.estado);
    printf("Código da carta: ");
    scanf("%4s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nome);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em milhões R$): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib * 1000000 / carta1.populacao;

    // Cadastro da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (UF): ");
    scanf("%2s", carta2.estado);
    printf("Código da carta: ");
    scanf("%4s", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nome);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em milhões R$): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib * 1000000 / carta2.populacao;

    // Exibição dos dados cadastrados
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s | Código: %s | Cidade: %s\n", carta1.estado, carta1.codigo, carta1.nome);
    printf("População: %d | Área: %.2f km² | PIB: %.2f mi R$ | Pontos turísticos: %d\n",
           carta1.populacao, carta1.area, carta1.pib, carta1.pontosTuristicos);
    printf("Densidade: %.2f hab/km² | PIB per capita: %.2f R$\n", carta1.densidade, carta1.pibPerCapita);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s | Código: %s | Cidade: %s\n", carta2.estado, carta2.codigo, carta2.nome);
    printf("População: %d | Área: %.2f km² | PIB: %.2f mi R$ | Pontos turísticos: %d\n",
           carta2.populacao, carta2.area, carta2.pib, carta2.pontosTuristicos);
    printf("Densidade: %.2f hab/km² | PIB per capita: %.2f R$\n", carta2.densidade, carta2.pibPerCapita);

    // Comparação simples por atributo fixo (ex: População)
    printf("\n=== Comparação ===\n");
    if (carta1.populacao > carta2.populacao) {
        printf("🏆 A cidade vencedora é %s (maior população).\n", carta1.nome);
    } else if (carta1.populacao < carta2.populacao) {
        printf("🏆 A cidade vencedora é %s (maior população).\n", carta2.nome);
    } else {
        printf("⚖️ Empate! Ambas têm a mesma população.\n");
    }

    return 0;
}
