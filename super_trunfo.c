#include <stdio.h>

int main() {
    char Estado[20], cidade[20];
    int Populacao, PontosTuristicos, Codigo;
    float Area, Pib;

    // Início do jogo Super Trunfo
    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("Por favor, insira as informações solicitadas para criar a primeira carta.\n");
    
    // Solicita ao usuário as informações da carta
    printf("Digite o estado: ");
    scanf(" %[^\n]", Estado); // Lê uma string com espaços

    printf("Digite o código da carta: ");
    scanf("%s", &Codigo); // Lê uma string para o código da cartas

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade);

    printf("Digite o tamanho da população: ");
    scanf("%d", &Populacao);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos);

    printf("Digite a área do estado (em km²): ");
    scanf("%f", &Area);

    printf("Digite o PIB do estado: ");
    scanf("%f", &Pib);

    // Solicita ao usuário as informações da segunda carta
    printf("\nAgora digite as informações da segunda carta:\n");

    char Estado2[20], cidade2[20];
    int Populacao2, PontosTuristicos2, Codigo2;
    float Area2, Pib2;

    printf("Digite o estado: ");
    scanf(" %[^\n]", Estado2); 

    printf("Digite o código da carta: ");
    scanf("%d", &Codigo2);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite o tamanho da população: ");
    scanf("%d", &Populacao2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    printf("Digite a área do estado (em km²): ");
    scanf("%f", &Area2);

    printf("Digite o PIB do estado: ");
    scanf("%f", &Pib2);

    // Exibe as informações das cartas
    printf("\nInformações da Primeira Carta:\n");
    printf("Estado: %s\n", Estado);
    printf("Código da Carta: %d\n", Codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", Populacao);
    printf("Pontos Turísticos: %d\n", PontosTuristicos);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f\n", Pib);
    
    printf("\nInformações da Segunda Carta:\n");
    printf("Estado: %s\n", Estado2);
    printf("Código da Carta: %d\n", Codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", Populacao2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f\n", Pib2);



}
