#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //Declaração de variaveis da primeira carta
    char Estado[20], Cidade[20], Codigo[10];
    int PontosTuristicos = 250, Atributo1, Atributo2;
    float Area = 1500.00, SuperPoder, Soma;
    float Pib = 20000000, DensidadeP, PibPerCapita;
    unsigned long int Populacao = 300000;

    strcpy(Estado, "Ceará");
    strcpy(Cidade, "Fortaleza");
    strcpy(Codigo, "CE123");

    //Calcular densidade populacional
    DensidadeP = Populacao / Area;

    //Calcular PIB per Capita
    PibPerCapita = Pib / Populacao;

    //Calcular Super Poder
    SuperPoder = Populacao + Area + Pib + PontosTuristicos + PibPerCapita - DensidadeP;

    //Declaração de variaveis da segunda carta
    char Estado2[20], cidade2[20], Codigo2[10];
    int PontosTuristicos2 = 150;
    float Area2 = 1500.00, SuperPoder2;
    float Pib2 = 30000000, DensidadeP2, PibPerCapita2;
    unsigned long int Populacao2 = 400000;

    strcpy(Estado2, "Bahia");
    strcpy(cidade2, "Salvador");
    strcpy(Codigo2, "BA456");

    //Calcular densidade populacional
    DensidadeP2 = (float) Populacao2 / Area2;

    //Calcular PIB per Capita
    PibPerCapita2 = (double) Pib2 / Populacao2;

    //Calcular Super Poder
    SuperPoder2 = Populacao2 + Area2 + Pib2 + PontosTuristicos2 + PibPerCapita2 - DensidadeP2;

    //Inicialização do jogo
    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("Você vai selecionar dois atributos para comparar entre as cartas!\n");
    printf("1. População\n");
    printf("2. Pontos Turísticos\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Selecione o primeiro atributo para comparar as cartas: (1 - 7)\n");
    scanf("%d", &Atributo1);

    //Teste de números invalidos
    if(Atributo1 > 7) {
        printf("Número inválido, tente novamente");
        return 0;
    }

    printf("1. População\n");
    printf("2. Pontos Turísticos\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Selecione o segundo atributo para comparar as cartas: (1 - 7)\n");
    scanf("%d", &Atributo2);

    //Teste de números invalidos
    if(Atributo2 > 7) {
        printf("Número inválido, tente novamente");
        return 0;
    }

    // teste para não permitir a escolha do mesmo atributo
    if (Atributo1 == Atributo2) {
    printf("Você escolheu os mesmos atributos, tente de novo.\n");
    return 0; // ou exit(0);
    } 

    //Comparações
    printf("\nPrimeira disputa de atributos:\n");
    switch (Atributo1)
    {
    case 1:
        printf("%s vs %s\n", Estado, Estado2);
        printf("Atributo escolhido: População\n");
        printf("%s: %lu. %s: %lu.\n", Estado, Populacao, Estado2, Populacao2);
        if(Populacao > Populacao2){
            printf("Resultado: A carta %s é a vencedora! \n", Estado);
        } else if(Populacao2 > Populacao ){
            printf("Resultado: A carta %s é a vencedora! \n", Estado2);
        } else {
            printf("As duas cartas possuem a mesma população. Empate!\n");
        }
        break;
    case 2:
        printf("%s vs %s\n", Estado, Estado2);
        printf("Atributo escolhido: Pontos Turísticos\n");
        printf("%s: %d. %s: %d.\n", Estado, PontosTuristicos, Estado2, PontosTuristicos2);
        if(PontosTuristicos > PontosTuristicos2){
            printf("Resultado: A carta %s é a vencedora! \n", Estado);
        } else if( PontosTuristicos2 > PontosTuristicos ){
            printf("Resultado: A carta %s é a vencedora! \n", Estado2);
        } else {
            printf("As duas cartas possuem o mesmo número de pontos turísticos. Empate!\n");
        }
        break;
     case 3:
        printf("%s vs %s\n", Estado, Estado2);
        printf("Atributo escolhido: Área(km²)\n");
        printf("%s: %f. %s: %f.\n", Estado, Area, Estado2, Area2);
        if(Area > Area2){
            printf("Resultado: A carta %s é a vencedora! \n", Estado);
        } else if(Area2 > Area ){
            printf("Resultado: A carta %s é a vencedora! \n", Estado2);
        } else {
            printf("As duas cartas possuem a mesma área. Empate!\n");
        }
        break;
     case 4:
        printf("%s vs %s\n", Estado, Estado2);
        printf("Atributo escolhido: PIB\n");
        printf("%s: %f. %s: %f.\n", Estado, Pib, Estado2, Pib2);
        if(Pib > Pib2){
            printf("Resultado: A carta %s é a vencedora! \n", Estado);
        } else if(Pib2 > Pib ){
            printf("Resultado: A carta %s é a vencedora! \n", Estado2);
        } else {
            printf("As duas cartas possuem o mesmo PIB. Empate!\n");
        }
        break;
     case 5:
        printf("%s vs %s\n", Estado, Estado2);
        printf("Atributo escolhido: Densidade Populacional\n");
        printf("%s: %f. %s: %f.\n", Estado, DensidadeP, Estado2, DensidadeP2);
        if(DensidadeP < DensidadeP2){
            printf("Resultado: A carta %s é a vencedora! \n", Estado);
        } else if(DensidadeP2 < DensidadeP ){
            printf("Resultado: A carta %s é a vencedora! \n", Estado2);
        } else {
            printf("As duas cartas possuem a mesma densidade populacional. Empate!\n");
        }
        break;
     case 6:
        printf("%s vs %s\n", Estado, Estado2);
        printf("Atributo escolhido: PIb per capita\n");
        printf("%s: %f. %s: %f.\n", Estado, PibPerCapita, Estado2, PibPerCapita2);
        if(PibPerCapita > PibPerCapita2){
            printf("Resultado: A carta %s é a vencedora! \n", Estado);
        } else if(PibPerCapita2 > PibPerCapita ){
            printf("Resultado: A carta %s é a vencedora! \n", Estado2);
        } else {
            printf("As duas cartas possuem o mesmo PIB per Capita. Empate!\n");
        }
        break;
     case 7:
        printf("%s vs %s\n", Estado, Estado2);
        printf("Atributo escolhido: Super Poder\n");
        printf("%s: %f. %s: %f.\n", Estado, SuperPoder, Estado2, SuperPoder2);
        if(SuperPoder > SuperPoder2){
            printf("Resultado: A carta %s é a vencedora! \n", Estado);
        } else if(SuperPoder2 > SuperPoder ){
            printf("Resultado: A carta %s é a vencedora! \n", Estado2);
        } else {
            printf("As duas cartas possuem o mesmo super poder. Empate!\n");
        }
        break;
    default:
        printf("Opção inválida. Por favor, selecione um número entre 1 e 7.\n");
        break;
    }

    printf("\nSegunda disputa de atributos:\n");
    switch (Atributo2)
    {
    case 1:
        printf("\n %s vs %s\n", Estado, Estado2);
        printf("Atributo escolhido: População\n");
        printf("%s: %lu. %s: %lu.\n", Estado, Populacao, Estado2, Populacao2);
        if(Populacao > Populacao2){
            printf("Resultado: A carta %s é a vencedora! \n", Estado);
        } else if(Populacao2 > Populacao ){
            printf("Resultado: A carta %s é a vencedora! \n", Estado2);
        } else {
            printf("As duas cartas possuem a mesma população. Empate!\n");
        }
        break;
    case 2:
        printf("\n %s vs %s\n", Estado, Estado2);
        printf("Atributo escolhido: Pontos Turísticos\n");
        printf("%s: %d. %s: %d.\n", Estado, PontosTuristicos, Estado2, PontosTuristicos2);
        if(PontosTuristicos > PontosTuristicos2){
            printf("Resultado: A carta %s é a vencedora! \n", Estado);
        } else if( PontosTuristicos2 > PontosTuristicos ){
            printf("Resultado: A carta %s é a vencedora! \n", Estado2);
        } else {
            printf("As duas cartas possuem o mesmo número de pontos turísticos. Empate!\n");
        }
        break;
     case 3:
        printf("\n %s vs %s\n", Estado, Estado2);
        printf("Atributo escolhido: Área(km²)\n");
        printf("%s: %f. %s: %f.\n", Estado, Area, Estado2, Area2);
        if(Area > Area2){
            printf("Resultado: A carta %s é a vencedora! \n", Estado);
        } else if(Area2 > Area ){
            printf("Resultado: A carta %s é a vencedora! \n", Estado2);
        } else {
            printf("As duas cartas possuem a mesma área. Empate!\n");
        }
        break;
     case 4:
        printf("\n %s vs %s\n", Estado, Estado2);
        printf("Atributo escolhido: PIB\n");
        printf("%s: %f. %s: %f.\n", Estado, Pib, Estado2, Pib2);
        if(Pib > Pib2){
            printf("Resultado: A carta %s é a vencedora! \n", Estado);
        } else if(Pib2 > Pib ){
            printf("Resultado: A carta %s é a vencedora! \n", Estado2);
        } else {
            printf("As duas cartas possuem o mesmo PIB. Empate!\n");
        }
        break;
     case 5:
        printf("\n %s vs %s\n", Estado, Estado2);
        printf("Atributo escolhido: Densidade Populacional\n");
        printf("%s: %f. %s: %f.\n", Estado, DensidadeP, Estado2, DensidadeP2);
        if(DensidadeP < DensidadeP2){
            printf("Em densidade populacional, ganha quem tem menos habitantes por km².\n");
            printf("Resultado: A carta %s é a vencedora! \n", Estado);
        } else if(DensidadeP2 < DensidadeP ){
            printf("Em densidade populacional, ganha quem tem menos habitantes por km².\n");
            printf("Resultado: A carta %s é a vencedora! \n", Estado2);
        } else {
            printf("As duas cartas possuem a mesma densidade populacional. Empate!\n");
        }
        break;
     case 6:
        printf("\n %s vs %s\n", Estado, Estado2);
        printf("Atributo escolhido: PIb per capita\n");
        printf("%s: %f. %s: %f.\n", Estado, PibPerCapita, Estado2, PibPerCapita2);
        if(PibPerCapita > PibPerCapita2){
            printf("Resultado: A carta %s é a vencedora! \n", Estado);
        } else if(PibPerCapita2 > PibPerCapita ){
            printf("Resultado: A carta %s é a vencedora! \n", Estado2);
        } else {
            printf("As duas cartas possuem o mesmo PIB per Capita. Empate!\n");
        }
        break;
     case 7:
        printf("\n %s vs %s\n", Estado, Estado2);
        printf("Atributo escolhido: Super Poder\n");
        printf("%s: %f. %s: %f.\n", Estado, SuperPoder, Estado2, SuperPoder2);
        if(SuperPoder > SuperPoder2){
            printf("Resultado: A carta %s é a vencedora! \n", Estado);
        } else if(SuperPoder2 > SuperPoder ){
            printf("Resultado: A carta %s é a vencedora! \n", Estado2);
        } else {
            printf("As duas cartas possuem o mesmo super poder. Empate!\n");
        }
        break;
    default:
        printf("Opção inválida. Por favor, selecione um número entre 1 e 7.\n");
        break;
    }

    //switch's de cálculo da soma de atributos
    float Soma1 = 0, Soma2 = 0;
