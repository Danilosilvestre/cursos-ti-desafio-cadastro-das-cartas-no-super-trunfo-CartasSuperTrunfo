#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int codigo = 61;
    char nome[20] = "Brasília";
    double populacao = 2.817 ;
    float area = 5.761;
    int pib = 244.682 ;
    int turistico = 32;
          

        printf("Codigo da cidade:%d DDD\n", codigo);
        printf("Nome: %s\n", nome);
        printf("População: %2.f milhões\n ", populacao);
        printf("Area:  %.2f km2\n", area);
        printf("PIB: %d bilhões\n", pib);
        printf("Turístico: %d pontos turísticos da capital.\n", turistico);

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
