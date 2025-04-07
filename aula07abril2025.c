#include <stdio.h>
#include <string.h> // Para manipulação de strings (embora aqui usemos só a inicial)

// Definindo a estrutura para armazenar as informações de um jogador
struct Jogador {
    int numeroCamisa;
    float peso;
    float altura;
    char inicialNome;
};

int main() {
    // Declarando um array de structs para armazenar as informações de 3 jogadores
    struct Jogador jogadores[3];

    // Lendo as informações de cada jogador
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
        scanf(" %c", &jogadores[i].inicialNome); // Note o espaço antes do %c para consumir a quebra de linha anterior
    }

    // Encontrando o jogador mais baixo
    float menorAltura = jogadores[0].altura;
    char inicialMaisBaixo = jogadores[0].inicialNome;
    for (int i = 1; i < 3; i++) {
        if (jogadores[i].altura < menorAltura) {
            menorAltura = jogadores[i].altura;
            inicialMaisBaixo = jogadores[i].inicialNome;
        }
    }

    // Encontrando o jogador mais pesado
    float maiorPeso = jogadores[0].peso;
    int numeroMaisPesado = jogadores[0].numeroCamisa;
    for (int i = 1; i < 3; i++) {
        if (jogadores[i].peso > maiorPeso) {
            maiorPeso = jogadores[i].peso;
            numeroMaisPesado = jogadores[i].numeroCamisa;
        }
    }

    // Imprimindo os resultados
    printf("\nResultados:\n");
    printf("Inicial do jogador mais baixo: %c\n", inicialMaisBaixo);
    printf("Número da camisa do jogador mais pesado: %d\n", numeroMaisPesado);

    return 0;
}