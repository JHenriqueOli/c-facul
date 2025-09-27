#include <stdio.h>

int main(){
    int escolha;
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

    printf("\n###Super Trunfo###\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turisticos\n");
    printf("5. Densidade Popualacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    switch (escolha){
    case 1:
        if (populacao1 > populacao2){
            printf("\nPopulação:\n");
            printf("##Carta1 Venceu!!## \nPopulação:%d\n", populacao1);
            printf("\nCarta2 Perdeu. \nPopulação:%d\n", populacao2);
        }else{
            printf("\nPopulação:\n");
            printf("##Carta2 Venceu!!## \nPopulação:%d\n", populacao2);
            printf("\nCarta1 Perdeu. \nPopulação:%d\n", populacao1);
        }
        break;
    case 2:
        if (area1 > area2){
            printf("\nÁrea:\n");
            printf("##Carta1 Venceu!!## \nÁrea:%.2f\n", area1);
            printf("\nCarta2 Perdeu. \nÁrea:%.2f\n", area2);
        }else{
            printf("\nÁrea:\n");
            printf("##Carta2 Venceu!!## \nÁrea:%.2f\n", area2);
            printf("\nCarta1 Perdeu. \nÁrea:%.2f\n", area1);
        }
        break;
    case 3:
        if (pib1 > pib2){
            printf("\nPIB:\n");
            printf("##Carta1 Venceu!!## \nPIB:%.2f\n", pib1);
            printf("\nCarta2 Perdeu. \nPIB:%.2f\n", pib2);
        }else{
            printf("\nPIB:\n");
            printf("##Carta2 Venceu!!## \nPIB:%.2f\n", pib2);
            printf("\nCarta1 Perdeu. \nPIB:%.2f\n", pib1);
        }
        break;
    case 4:
        if (Npontosturisticos1 > Npontosturisticos2){
            printf("\nNúmero de pontos turisticos:\n");
            printf("##Carta1 Venceu!!## \nNúmero de pontos turisticos:%d\n", Npontosturisticos1);
            printf("\nCarta2 Perdeu. \nNúmero de pontos turisticos:%d\n", Npontosturisticos2);
        }else{
            printf("\nNúmero de pontos turisticos:\n");
            printf("##Carta2 Venceu!!## \nNúmero de pontos turisticos:%d\n", Npontosturisticos2);
            printf("\nCarta1 Perdeu. \nNúmero de pontos turisticos:%d\n", Npontosturisticos1);
        }
        break;
    case 5:
        if (densidade_popula1 < densidade_popula2){
            printf("\nDensidade Populacional:\n");
            printf("##Carta1 Venceu!!## \nDensidade Popualacional:%.2f\n", densidade_popula1);
            printf("\nCarta2 Perdeu. \nDensidade Popualacional:%.2f\n", densidade_popula2);
        }else{
            printf("\nDensidade Populacional:\n");
            printf("##Carta2 Venceu!!## \nDensidade Popualacional:%.2f\n", densidade_popula2);
            printf("\nCarta1 Perdeu. \nDensidade Popualacional:%.2f\n", densidade_popula1);
        }
        break;
    case 6:
        if (pib_per_capita1 > pib_per_capita2){
            printf("\nPIB per capita:\n");
            printf("##Carta1 Venceu!!## \nPIB per capita:%.2f\n", pib_per_capita1);
            printf("\nCarta2 Perdeu. \nPIB per capita:%.2f\n", pib_per_capita2);
        }else{
            printf("\nPIB per capita:\n");
            printf("##Carta2 Venceu!!## \nPIB per capita:%f\n", pib_per_capita2);
            printf("\nCarta1 Perdeu. \nPIB per capita:%.2f\n", pib_per_capita1);
        }
        break;
    case 7:
        if (superpoder1 > superpoder2){
            printf("\nSuper Poder:\n");
            printf("##Carta1 Venceu!!## \nSuper Poder:%.2f\n", superpoder1);
            printf("\nCarta2 Perdeu. \nSuper Poder:%.2f\n", superpoder2);
        }else{
            printf("\nSuper Poder:\n");
            printf("##Carta2 Venceu!!## \nSuper Poder:%.2f\n", superpoder2);
            printf("\nCarta1 Perdeu. \nSuper Poder:%.2f\n", superpoder1);
        }
        break;
    default:
        printf("\nCódigo inválido!!\n");
        break;
    }

    return 0;








}