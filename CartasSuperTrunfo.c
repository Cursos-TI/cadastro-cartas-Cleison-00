#include <stdio.h>

  // Desafio Super Trunfo
  // Cadastro das cartas

int main() {
    // Declaração das variáveis
    printf("\nCadastro da primeira carta\n");
    
    char estado;
    char codigo[40];
    char cidade[45];
    int populacao;
    float pib;
    float area;
    int pontoturistico;

    char estado2;
    char codigo2[50];
    char cidade2[48];
    int populacao2;
    float pib2;
    float area2;
    int pontoturistico2;

    // Declaração dos dados
    printf("Digite o estado (A-H): \n");
    scanf(" %c", &estado);
    
    printf("Digite o código (Ex:A01): \n");
    scanf("%s", codigo);

    printf("Digite a cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite a Área: \n");
    scanf("%f", &area);

    printf("Digite o numero de pontos turísticos: \n");
    scanf("%d", &pontoturistico);
    
    
    printf("\nCadastro da segunda carta\n");
    
    printf("Digite o estado (A-H): \n");
    scanf(" %c", &estado2);
    
    printf("Digite o código (Ex:B02): \n");
    scanf("%s", codigo2);

    printf("Digite a cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite o pib: \n");
    scanf("%f", &pib2);

    printf("Digite a Área: \n");
    scanf("%f", &area2);

    printf("Digite o numero de pontos turísticos: \n");
    scanf("%d", &pontoturistico2);

  
    // Exibição dos dados 
    printf("\n-- Carta 1 --\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Pib: %f bilhões\n", pib);
    printf("Area: %f km²\n", area);
    printf("Numero de pontos turísticos: %d\n", pontoturistico);

    printf("\n-- Carta 2 --\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Pib: %f bilhões\n", pib2);
    printf("Área: %f km²\n", area2);
    printf("Numero de pontos turísticos: %d\n", pontoturistico2);
    
return 0;
} 
