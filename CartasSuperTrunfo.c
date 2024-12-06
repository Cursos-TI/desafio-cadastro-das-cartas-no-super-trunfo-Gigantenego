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
    float populacao, area, PIB,densidade_populacional,PIB_per_capita;
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

    densidade_populacional = (double) populacao/area;
    PIB_per_capita = (double) PIB/populacao;


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n\nCódigo da cidade: %s\n",codigo_da_cidade);
    printf("Nome da cidade: %s\n",nome_da_cidade);
    printf("População: %f\n",populacao);
    printf("Área da cidade: %f\n",area);
    printf("PIB: %f\n",PIB);
    printf("Número de pontos turísticos: %d\n",numero_de_pontos_turisticos);
    printf("Densidade populacional: %f\n",densidade_populacional);
    printf("PIB per capita: %f",PIB_per_capita);
    
    return 0;
}
