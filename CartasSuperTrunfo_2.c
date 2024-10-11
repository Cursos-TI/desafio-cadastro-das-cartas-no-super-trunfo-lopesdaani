#include <stdio.h>

int main(){
    /*
    Divisão (/)
    */
    int populacao, divisao;
    float area, PIB;

    printf("Desafio Super Trunfo - Países!\n");

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    //operacao divisao
   divisao = populacao / area;
    printf("A Densidade Populacional é: %d\n", divisao);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    //operacao divisao
    divisao = PIB / populacao;
    printf("A PIB per capita é: %d\n", divisao);

    return 0;

}