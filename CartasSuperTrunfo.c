#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int main() {
   
        int codigoA = 61;
        char cidadeA[50] = "BRB";  
        float populacaoA = 2.817;
        double areaA = 5.761;
        double pibA = 244.682;
        int turisticoA = 32;
    
        int codigoB = 11;
        char cidadeB[50] = "SP";   
        float populacaoB = 11.450;
        double areaB = 1.521;
        double pibB = 2.719;
        int turisticoB = 36;
    
        // Captura dos dados cidade A
        printf("Entre com o código da cidade A:\n");
        scanf("%d", &codigoA);
    
        printf("Entre com o nome da cidade A:\n");
        scanf("%s", cidadeA);
    
        printf("Quantidade da população da cidade A:\n");
        scanf("%f", &populacaoA);
    
        printf("Entre com a área da cidade A:\n");
        scanf("%lf", &areaA);
    
        printf("Entre com o PIB da cidade A:\n");
        scanf("%lf", &pibA);
    
        printf("Quantos pontos turísticos na cidade A:\n");
        scanf("%d", &turisticoA);
    
    
        // Captura dos dados cidade B
        printf("Entre com o código da cidade B:\n");
        scanf("%d", &codigoB);
    
        printf("Entre com o nome da cidade B:\n");
        scanf("%s", cidadeB);
    
        printf("Quantidade da população da cidade B:\n");
        scanf("%f", &populacaoB);
    
        printf("Entre com a área da cidade B:\n");
        scanf("%lf", &areaB);
    
        printf("Entre com o PIB da cidade B:\n");
        scanf("%lf", &pibB);
    
        printf("Quantos pontos turísticos na cidade B:\n");
        scanf("%d", &turisticoB);
    
    
        // Contadores para as vitórias de cada cidade
        int vitoriaA = 0, vitoriaB = 0;
    
    
        // Comparando a população
        if (populacaoA > populacaoB) {
            printf("A cidade %s tem maior população com %.2f milhões.\n", cidadeA, populacaoA);
            vitoriaA++;
        } else if (populacaoA < populacaoB) {
            printf("A cidade %s tem maior população com %.2f milhões.\n", cidadeB, populacaoB);
            vitoriaB++;
        } else {
            printf("Ambas as cidades têm a mesma população de %.2f milhões.\n", populacaoA);
        }
    
    
        // Comparando a área
        if (areaA > areaB) {
            printf("A cidade %s tem maior área com %.2f km².\n", cidadeA, areaA);
            vitoriaA++;
        } else if (areaA < areaB) {
            printf("A cidade %s tem maior área com %.2f km².\n", cidadeB, areaB);
            vitoriaB++;
        } else {
            printf("Ambas as cidades têm a mesma área de %.2f km².\n", areaA);
        }
    
    
        // Comparando o PIB
        if (pibA > pibB) {
            printf("A cidade %s tem maior PIB com R$ %.2lf bilhões.\n", cidadeA, pibA);
            vitoriaA++;
        } else if (pibA < pibB) {
            printf("A cidade %s tem maior PIB com R$ %.2lf bilhões.\n", cidadeB, pibB);
            vitoriaB++;
        } else {
            printf("Ambas as cidades têm o mesmo PIB de R$ %.2lf bilhões.\n", pibA);
        }
    
        // Comparando os pontos turísticos
        if (turisticoA > turisticoB) {
            printf("A cidade %s tem mais pontos turísticos com %d locais.\n", cidadeA, turisticoA);
            vitoriaA++;
        } else if (turisticoA < turisticoB) {
            printf("A cidade %s tem mais pontos turísticos com %d locais.\n", cidadeB, turisticoB);
            vitoriaB++;
        } else {
            printf("Ambas as cidades têm o mesmo número de pontos turísticos: %d locais.\n", turisticoA);
        }
    
        // Exibição da cidade vencedora
        if (vitoriaA > vitoriaB) {
            printf("\nA cidade %s venceu no total com %d vitórias.\n", cidadeA, vitoriaA);
        } else if (vitoriaB > vitoriaA) {
            printf("\nA cidade %s venceu no total com %d vitórias.\n", cidadeB, vitoriaB);
        } else {
            printf("\nAs cidades empataram com o mesmo número de vitórias (%d).\n", vitoriaA);
        }
    
        return 0;
    }
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    

