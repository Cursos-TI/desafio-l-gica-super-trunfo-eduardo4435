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
    int atributoEscolhido1, atributoEscolhido2; // para armazenar o atributo escolhido pelo usuário
    int resultado1, resultado2;

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
    //poderCarta1 = populacao + area + pib + pontosTuristicos + pibPerCapito - densidade ; // subtraindo a densidade para maior vantagem da carta com menor densidade
    //poderCarta2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapito2 - densidade2;

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

    // Pergunta ao usuário qual atributo ele deseja comparar
    printf("\ninforme o primeiro atributo que voce deseja comparar: \n");
    printf("1 PARA POPULACAO\n");
    printf("2 PARA AREA\n");
    printf("3 PARA PIB\n");
    printf("4 PARA PONTOS TURISTICOS\n");
    printf("5 PARA DENSIDADE POPULACIONAL\n");
    printf("6 PARA PIB PER CAPITA\n");
    printf("ESCOLHA: ");
    scanf("%d", &atributoEscolhido1);
    printf("----------------------\n");
    // escolhendo o atributo para comparar
    switch (atributoEscolhido1)
    {
    case 1:
        printf("### POPULACAO ###\n");
        resultado1 = populacao > populacao2 ? 1 : 0;
        poderCarta1 += populacao;
        poderCarta2 += populacao2;
        printf("carta 1: %d\n", populacao);
        printf("carta 2: %d\n", populacao2);
        break;
    case 2:
        printf("### AREA ###\n");
        resultado1 = area > area2 ? 1 : 0;
        poderCarta1 += area;
        poderCarta2 += area2;
        printf("carta 1: %.2f\n", area);
        printf("carta 2: %.2f\n", area2);
        break;
    case 3:
        printf("### PIB ###\n");
        resultado1 = pib > pib2 ? 1 : 0;
        poderCarta1 += pib;
        poderCarta2 += pib2;
        printf("carta 1: %.2f\n", pib);
        printf("carta 2: %.2f\n", pib2);
        break;
    case 4:
        printf("### PONTOS TURISTICOS ###\n");
        resultado1 = pontosTuristicos > pontosTuristicos2 ? 1 : 0;
        poderCarta1 += pontosTuristicos;
        poderCarta2 += pontosTuristicos2;
        printf("carta 1: %d\n", pontosTuristicos);
        printf("carta 2: %d\n", pontosTuristicos2);
        break;
    case 5:
        printf("### DENSIDADE POPULACIONAL ###\n");
        resultado1 = densidade < densidade2 ? 1 : 0;
        poderCarta1 += densidade;
        poderCarta2 += densidade2;
        printf("carta 1: %.2f\n", densidade);
        printf("carta 2: %.2f\n", densidade2);
        break;
    case 6:
        printf("### PIB PER CAPITA ###\n");
        resultado1 = pibPerCapito > pibPerCapito2 ? 1 : 0;
        poderCarta1 += pibPerCapito;
        poderCarta2 += pibPerCapito2;
        printf("carta 1: %.2f\n", pibPerCapito);
        printf("carta 2: %.2f\n", pibPerCapito2);
        break;
    default:
        printf("VALOR INVALIDO!!!\n");
        break;
    }
    printf("\ninforme o segundo atributo que voce deseja comparar: \n");
    printf("1 PARA POPULACAO\n");
    printf("2 PARA AREA\n");
    printf("3 PARA PIB\n");
    printf("4 PARA PONTOS TURISTICOS\n");
    printf("5 PARA DENSIDADE POPULACIONAL\n");
    printf("6 PARA PIB PER CAPITA\n");
    printf("ESCOLHA: ");
    scanf("%d", &atributoEscolhido2);
    printf("----------------------\n");
    if (atributoEscolhido1 == atributoEscolhido2) {
        printf("Voce escolheu o mesmo atributo!");
    } else {
        switch (atributoEscolhido2)
        {
        case 1:
            printf("### POPULACAO ###\n");
            resultado2 = populacao > populacao2 ? 1 : 0;
            poderCarta1 += populacao;
            poderCarta2 += populacao2;
            printf("carta 1: %d\n", populacao);
            printf("carta 2: %d\n", populacao2);
            break;
        case 2:
            printf("### AREA ###\n");
            resultado2 = area > area2 ? 1 : 0;
            poderCarta1 += area;
            poderCarta2 += area2;
            printf("carta 1: %.2f\n", area);
            printf("carta 2: %.2f\n", area2);
            break;
        case 3:
            printf("### PIB ###\n");
            resultado2 = pib > pib2 ? 1 : 0;
            poderCarta1 += pib;
            poderCarta2 += pib2;
            printf("carta 1: %.2f\n", pib);
            printf("carta 2: %.2f\n", pib2);
            break;
        case 4:
            printf("### PONTOS TURISTICOS ###\n");
            resultado2 = pontosTuristicos > pontosTuristicos2 ? 1 : 0;
            poderCarta1 += pontosTuristicos;
            poderCarta2 += pontosTuristicos2;
            printf("carta 1: %d\n", pontosTuristicos);
            printf("carta 2: %d\n", pontosTuristicos2);
            break;
        case 5:
            printf("### DENSIDADE POPULACIONAL ###\n");
            resultado2 = densidade < densidade2 ? 1 : 0;
            poderCarta1 += densidade;
            poderCarta2 += densidade2;
            printf("carta 1: %.2f\n", densidade);
            printf("carta 2: %.2f\n", densidade2);
            break;
        case 6:
            printf("### PIB PER CAPITA ###\n");
            resultado2 = pibPerCapito > pibPerCapito2 ? 1 : 0;
            poderCarta1 += pibPerCapito;
            poderCarta2 += pibPerCapito2;
            printf("carta 1: %.2f\n", pibPerCapito);
            printf("carta 2: %.2f\n", pibPerCapito2);
            break;
        default:
            printf("VALOR INVALIDO!!!\n");
            break;
        }
        //resultado das comparações
        if (resultado1 && resultado2) {
            printf("----------------------\n");
            printf("CARTA 1 GAMHOU!\n");
        } else if (resultado1 != resultado2) {
            printf("----------------------\n");
            printf("O JOGO EMPATOU!\n");
        } else {
            printf("----------------------\n");
            printf("CARTA 2 GANHOU!\n");
        }
    }

    return 0;
}
