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
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;  
    float densidade1;
    float renda1;
    
  // Variáveis da Carta 2

    char estado2;
    char codigo2[6];
    char cidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2; 
    float densidade2;
    float renda2;


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
    scanf("%d", &populacao1);

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
    scanf("%d", &populacao2);

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


  // Área para exibição dos dados da cidade

  // Demonstração da Carta 1

    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Quantidade de pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", renda1);

  // Demonstração da Carta 2

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Quantidade de pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", renda2);

return 0;

} 
//