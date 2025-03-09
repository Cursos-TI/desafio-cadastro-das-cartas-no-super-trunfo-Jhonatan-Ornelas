#include<stdio.h>

int main()

{
    // cadastro de cartas 
    //  cadastro da primeira carta 
    char cardCode[50] = "1";
    char estado[50] = "1";
    char nome[50] = "mg1";
    long int population = 1;
    long int area = 1;
    long int pib = 1;
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
    scanf ("%d", &population);
    
    printf("digite a area da cidade1'sem pontuação': ");
    scanf ("%d", &area);
    
    printf("digite a pib da cidade1'sem pontuação': ");
    scanf ("%d", &pib);
    
    printf("digite a pontos turísticos da cidade1: ");
    scanf ("%d", &pontosTuristicos);
   
    // cadastro da segunda carta 
   
    char cardCode2[50] = "2";
    char estado2[50] = "2";
    char nome2[50] = "mg2";
    long int population2 = 1;
    long int area2 = 1;
    long int pib2 = 1;
    int pontosTuristicos2 = 1;
    
    printf("digite o código da carta1: ");
    scanf ("%s",  cardCode2);
    
    printf("digite o estado da carta1: ");
    scanf (" %[^\n]", estado2);
    
    getchar();
    printf("digite o nome da carta1: ");
    scanf (" %[^\n]", nome2);
    
    getchar();
    printf("digite a população da cidade1'sem pontuação': ");
    scanf ("%d", &population2);
    
    printf("digite a area da cidade1'sem pontuação': ");
    scanf ("%d", &area2);
    
    printf("digite a pib da cidade1'sem pontuação': ");
    scanf ("%d", &pib2);
    
    printf("digite a pontos turísticos da cidade1: ");
    scanf ("%d", &pontosTuristicos2);
    
    
    // exibição da primeira e segunda carta
    printf("\n código: %s", cardCode);
    printf("\n estado: %s", estado);
    printf("\n nome: %s", nome);
    printf("\n população: %d ", population);
    printf("\n área: %d", area);
    printf("\n pib: %d ", pib);
    printf("\n pontos turísticos: %d \n", pontosTuristicos);
    
    printf("\n código: %s", cardCode2);
    printf("\n estado: %s", estado2);
    printf("\n nome: %s", nome2);
    printf("\n população: %d ", population2);
    printf("\n area: %d ", area2);
    printf("\n pib: %d ", pib2);
    printf("\n pontos turísticos: %d \n", pontosTuristicos2);
    
    return 0;
}
