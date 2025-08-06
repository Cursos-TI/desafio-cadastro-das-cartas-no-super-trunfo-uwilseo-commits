#include <stdio.h>
#include <string.h>

int main() {
    // --- Carta 1 ---
    char estado1;                    // Uma letra de 'A' a 'H'
    char codigo1[4];                // Ex: "A01" (3 chars + '\0')
    char nome1[100];                // Nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Instruções para o usuário sobre a carta 1
    printf("=== Cadastro da Carta 1 ===\n");

    // Leitura da carta 1
    printf("Estado (letra de A a H): ");
    scanf("%c", &estado1); // espaço antes de %c para consumir whitespace residual

    printf("Código da carta (ex: A01): ");
    scanf("%3s", codigo1); // lê até 3 caracteres (termina com '\0')

    printf("Nome da cidade: ");
    fgets(nome1, sizeof(nome1), stdin);
    // remover o '\n' no final de nome1, se existir
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // --- Carta 2 ---
    char estado2;
    char codigo2[4];
    char nome2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: B02): ");
    scanf("%3s", codigo2);

    getchar(); // limpar buffer antes do fgets

    printf("Nome da cidade: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // --- Exibição ---
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
