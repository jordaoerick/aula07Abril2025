#include <stdio.h>
#include <string.h>

struct Jogador {
    int numeroCamisa;
    float peso;
    float altura;
    char inicialNome;
};

int main() {
    struct Jogador jogadores[3];

    printf("Informe os dados dos 3 jogadores:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nJogador %d:\n", i + 1);
        printf("Número da camisa: ");
        scanf("%d", &jogadores[i].numeroCamisa);
        printf("Peso (em kg): ");
        scanf("%f", &jogadores[i].peso);
        printf("Altura (em metros): ");
        scanf("%f", &jogadores[i].altura);
        printf("Inicial do nome: ");
        scanf(" %c", &jogadores[i].inicialNome);
    }

    float menorAltura = jogadores[0].altura;
    char inicialMaisBaixo = jogadores[0].inicialNome;
    for (int i = 1; i < 3; i++) {
        if (jogadores[i].altura < menorAltura) {
            menorAltura = jogadores[i].altura;
            inicialMaisBaixo = jogadores[i].inicialNome;
        }
    }

    float maiorPeso = jogadores[0].peso;
    int numeroMaisPesado = jogadores[0].numeroCamisa;
    for (int i = 1; i < 3; i++) {
        if (jogadores[i].peso > maiorPeso) {
            maiorPeso = jogadores[i].peso;
            numeroMaisPesado = jogadores[i].numeroCamisa;
        }
    }

    printf("\nResultados:\n");
    printf("Inicial do jogador mais baixo: %c\n", inicialMaisBaixo);
    printf("Número da camisa do jogador mais pesado: %d\n", numeroMaisPesado);

    return 0;
}