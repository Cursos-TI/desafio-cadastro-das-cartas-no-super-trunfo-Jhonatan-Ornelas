#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main()

{

    char nome[] = "mg1";
    int population = 1;
    float area = 1;
    float pib = 1;
    int pontosTuristicos = 1;
    
    printf("digite a população da cidade mg1: ");
    scanf ("%d", &population);
    
    printf("digite a area da cidade mg1: ");
    scanf ("%f", &area);
    
    printf("digite a pib da cidade mg1: ");
    scanf ("%f", &pib);
    
    printf("digite a pontos turísticos da cidade mg1: ");
    scanf ("%d", &pontosTuristicos);
    
    char nome2[] = "mg2";
    int population2 = 1;
    float area2 = 1;
    float pib2 = 1;
    int pontosTuristicos2 = 1;
    
    printf("digite a população da cidade mg2: ");
    scanf ("%d", &population2);
    
    printf("digite a area da cidade mg2: ");
    scanf ("%f", &area2);
    
    printf("digite a pib da cidade mg2: ");
    scanf ("%f", &pib2);
    
    printf("digite a pontos turísticos da cidade mg2: ");
    scanf ("%d", &pontosTuristicos2);
    
    printf("\n mg1");
    printf("\n população :%d ", population);
    printf("\n área : %.3f ", area);
    printf("\n pib : %.1f ", pib);
    printf("\n pontos turísticos: %d \n", pontosTuristicos);
    
    printf("\n mg2");
    printf("\n população: %d ", population2);
    printf("\n area: %.3f ", area2);
    printf("\n pib: %.1f ", pib2);
    printf("\n pontos turísticos: %d \n", pontosTuristicos2);
    
    return 0;
}
