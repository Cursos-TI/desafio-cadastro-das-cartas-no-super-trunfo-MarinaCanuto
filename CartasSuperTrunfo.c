#include <stdio.h>

int main() {
   
    char Cidade[50];
    int Populacao;
    char Area[27];
    int Pib;
    int PontosTuristicos;

    printf("Digite o nome da cidade: \n");
    scanf("%s", Cidade);

    printf("Digite a quantidade populacional: \n");
    scanf("%d", &Populacao);

    printf("Digite a area da cidade: \n", Area);
    scanf("%s", Area);

    printf("Digite o valor do Pib da cidade: \n");
    scanf("%d", &Pib);

    printf("Digite a quantidade de pontos turisticos na cidade: %d\n");
    scanf("%d", &PontosTuristicos);

    printf("Nome da cidade: %s\n", Cidade);
    printf("Populacao: %d\n",Populacao);
    printf("Area: %d\n", Area);
    printf("Pib: %d\n", Pib);
    printf("PontosTuristicos: %d\n", PontosTuristicos);
 
 


}
