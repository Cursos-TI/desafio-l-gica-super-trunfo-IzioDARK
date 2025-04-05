#include <stdio.h>

int main(){
    char Carta = 01;
    char Estado[50] = "Alagoas";
    char Código[20] = "A01";
    char Cidade[20] = "Maceio";
    unsigned long int População = 3127511;
    float Área= 27848.140;
    float PIB = 76.266;
    int Numero = 27; //pontos turisticos
    float Densidade;
    float PIBper;
    float SuperPoder;
    int Resultado;

    //Calculo do Super Poder;
    Densidade = População / Área;
    PIBper = População / PIB;
    SuperPoder = Área + PIB + (float)Numero + PIBper;
    Resultado;

    printf("Carta %d\n", Carta);
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Código);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d Habitantes\n", População);
    printf("Área em Km²: %.3fKM²\n", Área);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de Pontos Turisticos: %d\n", Numero);
    printf("Densidade Populacional: %.2f Hab/Km² \n", Densidade);
    printf("PIB per Capita: %.2f Reais\n", PIBper);
    printf("Super Poder: %.2f\n", SuperPoder);
    printf("\n");
    printf("\n");
    

    char carta = 02;
    char estado[50] = "Pernanbuco";
    char código[20] = "A02";
    char cidade[20] = "Recife";
    unsigned long int população = 9058155;
    float área= 98067.881;
    float pib = 245.828;
    int numero = 32; // Pontos Turisticos
    float densidade;
    float pibPER;
    float superpoder;
    int resultado;

    //Calculo do Super Poder;
    densidade = população / área;
    pibPER = população / pib;
    superpoder = área + pib + (float)numero + pibPER;
    resultado;

    
    printf("Carta %d\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", código);
    printf("Cidade: %s\n", cidade);
    printf("População: %d Habitantes\n", população);
    printf("Área em Km²: %.3fKm²\n", área);
    printf("PIB: %.3f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", numero);
    printf("Densidade Populacional: %.2f Hab/Km² \n", densidade);
    printf("PIB per Capita: %.2f Reais\n", pibPER);
    printf("Super Poder: %.2f\n", superpoder);
    printf("\n");

    //Reesultado da Comparção entre as cartas 1 e 2;
    População, população;
    Área, área;
    PIB, pib;
    Numero, numero;
    Densidade, densidade;

    
    printf("Resultado da Comparação da Área: %d\n", Área > área);
    if (Área > área) {
        printf("Carta 1 Venceu(AL)!\n");} 
    else { 
        printf("Carta 2 Venceu(PE)\n");}
        ////////////////////////////////
    printf("Resultado da Comparação do PIB: %d\n", PIB > pib);
    if (PIB > pibPER) {
        printf("Carta 1 Venceu(AL)!\n");} 
    else { 
        printf("Carta 2 Venceu(PE)\n");}
        ////////////////////////////////
    printf("Resultado da Comparação dos Pontos Turisticos: %d\n", Numero > numero);
    if (Numero > numero) {
        printf("Carta 1 Venceu(AL)!\n");} 
    else { 
        printf("Carta 2 Venceu(PE)\n");}
        ////////////////////////////////
    printf("Resultado da Comparação das densidades: %d\n", Densidade > densidade);
    if (Densidade > densidade) {
        printf("Carta 1 Venceu(AL)!\n");} 
    else { 
        printf("Carta 2 Venceu(PE)\n");}
        ////////////////////////////////
    printf("Resultado da Comparação do Super Poder: %d\n", SuperPoder > superpoder);
    if (SuperPoder > superpoder) {
        printf("Carta 1 Venceu(AL)!\n");} 
    else { 
        printf("Carta 2 Venceu(PE)\n");}
        ////////////////////////////////
    printf("\n");


    //Quem Ganhou na Comparação da Área;
    printf("Maior Área\n");
    printf("Carta 1 - Maceio(AL): %.3fKm²\n", Área);
    printf("Carta 2 - Pernambuco(PE): %.3fKm²:\n", área);
    if (Área > área) {
        printf("!!Carta 1 Venceu(Maceio)!!\n");
    } else {
        printf("!!Carta 2 Venceu(Pernambuco)!!\n");
    }
    

    return 0;
}
