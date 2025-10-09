#include <stdio.h>
#include <string.h> 

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Variáveis da Carta 

    char estado1;
    char codigo1[6];
    char cidade1[40];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;  
    float densidade1;
    float renda1;
    float superPoder1;
    
  // Variáveis da Carta 2

    char estado2;
    char codigo2[6];
    char cidade2[40];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2; 
    float densidade2;
    float renda2;
    float superPoder2;


  // Área para entrada de dados

  // Inserindo dados da Carta 1

    printf("Carta 1\n");
    printf("Digite o estado entre A-H: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", &codigo1);
    getchar(); 

    printf("Digite o nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; 

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    densidade1 = populacao1 / area1;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);

    renda1 = pib1 * 1000000000 / populacao1;  
    printf("PIB per Capita: %.2f reais\n\n", renda1);

    superPoder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + renda1 + (1.0 / densidade1);

    // Inserindo dados da Carta 2

    printf("Carta 2\n");
    printf("Digite o estado entre A-H: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    getchar(); 

    printf("Digite o nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0'; 

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade2 = populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

    renda2 = pib2 * 1000000000 / populacao2; 
    printf("PIB per Capita: %.2f reais\n\n", renda2);

    superPoder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + renda2 + (1.0 / densidade2);


  // Área para exibição dos dados da cidade

  // Demonstração da Carta 1

    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Quantidade de pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", renda1);
    printf("Super Poder: %.2f\n\n", superPoder1);

  // Demonstração da Carta 2

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Quantidade de pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", renda2);
    printf("Super Poder: %.2f\n\n", superPoder2);


    
    // ### MENU INTERATIVO DE COMPARAÇÃO ###
    
    int opcao;
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua opção (1-7): ");
    scanf("%d", &opcao);

    printf("\nComparando cartas com base no atributo escolhido...\n\n");

    switch (opcao) {
        case 1:
            printf("Atributo escolhido: População\n\n");
            printf("%s: %lu habitantes\n\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n\n", cidade2);
            else
                printf("Resultado: Empate!\n\n");
            break;

        case 2:
            printf("Atributo escolhido: Área\n\n");
            printf("%s: %.2f km²\n\n", cidade1, area1);
            printf("%s: %.2f km²\n\n", cidade2, area2);
            if (area1 > area2)
                printf("Resultado: %s venceu!\n\n", cidade1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n\n", cidade2);
            else
                printf("Resultado: Empate!\n\n");
            break;

        case 3:
            printf("Atributo escolhido: PIB\n\n");
            printf("%s: %.2f bilhões de reais\n\n", cidade1, pib1);
            printf("%s: %.2f bilhões de reais\n\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n\n", cidade1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n\n", cidade2);
            else
                printf("Resultado: Empate!\n\n");
            break;

        case 4:
            printf("Atributo escolhido: Pontos Turísticos\n\n");
            printf("%s: %d pontos\n\n", cidade1, pontos_turisticos1);
            printf("%s: %d pontos\n\n", cidade2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2)
                printf("Resultado: %s venceu!\n\n", cidade1);
            else if (pontos_turisticos2 > pontos_turisticos1)
                printf("Resultado: %s venceu!\n\n", cidade2);
            else
                printf("Resultado: Empate!\n\n");
            break;

        case 5:
            printf("Atributo escolhido: Densidade Demográfica (menor vence)\n\n");
            printf("%s: %.2f hab/km²\n\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n\n", cidade2, densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: %s venceu!\n\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s venceu!\n\n", cidade2);
            else
                printf("Resultado: Empate!\n\n");
            break;

        case 6:
            printf("Atributo escolhido: PIB per Capita\n\n");
            printf("%s: %.2f reais\n\n", cidade1, renda1);
            printf("%s: %.2f reais\n\n", cidade2, renda2);
            if (renda1 > renda2)
                printf("Resultado: %s venceu!\n\n", cidade1);
            else if (renda2 > renda1)
                printf("Resultado: %s venceu!\n\n", cidade2);
            else
                printf("Resultado: Empate!\n\n");
            break;

        case 7:
            printf("Atributo escolhido: Super Poder\n\n");
            printf("%s: %.2f pontos\n\n", cidade1, superPoder1);
            printf("%s: %.2f pontos\n\n", cidade2, superPoder2);
            if (superPoder1 > superPoder2)
                printf("Resultado: %s venceu!\n\n", cidade1);
            else if (superPoder2 > superPoder1)
                printf("Resultado: %s venceu!\n\n", cidade2);
            else
                printf("Resultado: Empate!\n\n");
            break;

        default:
            printf("Opção inválida! Por favor, escolha um número entre 1 e 7.\n\n");
            break;
    }



return 0;

} 

