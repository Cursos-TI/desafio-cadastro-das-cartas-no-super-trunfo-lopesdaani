#include <stdio.h>

int main(){
    int populacao, pontos;
    float area, PIB;
    char estado[20];
    char cidade[20];
    char codigo[20];

    printf("Desafio Super Trunfo - Países!\n");

    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos);

    printf("Estado: %s\n", estado);
    printf("Nome da cidade: %s\n", cidade);
    printf("Código da carta: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Área em km²: %f\n", area);
    printf("PIB: %f\n", PIB);
    printf("Número de pontos turísticos: %d\n", pontos);

    return 0;
}