switch (Atributo1) {
    case 1: Soma1 += Populacao;      Soma2 += Populacao2; break;
    case 2: Soma1 += PontosTuristicos; Soma2 += PontosTuristicos2; break;
    case 3: Soma1 += Area;           Soma2 += Area2; break;
    case 4: Soma1 += Pib;            Soma2 += Pib2; break;
    case 5: Soma1 += DensidadeP;     Soma2 += DensidadeP2; break;
    case 6: Soma1 += PibPerCapita;   Soma2 += PibPerCapita2; break;
    case 7: Soma1 += SuperPoder;     Soma2 += SuperPoder2; break;
}

// Para o segundo atributo
switch (Atributo2) {
    case 1: Soma1 += Populacao;      Soma2 += Populacao2; break;
    case 2: Soma1 += PontosTuristicos; Soma2 += PontosTuristicos2; break;
    case 3: Soma1 += Area;           Soma2 += Area2; break;
    case 4: Soma1 += Pib;            Soma2 += Pib2; break;
    case 5: Soma1 += DensidadeP;     Soma2 += DensidadeP2; break;
    case 6: Soma1 += PibPerCapita;   Soma2 += PibPerCapita2; break;
    case 7: Soma1 += SuperPoder;     Soma2 += SuperPoder2; break;
}

// Exibir a soma dos atributos selecionados
printf("\n Terceira e ultima disputa de atributos:\n");
printf("Soma dos atributos selecionados:\n%s: %.2f\n%s: %.2f\n", Estado, Soma1, Estado2, Soma2);
if (Soma1 > Soma2) {
    printf("\nResultado: A carta %s tem a maior soma de atributos!\n", Estado);
} else if (Soma2 > Soma1) {
    printf("\nResultado: A carta %s tem a maior soma de atributos!\n", Estado2);
} else {
    printf("\nAs duas cartas possuem a mesma soma de atributos. Empate!\n");
}
    printf("\nObrigado por jogar Super Trunfo!\n");
    return 0;
}
