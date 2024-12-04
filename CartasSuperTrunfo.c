#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char nome_da_cidade[50];
    char codigo_da_cidade[50];
    float populacao, area, PIB;
    int numero_de_pontos_turisticos;    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

   
    printf("Insira nome da cidade: \n");
    //usei fgets porque existem cidades com nomes compostos
    fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin);

    printf("Insira o código da cidade: \n");
    scanf(" %s",  codigo_da_cidade);

    printf("Insira a população da cidade: \n");
    scanf("%f", &populacao);

    printf("Insira a area da cidade: \n");
    scanf("%f", &area);

    printf("Insira PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Insira o número de pontos turisticos da cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n\nCódigo da cidade: %s\nNome da cidade: %s\nPopulação: %f\nArea da cidade: %f\nPIB: %f\nNúmero de pontos turísticos: %d",codigo_da_cidade,nome_da_cidade, populacao,area,PIB,numero_de_pontos_turisticos);
    
    return 0;
}
