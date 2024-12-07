#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char nome_da_cidade[50],nome_da_cidade2[50];
    char codigo_da_cidade[50],codigo_da_cidade2[50];

    double populacao,populacao2, area,area2,densidade_populacional,densidade_populacional2;
    double melhor_densidade,PIB_per_capita,PIB,PIB2,PIB_per_capita2;
    unsigned long int pontuacao_cidade1,pontuacao_cidade2;
    unsigned int numero_de_pontos_turisticos,numero_de_pontos_turisticos2;    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("***BEM VINDO AO JOGOS SUPERTRUNFO***");
    printf("\n\n***INSERINDO DADOS DA PRIMEIRA CIDADE***\n\n");
   
    printf("Insira nome da cidade: \n");
    //usei fgets porque existem cidades com nomes compostos
        fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin);

    printf("Insira o código da cidade: \n");
        scanf(" %s",  codigo_da_cidade);

    printf("Insira a população da cidade: \n");
        scanf("%Lf", &populacao);

    printf("Insira a area da cidade: \n");
        scanf("%f", &area);

    printf("Insira PIB da cidade: \n");
        scanf("%f", &PIB);

    printf("Insira o número de pontos turisticos da cidade: \n");
        scanf("%u", &numero_de_pontos_turisticos);

    //usei getchar pra ler a linha vazia e nao ignorar mais o proximo printf
    getchar();

    printf("\n\n***INSERINDO DADOS DA SEGUNDA CIDADE***\n\n");

    printf("Insira nome da 2° cidade: \n");
        fgets(nome_da_cidade2, sizeof(nome_da_cidade2), stdin);

    printf("Insira o código da 2° cidade: \n");
        scanf("%s",  codigo_da_cidade2);
    
       printf("Insira a população da 2° cidade: \n");
        scanf("%f", &populacao2);

    printf("Insira a area da 2° cidade: \n");
        scanf("%f", &area2);

    printf("Insira PIB da 2° cidade: \n");
        scanf("%f", &PIB2);

    printf("Insira o número de pontos turisticos da 2° cidade: \n");
        scanf("%u", &numero_de_pontos_turisticos2);

    densidade_populacional = populacao/area;
    PIB_per_capita = PIB/populacao;

    densidade_populacional2 = populacao2/area2;
    PIB_per_capita2 =  PIB2/populacao2;

    pontuacao_cidade1 =  populacao+area+PIB+PIB_per_capita;
    pontuacao_cidade2 =  populacao2+area2+PIB2+PIB_per_capita2;
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n\n***RESUMO DA PRIMEIRA CIDADE***\n\n");

    printf("Nome da 1° cidade: %s",nome_da_cidade);
    printf("\n\nCódigo de %s: %s\n",nome_da_cidade, codigo_da_cidade);
    printf("População de %s: %f\n",nome_da_cidade,populacao);
    printf("Área de %s: %f\n",nome_da_cidade,area);
    printf("PIB de %s: %f\n",nome_da_cidade, PIB);
    printf("Número de pontos turísticos de %s: %u\n",nome_da_cidade,numero_de_pontos_turisticos);
    printf("Densidade populacional de %s: %f\n",nome_da_cidade,densidade_populacional);
    printf("PIB per capita de %s: %f\n",nome_da_cidade,PIB_per_capita);
    printf("Super-poder de %s: %lu",nome_da_cidade,pontuacao_cidade1);

    printf("\n\n***RESUMO DA SEGUNDA CIDADE***\n\n"); 

    printf("Nome da 2° cidade: %s",nome_da_cidade2);
    printf("\n\nCódigo de %s: %s\n",nome_da_cidade2, codigo_da_cidade2);
    printf("População de %s: %f\n",nome_da_cidade2,populacao2);
    printf("Área de %s: %f\n",nome_da_cidade2,area2);
    printf("PIB de %s: %f\n",nome_da_cidade2, PIB2);
    printf("Número de pontos turísticos de %s: %u\n",nome_da_cidade2,numero_de_pontos_turisticos2);
    printf("Densidade populacional de %s: %f\n",nome_da_cidade2,densidade_populacional2);
    printf("PIB per capita de %s: %f\n",nome_da_cidade2,PIB_per_capita2);
    printf("Super-poder de %s: %lu",nome_da_cidade2,pontuacao_cidade2);


    printf("\n\n***QUEM É A MELHOR CIDADE EM CADA CATEGORIA***\n\n");

    populacao>populacao2?
        printf("A maior população é da cidade: %s",nome_da_cidade):
        printf("A maior população é da cidade: %s",nome_da_cidade2);

    area>area2?
        printf("A maior área é da cidade: %s",nome_da_cidade):
        printf("A maior área é da cidade: %s",nome_da_cidade2);

    PIB>PIB2?
        printf("O maior PIB é da cidade: %s",nome_da_cidade):
        printf("O maior PIB é da cidade: %s",nome_da_cidade2);

    numero_de_pontos_turisticos>numero_de_pontos_turisticos2?

        printf("O maior numero de pontos turisticos é da cidade: %s",nome_da_cidade):
        printf("O maior numero de pontos turisticos é da cidade: %s",nome_da_cidade2);


    densidade_populacional<densidade_populacional2?
        printf("A maior densidade populacional é da cidade: %s",nome_da_cidade):
        printf("A maior densidade populacional é da cidade: %s",nome_da_cidade2);
    
    pontuacao_cidade1>pontuacao_cidade2?
        printf("O maior super-poder é de: %s",nome_da_cidade):
        printf("O maior super-poder é de: %s",nome_da_cidade2);

return 0;

}
