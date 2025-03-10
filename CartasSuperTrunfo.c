#include<stdio.h>

int main()

{
    // cadastro de cartas 
    //  cadastro da primeira carta 
    char cardCode[50] = "1";
    char estado[50] = "1";
    char nome[50] = "mg1";
    long double  population = 1;
    long double area = 1;
    long double pib = 1;
    int pontosTuristicos = 1;
   
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
    
    
    
    
   
    // cadastro da segunda carta 
   
    char cardCode2[50] = "2";
    char estado2[50] = "2";
    char nome2[50] = "mg2";
    long double population2 = 1;
    long double area2 = 1;
    long double pib2 = 1;
    int pontosTuristicos2 = 1;
    
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
    
    
    // exibição da primeira e segunda carta
    printf("\n código: %s", cardCode);
    printf("\n estado: %s", estado);
    printf("\n nome: %s", nome);
    printf("\n população: %Lf ", population);
    printf("\n área: %Lf", area);
    printf("\n pib: %Lf", pib);
    printf("\n pontos turísticos: %d \n", pontosTuristicos);
    printf("O PIB per Capita é: %f\n", pibPerCapita);
    printf("A densidade populacional é: %f\n", densidadeP);
    
    printf("\n código: %s", cardCode2);
    printf("\n estado: %s", estado2);
    printf("\n nome: %s", nome2);
    printf("\n população: %Lf", population2);
    printf("\n area: %Lf ", area2);
    printf("\n pib: %Lf", pib2);
    printf("\n pontos turísticos: %d \n", pontosTuristicos2);
    printf("O PIB per Capita é: %f\n", pibPerCapita2);
    printf("A densidade populacional é: %f\n", densidadeP2);
    
    
    return 0;
}
