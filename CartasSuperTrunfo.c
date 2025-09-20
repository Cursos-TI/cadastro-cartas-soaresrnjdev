#include <stdio.h>

int main() {
// Variaveis para a "Carta 1"

    char estado1[20];
    char codigo1[4];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

// Variaveis para a "Carta 2"

    char estado2[20];
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

// Leitura de dados da "Carta 1"

    printf("Carta 1\n");
    printf("Estado (sem espacos, ex: RioDeJaneiro): ");
    scanf("%s", estado1);

    printf("Codigo : ");
    scanf("%s", codigo1);

    printf("Nome da Cidade (sem espacos): ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf(" %d", &populacao1);
    
    printf("Area: ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf(" %f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosturisticos1);

// Leitura de dados da "Carta 2"

    printf("Carta 2\n");
    printf("Estado (sem espacos, ex: RioDeJaneiro): ");
    scanf("%s", estado2);

    printf("Codigo : ");
    scanf("%s", codigo2);

    printf("Nome da Cidade (sem espacos): ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf(" %d", &populacao2);

    printf("Area: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosturisticos2);

    return 0;
}
