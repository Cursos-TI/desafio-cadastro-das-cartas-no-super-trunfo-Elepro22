#include <stdio.h>

typedef struct {
    int populacao;
    float area;
    float pib;
    int num_pontos_turisticos;
} Carta;

int main() {
    Carta carta1, carta2;

    printf("Cadastro da primeira carta:\n");
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.num_pontos_turisticos);

    printf("\nCadastro da segunda carta:\n");
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.num_pontos_turisticos);

    printf("\nDados cadastrados:\n");
    printf("Carta 1:\n");
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Número de pontos turísticos: %d\n", carta1.num_pontos_turisticos);

    printf("\nCarta 2:\n");
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Número de pontos turísticos: %d\n", carta2.num_pontos_turisticos);

    return 0;
}

