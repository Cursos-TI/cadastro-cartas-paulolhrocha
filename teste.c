#include <stdio.h>
#include <string.h> 

int main() {

    char estado1;
    char codigo1[6];
    char cidade1[40];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;  
    float densidade1;
    float renda1;


    printf("Carta 1\n");
    printf("Digite o estado entre A-H: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
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
    printf("PIB per Capita: %.2f reais\n", renda1);


    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d milhões\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Quantidade de pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", renda1);


    return 0;

}