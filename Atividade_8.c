#include <stdio.h>
typedef struct Guerreiro
{
    char nome[100];
    char casa[100];
    char reino[100];
    int vitorias;
    int derrotas;

} Guerreiro;

void lerGuerreiro(Guerreiro *g)
{
    printf("Nome do guerreiro: ");
    scanf("%s", g->nome);

    printf("\nCasa do guerreiro: ");
    scanf("%s", g->casa);

    printf("\nReino do guerreiro: ");
    scanf("%s", g->reino);

    printf("\nVitorias do guerreiro: ");
    scanf("%d", &g->vitorias);

    printf("\nDerrotas do guerreiro: ");
    scanf("%d", &g->derrotas);
}

void imprimirGuerreiro(Guerreiro g)
{
    printf("Imprimir o Guerreiro.\n");
    printf("Nome do Guerreiro: %s.\n", g.nome);
    printf("Casa do Guerreiro: %s.\n", g.casa);
    printf("Reino do Guerreiro: %s.\n", g.reino);
    printf("Vitorias do Guerreiro: %d.\n", g.vitorias);
    printf("Derrotas do Guerreiro: %d.\n", g.derrotas);
}

int calcularPontuacaoCombate(Guerreiro *g)
{
    return (g->vitorias * 3) - g->derrotas;
}

int possuiMaisVitoriasQueDerrotas(Guerreiro *g)
{
    if (g->vitorias > g->derrotas)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // RA: 22013871 - Guilherme Domingues de Sousa
    // RA: 22010825 - Rafael Lanza de Queiroz
    Guerreiro guerreiro;
    int pontuacao;
    int possuiMaisVitorias;

    lerGuerreiro(&guerreiro);
    imprimirGuerreiro(guerreiro);
    pontuacao = calcularPontuacaoCombate(&guerreiro);
    printf("\nPontuacao de combate: %d\n", pontuacao);
    possuiMaisVitorias = possuiMaisVitoriasQueDerrotas(&guerreiro);

    if (possuiMaisVitorias == 1)
    {
        printf("\nO guerreiro possui mais vitorias do que derrotas.\n");
    }
    else
    {
        printf("\nO guerreiro nao possui mais vitorias do que derrotas.\n");
    }
    return 0;
}