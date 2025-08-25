#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char codigoA[5], nomeA[30];
    int populacaoA;
    float areaA, pibA;

    // Variáveis para a segunda carta
    char codigoB[5], nomeB[30];
    int populacaoB;
    float areaB, pibB;

    // Cadastro da primeira carta
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigoA);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeA);
    printf("Digite a população: ");
    scanf("%d", &populacaoA);
    printf("Digite a área (em km²): ");
    scanf("%f", &areaA);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pibA);

    // Cadastro da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigoB);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeB);
    printf("Digite a população: ");
    scanf("%d", &populacaoB);
    printf("Digite a área (em km²): ");
    scanf("%f", &areaB);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pibB);

    // Comparação de atributos
    printf("\n=== Comparação das Cartas ===\n");

    if (populacaoA > populacaoB) {
        printf("População: %s venceu.\n", nomeA);
    } else if (populacaoB > populacaoA) {
        printf("População: %s venceu.\n", nomeB);
    } else {
        printf("População: Empate.\n");
    }

    if (areaA > areaB) {
        printf("Área: %s venceu.\n", nomeA);
    } else if (areaB > areaA) {
        printf("Área: %s venceu.\n", nomeB);
    } else {
        printf("Área: Empate.\n");
    }

    if (pibA > pibB) {
        printf("PIB: %s venceu.\n", nomeA);
    } else if (pibB > pibA) {
        printf("PIB: %s venceu.\n", nomeB);
    } else {
        printf("PIB: Empate.\n");
    }

    return 0;
}