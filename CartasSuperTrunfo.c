#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
     //variaveis para armazenar os dados inseridos pelo usuario.


    // variaveis dos atribudos das cartas.
    char estado[10], codigoDaCarta[4], nomeCidadde[20];
    int populacao, pontosTuristicos;
    float area, pib;
    
    // mensagem informando sobre as informações da primeira carta
    printf("Digite as informações da PRIMEIRA carta.\n");

    // pegando os atributos da carta.
    printf("Informe o estado: \n");
    scanf("%s", estado);
    printf("**********************************************\n");

    printf("Informe o codigo da carta:\n");
    scanf("%s", codigoDaCarta);
    printf("**********************************************\n");

    printf("Informe o nome da cidade\n");
    scanf("%s", nomeCidadde);
    printf("**********************************************\n");

    printf("Informe a quantidade populacional:\n");
    scanf("%d", &populacao);
    printf("**********************************************\n");

    printf("Informe o tamanho da area:\n");
    scanf("%f", &area);
    printf("**********************************************\n");

    printf("Digite o valo do PIB:\n");
    scanf("%f", &pib);
    printf("**********************************************\n");

    printf("Informe a quantidade de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos);
    printf("**********************************************\n");

    //imprimindo as informações da primeira carta.
    printf("PRIMEIRA carta:\n");
    printf("**********************************************\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da carta: %s\n", codigoDaCarta);
    printf("Cidade: %s\n", nomeCidadde);
    printf("População: %d\n", populacao);
    printf("Area em km²: %.2f km quadrados.\n", area);
    printf("PIB: R$: %.2f reais.\n", pib);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos);
    printf("\n");
    printf("\n");



// mensagem informando sobre as informações da segunda carta
    printf("Digite as informações da SEGUNDA carta.\n");


    // pegando as informações dos atributos das cartas.
    printf("Informe o estado: \n");
    scanf("%s", estado);
    printf("**********************************************\n");

    printf("Informe o codigo da carta:\n");
    scanf("%s", codigoDaCarta);
    printf("**********************************************\n");

    printf("Informe o nome da cidade\n");
    scanf("%s", nomeCidadde);
    printf("**********************************************\n");

    printf("Informe a quantidade populacional:\n");
    scanf("%d", &populacao);
    printf("**********************************************\n");

    printf("Informe o tamanho da area:\n");
    scanf("%f", &area);
    printf("**********************************************\n");

    printf("Digite o valo do PIB:\n");
    scanf("%f", &pib);
    printf("**********************************************\n");

    printf("Informe a quantidade de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos);
    printf("**********************************************\n");

    //imprimindo as informações da segunda carta.
    printf("SEGUNDA carta:\n");
    printf("**********************************************\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da carta: %s\n", codigoDaCarta);
    printf("Cidade: %s\n", nomeCidadde);
    printf("População: %d\n", populacao);
    printf("Area em km²: %.2f km quadrados.\n", area);
    printf("PIB: R$: %.2f reais.\n", pib);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos);

    return 0;
    
}
