#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char Estado1, Estado2; // Declarei as variaveis de mesmo tipo juntas.
    char Codigo1[4], Codigo2[4];
    char Cidade1[20], Cidade2[20];
    int Populacao1, Populacao2;
    float Area1, Area2, Pib1, Pib2;

    // Entrada de dados para a Carta 1
    printf("Cadastro Carta 1\n");
    printf("Digite o Estado (letra A - H): "); // Digite a letra inicial do Estado.
    scanf(" %c", &Estado1);
    printf("Digite o código da carta (De 1 a 4): "); // Digite a letra inicial do Estado + um numero de 1 a 4, ex: A1
    scanf("%s", Codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]%*c", Cidade1); // Substitui a anterior (%s) para caber nomes compostos.
    printf("Digite a população da cidade: ");
    scanf("%d", &Populacao1);
    printf("Digite a área da cidade (km²): "); // Digite a area em km².
    scanf("%f", &Area1);
    printf("Digite o PIB da cidade (em bilhões de reais): "); // Digite o PIB em bilhoes de reais.
    scanf("%f", &Pib1);

    printf("\n");  // Espaço para separar as cartas

    // Entrada de dados para a Carta 2
    printf("Cadastro Carta 2\n");
    printf("Digite o Estado (letra A - H): ");
    scanf(" %c", &Estado2);
    printf("Digite o código da carta (Ex: A1): ");
    scanf("%s", Codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]%*c", Cidade2);
    printf("Digite a população da cidade: ");
    scanf("%d", &Populacao2);
    printf("Digite a área da cidade (km²): ");
    scanf("%f", &Area2);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &Pib2);

    // Comparação da população
    printf("\nComparação de cartas\n");
    printf("Atributo: População)\n");
    printf("Carta 1 : %d habitantes\n", Populacao1);
    printf("Carta 2: %d habitantes\n", Populacao2);

    if (Populacao1 > Populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", Cidade1);
    } else if (Populacao2 > Populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
