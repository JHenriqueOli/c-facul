#include <stdio.h>

int main(){
    int populacao1;
    int Npontosturisticos1;
    float area1;
    float pib1;
    char nome1[60];
    char codigo1[60];
    char estado1[60];
    float densidade_popula1;
    float pib_per_capita1;
    float superpoder1;

    int populacao2;
    int Npontosturisticos2;
    float area2;
    float pib2;
    char nome2[60];
    char codigo2[60];
    char estado2[60];
    float densidade_popula2;
    float pib_per_capita2;
    float superpoder2;

    // Está pedindo as informações da carta1
    printf("Carta 1:\n");
    printf("Digite a letra do estado: \n");
    scanf("%s", &estado1);
    
    printf("Digite o código de uma letra e dois números: \n");
    scanf("%s", &codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nome1);

    printf("Qual é o número populacional: \n");
    scanf("%d", &populacao1);

    printf("Qual a Área em km²: \n");
    scanf("%f", &area1);

    printf("Qual o PIB: \n");
    scanf("%f", &pib1);

    printf("Quantos pontos Turísticos tem: \n");
    scanf("%d", &Npontosturisticos1);

    //Está pedindo as informações da carta2
    printf("Carta:2\n");
    printf("Digite a letra do estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código de uma letra e dois números: \n");
    scanf("%s", &codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nome2);

    printf("Qual é o número populacional: \n");
    scanf("%d", &populacao2);

    printf("Qual a Área em km²: \n");
    scanf("%f", &area2);

    printf("Qual o PIB: \n");
    scanf("%f", &pib2);

    printf("Quantos pontos Turísticos tem: \n");
    scanf("%d", &Npontosturisticos2);

    //Calculos de dencidade populacional, pib per capita e super poder
    densidade_popula1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pib_per_capita1 + (1 / densidade_popula1);

    densidade_popula2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pib_per_capita2 + (1 / densidade_popula2);

    //Mostrando as informações das cartas
    printf("\nCarta:1\n");
    printf("Estado: %s\n", estado1);
    
    printf("Código: %s\n", codigo1);

    printf("Nome da Cidade: %s\nPopulação: %d\n", nome1, populacao1);

    printf("Área: %.2fkm²\n", area1);
    
    printf("PIB: %.2f\nNúmero de Pontos Turísticos: %d\n", pib1, Npontosturisticos1);

    printf("Densidade Populacional: %.2fhab/km²\n", densidade_popula1);

    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\nCarta:2\n");
    printf("Estado: %s\n", estado2);
        
    printf("Código: %s\n",codigo2);

    printf("Nome da Cidade: %s\nPopulação: %d\n", nome2, populacao2);

    printf("Área: %.2fkm²\n", area2);

    printf("PIB: %.2f\nNúmero de Pontos Turísticos: %d\n", pib2, Npontosturisticos2);
    
    printf("Densidade Populacional: %.2fhab/km²\n", densidade_popula2);

    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    printf("Super Poder: %.2f\n", superpoder2);

    //As comparações das cartas
    printf("\nComparação de Cartas:\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Túristicos: %d\n", Npontosturisticos1 > Npontosturisticos2);
    printf("Densidade Populacional: %d\n", densidade_popula1 < densidade_popula2);
    printf("PIB per Capita: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: %d\n", superpoder1 > superpoder2);

    //Comparação com resposta
    if(populacao1 > populacao2){
        printf("\nCarta1 %s tem a população é maior\n!", nome1);
    }else{
        printf("\nCarta2 %s tem a população maior!\n", nome2);
    }


    return 0;








}