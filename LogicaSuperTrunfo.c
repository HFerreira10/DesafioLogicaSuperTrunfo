#include <stdio.h>

int main(){
    char estado1, estado2;
    char codigoCarta1[3], codigoCarta2[3];
    char nomeCidade1[40], nomeCidade2[40];
    int populacao1 = 0, populacao2 = 0;
    float area1 = 0, area2 = 0;
    float pib1 = 0, pib2 = 0;
    int pontoTuristico1 = 0, pontoTuristico2 = 0;
    float densidade1 = 0, densidade2 = 0;
    float pibPerCapita1 = 0, pibPerCapita2 = 0;

    //Inicio da digitação da CARTA 1
    printf("Vamos iniciar a digitação da CARTA 1: \n");
    printf("Digite uma letra de 'A' a 'H' para representar o estado da carta: \n");
    scanf("%c", &estado1);

    printf("Digite o número de 1 a 4 para o código da carta: \n");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: \n");
    getchar(); //Limpa o buffer 
    scanf("%[^\n]", nomeCidade1); // Leitura do nome da cidade com espaços
    
    printf("Digite a área da cidade: \n");
    scanf("%f", area1);

    printf("Digite a população da cidade: \n");
    scanf("%d", populacao1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", pontoTuristico1);

    densidade1 = (float) (populacao1 / area1);
    pibPerCapita1 = (float) (pib1 / populacao1);

    //Inicio da digitação da CARTA 2
    printf("Vamos iniciar a digitação da CARTA 2: \n");
    printf("Digite uma letra de 'A' a 'H' para representar o estado da carta: \n");
    scanf("%c", estado2);

    printf("Digite o número de 1 a 4 para o código da carta: \n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: \n");
    getchar(); //Limpa o buffer 
    scanf("%[^\n]", nomeCidade2); // Leitura do nome da cidade com espaços

    printf("Digite a população da cidade: \n");
    scanf("%d", populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", pontoTuristico2);

    densidade2 = (float) (populacao2 / area2);
    pibPerCapita2 = (float) (pib2 / populacao2);
    
    //Exibição dos dados das cartas
    printf("Abaixo você irá visualizar os dados das cartas que você digitou. \n");
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontoTuristico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n");
    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
       
    //Inicio das comparações, o usuário deverá escolhar qual dado deseja comparar
    int opcao;

    printf("\nVamos ao desafio! Qual dado você deseja comparar?\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
    printf("Digite a opção de 1 a 5: ");
    
    switch (opcao)
    {
        case 1: //Comparando a população
            printf("\nResultado da comparação entre População:\n");
            printf("Cidade 1: %s - População: %d", nomeCidade1, populacao1);
            printf("Cidade 2: %s - População: %d", nomeCidade2, populacao2);

            if(populacao1 > populacao2){
                printf("Vencedor do desafio: %s - Jogador 1\n", nomeCidade1);
            }
            else if(populacao1 == populacao2){
                printf("O jogo ficou empatado!!\n");
            }
            else{
                printf("Vencedor do desafio: %s Jogador 2\n", nomeCidade2);
            }

            break;
        case 2: //Comparando a área
            printf("\nResultado da comparação entre Área: \n");
            printf("Cidade 1: %s - Área: %.2f\n", nomeCidade1, area1);
            printf("Cidade 2: %s - Área: %.2f\n", nomeCidade2, area2);

            if(area1 > area2){
                printf("Vencedor do desafio: %s - Jogador 1\n", nomeCidade1);
            }
            else if(area1 == area2){
                printf("O jogo ficou empatado!!");
            }
            else{
                printf("Vencedor do desafio: %s - Jogador 2\n", nomeCidade2);
            }

            break;
        case 3: //Comparando o PIB
            printf("\nResultado da comparação entre PIB:\n");
            printf("Cidade 1: %s - PIB: %.2f\n", nomeCidade1, pib1);
            printf("Cidade 2: %s - PIB: %.2f\n", nomeCidade2, pib2);

            if(pib1 > pib2){
                printf("Vencedor do desafio: %s - Jogador 1\n", nomeCidade1);
            }
            else if(pib1 == pib2){
                printf("O jogo ficou empatado!!\n");
            }
            else{
                printf("Vencedor do desafio: %s - Jogador 2\n", nomeCidade2);
            }

            break;
        case 4: //Comparando o número de pontos turisticos
            printf("\nResultado da comparação entre Pontos Turísticos: \n");
            printf("Cidade 1: %s - Pontos Turísticos: %d\n", nomeCidade1, pontoTuristico1);
            printf("Cidade 2: %s - Pontos Turísticos: %d\n", nomeCidade2, pontoTuristico2);

            if(pontoTuristico1 > pontoTuristico2){
                printf("Vencedor do desafio: %s - Jogador 1\n", nomeCidade1);
            }
            else if(pontoTuristico1 == pontoTuristico2){
                printf("O jogo ficou empatado!\n");
            }
            else{
                printf("Vencedor do desafio: %s - Jogador 1\n", nomeCidade2);
            }

            break;
        case 5: //Comparando a densidade demográfica
            printf("\nResultado da comparação entre Densidade Demográfica: \n");
            printf("Cidade 1: %s - Densidade Demográfica: %.2f\n", nomeCidade1, densidade1);
            printf("Cidade 2: %s - Densidade Demográfica: %.2f\n", nomeCidade2, densidade2);
            
            if(densidade1 < densidade2){
                printf("Vencedor do desafio: %s - Jogador 1\n", nomeCidade1);
            }
            else if(densidade1 == densidade2){
                printf("O jogo ficou empatado!\n");
            }
            else{
                printf("Vencedor do desafio: %s - Jogador 2\n", nomeCidade2);
            }

            break;
        default:
            printf("A opção informada é inválida!");
            break;
    }

    return 0;
}