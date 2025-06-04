#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado;
    char codigo[4];
    char nome_cidade[50]; // Tamanho suficiente para a maioria dos nomes de cidades
    int populacao;
    float area;
    float pib;
    int num_pontos_turisticos;
} Carta;

int main() {
    // Declaração das variáveis para as duas cartas
    Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A a H): ");
    scanf(" %c", &carta1.estado);
     // O espaço antes de %c para consumir qualquer caractere de nova linha

    printf("Código da Carta (Ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %s", carta1.nome_cidade); 
    // O espaço antes de %s para consumir qualquer caractere de nova linha

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.num_pontos_turisticos);

    // Cadastro da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A a H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da Carta (Ex: A01): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %s", carta2.nome_cidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.num_pontos_turisticos);

    // Exibição dos dados da primeira carta
    printf("\n=== Informações da Carta 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.num_pontos_turisticos);

    // Exibição dos dados da segunda carta
    printf("\n=== Informações da Carta 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.num_pontos_turisticos);

    return 0;
}
