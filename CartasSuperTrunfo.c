#include <stdio.h>

int main() {

// Declaração das variáveis da carta 01

    char estadoA1;
    char codigoA1[4];
    char nomeCidadeA1[30];
    int populacaoA1, PontosTuristicosA1;
    float areaA1, pibA1;

  // Declaração das variáveis da carta 02
  
    char estadoB2;
    char codigoB2[3];
    char nomeCidadeB2[40];
    int populacaoB2, PontosTuristicosB2;
    float areaB2, pibB2;

    printf("Cadastro da Carta A1 \n");
    printf("Estado : ");
    scanf(" %c", &estadoA1);

    printf("Código da carta : ");
    scanf("%s", codigoA1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidadeA1); // Lê até o ENTER

    printf("População: ");
    scanf("%d", &populacaoA1);

    printf("Área (em km²): ");
    scanf("%f", &areaA1);

    printf("PIB: ");
    scanf("%f", &pibA1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &PontosTuristicosA1);

    printf("\n Cadastro da Carta 2 \n");
    printf("Estado : ");
    scanf(" %c", &estado2);

    printf("Código da carta: ");
    scanf("%s", codigoB2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidadeB2);

    printf("População: ");
    scanf("%d", &populacaoB2);

    printf("Área (em km²): ");
    scanf("%f", &areaB2);

    printf("PIB: ");
    scanf("%f", &pibB2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &PontosTuristicosB2);

    // Exibição dos dados das duas cartas
    printf("\n DADOS DAS CARTAS \n");

    printf("\nCarta A1:\n");
    printf("Estado: %c\n", estadoA1);
    printf("Código: %s\n", codigoA1);
    printf("Cidade: %s\n", nomeCidadeA1);
    printf("População: %d\n", populacaoA1);
    printf("Área: %.2f m²\n", areaA1);
    printf("PIB: %.2f \n", pibA1);
    printf("Pontos turísticos: %d\n", PontosTuristicosA1);

    printf("\nCarta B2:\n");
    printf("Estado: %c\n", estadoB2);
    printf("Código: %s\n", codigoB2);
    printf("Cidade: %s\n", nomeCidadeB2);
    printf("População: %d\n", populacaoB2);
    printf("Área: %.2f m²\n", areaB2);
    printf("PIB: %.2f \n", pibB2);
    printf("Pontos turísticos: %d\n", PontosTuristicosB2);

    return 0;
}
