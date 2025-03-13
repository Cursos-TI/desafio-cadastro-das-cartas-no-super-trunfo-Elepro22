#include <stdio.h>

typedef struct {
    char estado;
    char codigo[4];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int num_pontos_turisticos;
} Carta;

int main() {
    Carta carta1, carta2;

    printf("Cadastro da primeira carta:\n");
    printf("Estado (A-B): ");
    scanf(" %c", &carta1.estado);
    printf("Código da Carta: ");
    scanf("%s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf("%s", carta1.nome_cidade);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.num_pontos_turisticos);

    printf("\nCadastro da segunda carta:\n");
    printf("Estado (A-B): ");
    scanf(" %c", &carta2.estado);
    printf("Código da Carta: ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf("%s", carta2.nome_cidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.num_pontos_turisticos);

    printf("\nDados cadastrados:\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.num_pontos_turisticos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.num_pontos_turisticos);

    return 0;
}
