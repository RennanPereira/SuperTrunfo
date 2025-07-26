#include <stdio.h>

int main() {
    char Estado[20], Cidade[20], Codigo[10];
    int Populacao, PontosTuristicos;
    float Area;
    double Pib, DensidadeP, PibPerCapita;
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
    scanf("%d", &Populacao);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos);

    printf("Digite a área do estado (em km²): ");
    scanf("%f", &Area);

    printf("Digite o PIB do estado: ");
    scanf("%lf", &Pib);

    //Calcular densidade populacional
    DensidadeP = (double) Populacao / Area;

    //Calcular PIB per Capita
    PibPerCapita = (double) Pib / Populacao;

    // Solicita ao usuário as informações da segunda carta
    printf("\nAgora digite as informações da segunda carta:\n");

    char Estado2[20], cidade2[20], Codigo2[10];
    int Populacao2, PontosTuristicos2;
    float Area2;
    double Pib2, DensidadeP2, PibPerCapita2;

    printf("Digite o estado: ");
    scanf(" %[^\n]", Estado2); 

    printf("Digite o código da carta: ");
    scanf(" %[^\n]", &Codigo2);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite o tamanho da população: ");
    scanf("%d", &Populacao2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    printf("Digite a área do estado (em km²): ");
    scanf("%f", &Area2);

    printf("Digite o PIB do estado: ");
    scanf("%lf", &Pib2);

    //Calcular densidade populacional
    DensidadeP2 = (float) Populacao2 / Area2;

       //Calcular PIB per Capita
    PibPerCapita2 = (double) Pib2 / Populacao2;

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

}
