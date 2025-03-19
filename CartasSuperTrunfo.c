#include <stdio.h>

    int main(){    //definindo as variaveis
    
        char estado1[50], codigo1[50], cidade1[50], estado2[50], codigo2[50], cidade2[50];
        int turisticos1, turisticos2;
        unsigned long int populacao1, populacao2;
        float area1, pib1, area2, pib2; 

    
        printf("*** Carta 01: *** \n"); //entradas e saidas de dados da carta 01

        printf("Digite o Estado: \n");
        scanf("%s", &estado1);

        printf("Digite o Código da Carta: \n");
        scanf("%s", &codigo1);

        printf("Digite o Nome da Cidade: \n");
        scanf("%s", &cidade1);

        printf("Digite a População da Cidade: \n");
        scanf("%lu", &populacao1);

        printf("Digite a Área da Cidade: \n");
        scanf("%f", &area1);

        printf("Digite o PIB da Cidade: \n");
        scanf("%f", &pib1);

        printf("Digite a Quantidade de Pontos Turísticos da Cidade: \n");
        scanf("%d", &turisticos1);



        printf("*** Carta 02: *** \n"); //entradas e saidas de dados da carta 02

        printf("Digite o Estado: \n");
        scanf("%s", &estado2);

        printf("Digite o Código da Carta: \n");
        scanf("%s", &codigo2);

        printf("Digite o Nome da Cidade: \n");
        scanf("%s", &cidade2);

        printf("Digite a População da Cidade: \n");
        scanf("%lu", &populacao2);

        printf("Digite a Área da Cidade: \n");
        scanf("%f", &area2);

        printf("Digite o PIB da Cidade: \n");
        scanf("%f", &pib2);

        printf("Digite a Quantidade de Pontos Turísticos da Cidade: \n");
        scanf("%d", &turisticos2);

        
        float densidadepopulacional1 = (float) populacao1 / area1;
        float pibpercapta1 = pib1 / (float) populacao1;
        float superpoder1 = populacao1 + area1 + pib1 + turisticos1 + pibpercapta1 - densidadepopulacional1;
        printf("*** Carta 01 *** \n"); // saidas de dados após entradas de dados
        printf("Estado: %s \n", estado1);
        printf("Código: %s \n", codigo1);
        printf("Nome da Cidade: %s \n", cidade1);
        printf("População: %lu \n", populacao1);
        printf("Área: %f \n", area1);
        printf("PIB: %f \n", pib1);
        printf("Número de Pontos Turísticos: %d \n", turisticos1);
        printf("Densidade Populacional: %f \n", densidadepopulacional1);
        printf("PIB Per Capta: %f \n", pibpercapta1);
        printf("Super PODER: %f \n \n \n", superpoder1);
        

        float densidadepopulacional2 = (float) populacao2 / area2;
        float pibpercapta2 = pib2 / (float) populacao2;
        float superpoder2 = populacao2 + area2 + pib2 + turisticos2 + pibpercapta2 - densidadepopulacional2;
        printf("*** Carta 02 *** \n");
        printf("Estado: %s \n", estado2);
        printf("Código: %s \n", codigo2);
        printf("Nome da Cidade: %s \n", cidade2);
        printf("População: %d \n", populacao2);
        printf("Área: %f \n", area2);
        printf("PIB: %f \n", pib2);
        printf("Número de Pontos Turísticos: %d \n", turisticos2);
        printf("Densidade Populacional: %f \n", densidadepopulacional2);
        printf("PIB Per Capta: %f \n", pibpercapta2);
        printf("Super PODER: %f \n \n \n", superpoder2);

        // comparando resultados
        int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;

        printf("*** Comparação de Cartas: *** \n");
        printf("População: %d\n", resultado1 = (float)populacao1 > (float)populacao2); // conversão explícita
        printf("Área: %d\n", resultado2 = area1 > area2);
        printf("PIB: %d\n", resultado3 = pib1 > pib2);
        printf("Pontos Turísticos: %d\n", resultado4 = turisticos1 > turisticos2);
        printf("Densidade Populacional: %d\n", resultado5 = densidadepopulacional1 < densidadepopulacional2);
        printf("PIB Per Capta: %d\n", resultado6 = pibpercapta1 > pibpercapta2);
        printf("Super Poder: %d\n", resultado7 = superpoder1 > superpoder2);
        

        return 0;


    }