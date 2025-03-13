#include <stdio.h>

int main()  {

    // Carta 1 - variáveis
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontoturistico1;

    // Entrada de dados - Carta 1
    printf("Digite o estado da Carta 1 (A-H):\n");
    scanf(" %c", &estado1);
    printf("Digite o código da Carta 1 (Ex: A01):\n");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade:\n");
    scanf(" %s", cidade1);
    printf("Digite a população:\n");
    scanf(" %d", &populacao1);
    printf("Digite a área (km²):\n");
    scanf(" %f", &area1);
    printf("Digite o PIB:\n");
    scanf(" %f", &pib1);
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf(" %d", &pontoturistico1);

   // Carta 2 - variáveis
   char estado2;
   char codigo2[4];
   char cidade2[50];
   int populacao2;
   float area2, pib2;
   int pontoturistico2;
   
   // Entrada de dados - Carta 2
   printf("\nDigite o estado da Carta 2 (A-H):\n");
   scanf(" %c", &estado2);
   printf("Digite o código da carta 2 (Ex: B01):\n");
   scanf(" %s", codigo2);
   printf("Digite o nome da cidade:\n");
   scanf(" %s", cidade2);
   printf("Digite a população:\n");
   scanf(" %d", &populacao2);
   printf("Digite a área (km²):\n");
   scanf(" %f", &area2);
   printf("Digite o PIB:\n");
   scanf(" %f", &pib2);
   printf("Digite a quantidade de pontos turísticos:\n");
   scanf(" %d", &pontoturistico2);

   // Exibição das informações - Carta 1
   printf("\nCarta 1:\n");
   printf("Estado: %c\n", estado1);
   printf("Código: %s\n", codigo1);
   printf("Nome da Cidade: %s\n", cidade1);
   printf("População: %d\n", populacao1);
   printf("Área: %.2f km²\n", area1);
   printf("PIB: %.2f  \n", pib1);
   printf("Quantidade de Pontos Túristicos: %d\n", pontoturistico1);

   // Exibição das informações - Carta 2
   printf("\nCarta 2:\n");
   printf("Estado: %c\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Nome da Cidade: %s\n", cidade2);
   printf("População: %d\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: %.2f\n", pib2);
   printf("Quantidade de Pontos Túristicos: %d\n", pontoturistico2);

   return 0;
}
