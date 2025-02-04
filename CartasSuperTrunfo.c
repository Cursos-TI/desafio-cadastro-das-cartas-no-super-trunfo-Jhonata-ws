#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado[30];
    char codigo[10];
    int populacao;
    char cidade[30];
    float area;
    float pib;
    int pontos;

    printf("Insira o Estado: \n");
    scanf("%s", &estado);

    printf("Insira o Codigo: \n");
    scanf(" %s", &codigo);

    printf("Insira a populacao: \n");
    scanf("%d", &populacao);

    printf("Insira o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Insira a área desta cidade: \n");
    scanf(" %f", &area);

    printf("Insira o PIB: \n");
    scanf(" %f", &pib);

    printf("Insira a quantidade de pontos turisticos: \n");
    scanf(" %d", &pontos);

printf("Carta Super Trunfo\n");
printf("Estado: %s\n", estado);
printf("Código da carta: %s\n", codigo);
printf("Nome da cidade: %s\n", cidade);
printf("População: %d\n", populacao);
printf("Área em km²: %f\n", area);
printf("PIB: %f\n", pib);
printf("Número de pontos turísticos: %d\n", pontos);
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
