#include<stdio.h>

int main()

{ 
    // cadastro de cartas 
    //  cadastro da primeira carta 
    char cardCode[50] = "1";
    char estado[50] = "1";
    char nome[50] = "mg1";
    long double  population = 2315560;
    long double area = 331.354;
    long double pib = 105829675;
    int pontosTuristicos = 300;
    
    printf("digite o código da carta1: ");
    scanf (" %s", cardCode);
    
    printf("digite o estado da carta:");
    scanf (" %[^\n]", estado);
    
    getchar();
    printf("digite o nome da carta1: ");
    scanf (" %[^\n]", nome);
    
    getchar();
    printf("digite a população da cidade1'sem pontuação': ");
    scanf ("%Lf", &population);
    
    printf("digite a area da cidade1'com pontuação em km²': ");
    scanf ("%Lf", &area);
    
    printf("digite a pib da cidade1'sem pontuação': ");
    scanf ("%Lf", &pib);
    
    printf("digite a pontos turísticos da cidade1: ");
    scanf ("%d", &pontosTuristicos);
    
    
    //long double area = 1521.11 ;
    //long double pib = 699280000000 ; 
    //long double population = 12325000 ;
    // PIB per Capita e densidade populacional 
    float pibPerCapita = (float) pib / population ;
    float densidadeP = (float) population / area ;
    
    //printf("\n %f "  , pibPerCapita);
    //  printf("\n %f "  , densidadeP);
    
    
   
    // cadastro da segunda carta 
    
    char cardCode2[50] = "2";
    char estado2[50] = "2";
    char nome2[50] = "mg2";
    long double population2 = 11451999;
    long double area2 = 1521.202;
    long double pib2 = 828980607.731;
    int pontosTuristicos2 = 500;
    
    printf("digite o código da carta2: ");
    scanf ("%s",  cardCode2);
    
    printf("digite o estado da carta2: ");
    scanf (" %[^\n]", estado2);
    
    getchar();
    printf("digite o nome da carta2: ");
    scanf (" %[^\n]", nome2);
    
    getchar();
    printf("digite a população da cidade'sem pontuação': ");
    scanf ("%Lf", &population2);
    
    printf("digite a area da cidade'com pontuacão em km²': ");
    scanf ("%Lf", &area2);
    
    printf("digite a pib da cidade'sem pontuação': ");
    scanf ("%Lf", &pib2);
    
    printf("digite a pontos turísticos da cidade: ");
    scanf ("%d", &pontosTuristicos2);
    
    // PIB per Capita e densidade populacional 
    float pibPerCapita2 = (float) pib2 / population2 ;
    float densidadeP2 = (float) population2 / area2 ;
    
    
    // cálculo do super 1 
    
    long double superPopulation = population / 100000;
    long double superArea = area / 50 ;
    long double superPib = pib / 6000000;
    long double superPontosTuristicos = pontosTuristicos / 10;
    long double superPibPerCapita = pibPerCapita / 1;
    long double superDensidadePopulacional = 1 / densidadeP ;
    superDensidadePopulacional = superDensidadePopulacional * 600000;
    
    long double superPower = superPopulation + superArea + superPib + superPontosTuristicos + superPibPerCapita + superDensidadePopulacional ;
    
    
    // cálculo do super 2
    long double superPopulation2 = population2 / 100000;
    long double superArea2 = area2 / 50 ;
    long double superPib2 = pib2 / 6000000;
    long double superPontosTuristicos2 = pontosTuristicos2 / 10;
    long double superPibPerCapita2 = pibPerCapita2 / 1;
    long double superDensidadePopulacional2 = 1 / densidadeP2 ;
    superDensidadePopulacional2 = superDensidadePopulacional2 * 600000;
    
    long double superPower2 = superPopulation2 + superArea2 + superPib2 + superPontosTuristicos2 + superPibPerCapita2 + superDensidadePopulacional2 ;
    
    //comparação entre as cartas 
    long double vencedorPopulatoin = superPopulation > superPopulation2;
    long double vencedorArea = superArea > superArea2;
    long double vencedorPib = superPib > superPib2;
    long double vencedorPontosTuristicos = superPontosTuristicos > superPontosTuristicos2;
    long double vencedorPibPerCapita = superPibPerCapita > superPibPerCapita2;
    long double vencedorDencidadePopulacional = superDensidadePopulacional > superDensidadePopulacional2;
    long double vencedorSuperpPower = superPower > superPower2 ;
    /*
    printf("\n %Lf", vencedorPopulatoin);
    printf("\n %Lf", vencedorArea);
    printf("\n %Lf", vencedorPib);
    printf("\n %Lf", vencedorPontosTuristicos);
    printf("\n %Lf", vencedorPibPerCapita);
    printf("\n %Lf", vencedorDencidadePopulacional);
    printf("\n %Lf", vencedorSuperpPower);
    printf("\n %Lf", vencedorPopulatoin);
    */
    
    
    
    // comparação entre as cartas
    char carta1Maior[50]= "a carta 1 venceu";
    char carta2Maior[50] = "a carta 2 venceu";
    char populationResults[50] = "algum valor";
    char areaResultado[50] = "algum valor";
    char pibResults[50] = "algum valor";
    char pontosTuristicosResults[50] = "algum valor";
    char pibPerCapitaResults[50] = "algum valor";
    char densidadePopulacionalResults[50] = "algum valor";
    char superPowerResults[50] = "algum valor";
    
    
    // exibição da primeira e segunda carta
    printf("\n código: %s", cardCode);
    printf("\n estado: %s", estado);
    printf("\n nome: %s", nome);
    printf("\n população: %.0Lf ", population);
    printf("\n área: %.2Lf", area);
    printf("\n pib: %.2Lf", pib);
    printf("\n pontos turísticos: %d \n", pontosTuristicos);
    printf(" O PIB per Capita é: %.2f\n", pibPerCapita);
    printf(" A densidade populacional é: %.0f\n", densidadeP);
    printf(" O super Power é: %.0Lf\n", superPower);
    
    printf("\n código: %s", cardCode2);
    printf("\n estado: %s", estado2);
    printf("\n nome: %s", nome2);
    printf("\n população: %.0Lf", population2);
    printf("\n area: %.2Lf ", area2);
    printf("\n pib: %.2Lf", pib2);
    printf("\n pontos turísticos: %d ", pontosTuristicos2);
    printf("\n O PIB per Capita é: %.2f", pibPerCapita2);
    printf("\n A densidade populacional é: %.0f", densidadeP2);
    printf("\n O super Power é: %.0Lf", superPower2);
    
    printf("\n\n\n\n ****     agora comparando as cartas     ****\n");
    
    strcpy(populationResults, (vencedorPopulatoin > 0) ? carta1Maior : carta2Maior);
    printf("\n População: %s", populationResults);
    
    strcpy(areaResultado, (vencedorArea > 0) ? carta1Maior : carta2Maior);
    printf("\n Área: %s", areaResultado);
    
    strcpy(pibResults, (vencedorPib > 0) ? carta1Maior : carta2Maior);
    printf("\n PIB: %s", pibResults);
    
    strcpy(pontosTuristicosResults, (vencedorPontosTuristicos > 0) ? carta1Maior : carta2Maior);
    printf("\n Pontos Turísticos: %s", pontosTuristicosResults);
    
    strcpy(pibPerCapitaResults, (vencedorPibPerCapita > 0) ? carta1Maior : carta2Maior);
    printf("\n PIB per Capita: %s", pibPerCapitaResults);
    
    strcpy(densidadePopulacionalResults, (vencedorDencidadePopulacional > 0) ? carta1Maior : carta2Maior);
    printf("\n Densidade populacional: %s", densidadePopulacionalResults);
    
    strcpy(superPowerResults, (vencedorSuperpPower > 0) ? carta1Maior : carta2Maior);
    printf("\n Super poder: %s", superPowerResults);
    
    return 0;
}
    
