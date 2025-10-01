#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
    // Variáveis da Carta 1
    char estado1[3], codigo1[5], nome_cidade1[50];
    int populacao1;
    float area1, pib1;

    // Variáveis da Carta 2
    char estado2[3], codigo2[5], nome_cidade2[50];
    int populacao2;
    float area2, pib2;
    
    // Variáveis para os cálculos derivados e comparação
float densidade_pop1, pib_per_capita1;
float densidade_pop2, pib_per_capita2;
    
    // ...) {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
   // -----------------------------------------------------------
    // 1. CADASTRO DAS CARTAS (Usando valores fixos para simplificar o teste da lógica)
    // -----------------------------------------------------------
    printf("--- DADOS DAS CARTAS ---\n");
    
    // CARTA 1: São Paulo (Dados simulados)
    // Para strings, use a biblioteca <string.h> e a função strcpy
    // #include <string.h> deve ser adicionado no topo, se o professor permitir!
    // Se não for permitido, ignore as strings e use apenas os números.
   // CARTA 1: São Paulo (Dados simulados)
    // ...
    populacao1 = 12325000;
    area1 = 1521.11; // <-- Adicione a variável 'area1'
    pib1 = 699.28;   // <-- Adicione a variável 'pib1'
    // CARTA 2: Rio de Janeiro (Dados simulados)
    populacao2 = 6748000;
    area2 = 1200.25; // <-- Adicione a variável 'area2'
    pib2 = 300.50;   // <-- Adicione a variável 'pib2'
    
    printf("Dados de duas cartas carregados para comparação.\n");

    // -----------------------------------------------------------
    // 2. CÁLCULOS DERIVADOS (Densidade Populacional e PIB Per Capita)
    // -----------------------------------------------------------
    
    // CARTA 1
    densidade_pop1 = (float)populacao1 / area1;
    // O PIB per capita é baseado no PIB em BILHÕES, por isso multiplicamos por 1 bilhão (1e9)
    pib_per_capita1 = (pib1 * 1000000000.0) / (float)populacao1;
    
    // CARTA 2
    densidade_pop2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0) / (float)populacao2;

    printf("\n--- CÁLCULOS EXIBIDOS ---\n");
printf("Densidade 1: %.2f | Densidade 2: %.2f\n", densidade_pop1, densidade_pop2);
printf("PIB Per Capita 1: R$ %.2f | PIB Per Capita 2: R$ %.2f\n", pib_per_capita1, pib_per_capita2);

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

  // -----------------------------------------------------------
// 4. LÓGICA DE COMPARAÇÃO (usando População como atributo)
// OBS: Para População, o MAIOR valor vence.
// -----------------------------------------------------------

printf("\n--- RESULTADO DA RODADA ---\n");
printf("Atributo: População\n");

// Usa as variáveis populacao1 e populacao2 que você definiu
if (populacao1 > populacao2) {
    printf("Resultado: Carta 1 VENCEU! (População: %d)\n", populacao1);
} else if (populacao2 > populacao1) { // Testa se a CARTA 2 é MAIOR
    printf("Resultado: Carta 2 VENCEU! (População: %d)\n", populacao2);
} else { // Se não é maior nem menor, é EMPATE
    printf("Resultado: EMPATE!\n");
}  

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
