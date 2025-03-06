#include <stdio.h>

int main(){    //definindo as variaveis
char estado1[50], codigo1[50], cidade1[50], estado2[50], codigo2[50], cidade2[50];
int populacao1, turisticos1, populacao2, turisticos2;
float area1, pib1, area2, pib2;  


    printf("Carta 01: \n"); //entradas e saidas de dados da carta 01

    printf("Digite o Estado: \n");
    scanf("%s", &estado1);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a População da Cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a Quantidade de Pontos Turísticos da Cidade: \n");
    scanf("%d", &turisticos1);

    printf("Carta 02: \n"); //entradas e saidas de dados da carta 02

    printf("Digite o Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a População da Cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a Quantidade de Pontos Turísticos da Cidade: \n");
    scanf("%d", &turisticos2);


    printf("-Carta 01 \n"); // saidas de dados após entradas de dados
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n \n \n", turisticos1);
    
    printf("-Carta 02 \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de Pontos Turísticos: %d", turisticos2);


    return 0;


}