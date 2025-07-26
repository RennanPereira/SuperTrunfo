#include <stdio.h>

int main() {
    char Estado[20], Cidade[20], Codigo[10];
    int PontosTuristicos;
    float Area, SuperPoder;
    float Pib, DensidadeP, PibPerCapita;
    unsigned long int Populacao;
    // Início do jogo Super Trunfo
    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("Por favor, insira as informações solicitadas para criar a primeira carta.\n");
    
    // Solicita ao usuário as informações da carta
    printf("Digite o estado: ");
    scanf(" %[^\n]", Estado); // Lê uma string com espaços

    printf("Digite o código da carta: ");
    scanf(" %[^\n]", &Codigo); // Lê uma string para o código da cartas

    printf("Digite a cidade: ");
    scanf(" %[^\n]", Cidade);

    printf("Digite o tamanho da população: ");
    scanf("%u", &Populacao);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos);

    printf("Digite a área do estado (em km²): ");
    scanf("%f", &Area);

    printf("Digite o PIB do estado: ");
    scanf("%f", &Pib);

    //Calcular densidade populacional
    DensidadeP = Populacao / Area;

    //Calcular PIB per Capita
    PibPerCapita = Pib / Populacao;

    //Calcular Super Poder
    SuperPoder = Populacao + Area + Pib + PontosTuristicos + PibPerCapita - DensidadeP;

    // Solicita ao usuário as informações da segunda carta
    printf("\nAgora digite as informações da segunda carta:\n");

    char Estado2[20], cidade2[20], Codigo2[10];
    int PontosTuristicos2;
    float Area2, SuperPoder2;
    float Pib2, DensidadeP2, PibPerCapita2;
    unsigned long int Populacao2;

    printf("Digite o estado: ");
    scanf(" %[^\n]", Estado2); 

    printf("Digite o código da carta: ");
    scanf(" %[^\n]", &Codigo2);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite o tamanho da população: ");
    scanf("%u", &Populacao2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    printf("Digite a área do estado (em km²): ");
    scanf("%f", &Area2);

    printf("Digite o PIB do estado: ");
    scanf("%f", &Pib2);

    //Calcular densidade populacional
    DensidadeP2 = (float) Populacao2 / Area2;

    //Calcular PIB per Capita
    PibPerCapita2 = (double) Pib2 / Populacao2;

    //Calcular Super Poder
    SuperPoder2 = Populacao2 + Area2 + Pib2 + PontosTuristicos2 + PibPerCapita2 - DensidadeP2;


    // Exibe as informações das cartas
    printf("\nInformações da Primeira Carta:\n");
    printf("Estado: %s\n", Estado);
    printf("Código da Carta: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f$ de Reais\n", Pib);
    printf("Pontos Turísticos: %d\n", PontosTuristicos);
    printf("Densidade Populacional: %.0f hab/km²\n", DensidadeP);
    printf("PIB per Capita: %.2f$ de Reais\n", PibPerCapita);
    printf("Super Poder: %.2f\n", SuperPoder);

    printf("\nInformações da Segunda Carta:\n");
    printf("Estado: %s\n", Estado2);
    printf("Código da Carta: %s\n", Codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f\n", Pib2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.0f hab/km²\n", DensidadeP2);
    printf("PIB per Capita: %.2f$ de Reais\n", PibPerCapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);


    // Comparações entre as cartas
    printf("\nComparações entre as cartas:\n");
    printf("A carta %s vence em pontos turísticos a carta %s? %d\n", Estado, Estado2, PontosTuristicos > PontosTuristicos2);
    printf("A carta %s vence em população a carta %s? %d\n", Estado, Estado2, Populacao > Populacao2);
    printf("A carta %s vence em maior área a carta %s? %d\n", Estado, Estado2, Area > Area2);
    printf("A carta %s vence em PIB maior a carta %s? %d\n", Estado, Estado2, Pib > Pib2);
    printf("A carta %s vence em densidade populacional menor que a carta %s? %d\n", Estado, Estado2, DensidadeP < DensidadeP2);
    printf("A carta %s vence em PIB per capita maior a carta %s? %d\n", Estado, Estado2, PibPerCapita > PibPerCapita2);
    printf("A carta %s vence em super poder maior a carta %s? %d\n", Estado, Estado2, SuperPoder > SuperPoder2);

}
