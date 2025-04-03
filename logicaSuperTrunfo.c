#include <stdio.h>
#include <string.h>

int main() {
    // variaveis para armazenar os dados de cada carta
    char estado, estado2;
    char codigoDaCarta[10], codigoDaCarta2[10];
    char nomeDaCidade[30], nomeDaCidade2[30];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontosTuristicos, pontosTuristicos2;
    float densidade, densidade2;
    float pibPerCapito, pibPerCapito2;
    long int poderCarta1, poderCarta2;
    char atributoEscolhido[30]; // para armazenar o atributo escolhido pelo usuário

    // entrada de dados da primeira carta
    printf("DIGITE OS DADOS DA PRIMEIRA CARTA:\n");
    printf("Estado (A a H): ");
    scanf("%c", &estado);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigoDaCarta);
    printf("Nome da Cidade: ");
    getchar();
    fgets(nomeDaCidade, 50, stdin);
    printf("População: ");
    scanf("%lu", &populacao);
    printf("Área (em km²): ");
    scanf("%f", &area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

    // entrada de dados da segunda carta
    printf("\nDIGITE OS DADOS DA SEGUNDA CARTA:\n");
    getchar();
    printf("Estado (A a H): ");
    scanf("%c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigoDaCarta2);
    printf("Nome da Cidade: ");
    getchar();
    fgets(nomeDaCidade2, 50, stdin);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // atribuindo os valores de densidade e pib per capita
    densidade = populacao / area;
    pibPerCapito = pib / populacao;

    densidade2 = populacao2 / area2;
    pibPerCapito2 = pib2 / populacao2;

    // calculando o poder das cartas
    poderCarta1 = populacao + area + pib + pontosTuristicos + pibPerCapito - densidade ; // subtraindo a densidade para maior vantagem da carta com menor densidade
    poderCarta2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapito2 - densidade2;

    // saída dos dados
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Codigo da carta: %s\n", codigoDaCarta);
    printf("Nome da cidade: %s", nomeDaCidade);
    printf("População: %lu\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f Reais\n", pib);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB Per Capito: %.2f Reais\n", pibPerCapito);
    printf("Poder: %d\n", poderCarta1);

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigoDaCarta2);
    printf("Nome da cidade: %s", nomeDaCidade2);
    printf("População: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f Reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB Per Capito: %.2f Reais\n", pibPerCapito2);
    printf("Poder: %d\n", poderCarta2);

    // Pergunta ao usuário qual atributo ele deseja comparar
    printf("\nDigite o atributo que deseja comparar (populacao, area, pib, pontos turisticos, densidade, pib per capita, poder): ");
    scanf("%s", atributoEscolhido);

    // Comparando o atributo escolhido pelo usuário
    if (strcmp(atributoEscolhido, "populacao") == 0) {
        if (populacao > populacao2) {
            printf("População: Carta 1 Venceu\n");
        } else {
            printf("População: Carta 2 Venceu\n");
        }
    } else if (strcmp(atributoEscolhido, "area") == 0) {
        if (area > area2) {
            printf("Área: Carta 1 Venceu\n");
        } else {
            printf("Área: Carta 2 Venceu\n");
        }
    } else if (strcmp(atributoEscolhido, "pib") == 0) {
        if (pib > pib2) {
            printf("PIB: Carta 1 Venceu\n");
        } else {
            printf("PIB: Carta 2 Venceu\n");
        }
    } else if (strcmp(atributoEscolhido, "pontos") == 0 ) {
        if (pontosTuristicos > pontosTuristicos2) {
            printf("Pontos turísticos: Carta 1 Venceu\n");
        } else {
            printf("Pontos turísticos: Carta 2 Venceu\n");
        }
    } else if (strcmp(atributoEscolhido, "densidade") == 0) {
        if (densidade < densidade2) { // menor densidade é melhor
            printf("Densidade populacional: Carta 1 Venceu\n");
        } else {
            printf("Densidade populacional: Carta 2 Venceu\n");
        }
    } else if (strcmp(atributoEscolhido, "pib per capita") == 0) {
        if (pibPerCapito > pibPerCapito2) {
            printf("PIB per capita: Carta 1 Venceu\n");
        } else {
            printf("PIB per capita: Carta 2 Venceu\n");
        }
    } else if (strcmp(atributoEscolhido, "poder") == 0) {
        if (poderCarta1 > poderCarta2) {
            printf("Super poder: Carta 1 Venceu com %d de poder\n", poderCarta1);
        } else {
            printf("Super poder: Carta 2 Venceu com %d de poder\n", poderCarta2);
        }
    } else {
        printf("Atributo inválido. Tente novamente com um dos atributos válidos.\n");
    }

    return 0;
}
