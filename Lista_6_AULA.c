// RA: 22013871 - Guilherme Domingues de Sousa
// RA: 22010825 - Rafael Lanza de Queiroz

#include <stdio.h>

void imprimirVetor(int *vet, int tamanho)
{
    printf("Pontuações: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

void analisarPontuacoes(int *vet, int tamanho, int *maior, float *media)
{
    int soma = 0;
    *maior = vet[0];

    for (int i = 0; i < tamanho; i++)
    {
        soma += vet[i];
        if (vet[i] > *maior)
        {
            *maior = vet[i];
        }
    }

    *media = (float)soma / tamanho;
}

void imprimirTemperaturas(float *vet, int tamanho){
    for (int i = 0; i < tamanho; i++) {
        printf("Temperatura %d -> %.1f\n", i + 1, vet[i]);
    }
}

void contarAcimaMedia(float *vet, int tamanho, float *media, int *quantidade){
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vet[i];
    }
    *media = soma / tamanho;

    for (int i = 0; i < tamanho; i++) {
        if (vet[i] > *media) *quantidade = *quantidade + 1;
    }
}

int main()
{
    printf("1: Campeonato de Videogame:\n");

    int pontuacoes[] = {120, 95, 140, 110, 87, 156, 99, 130};
    int tamanhoPontuacoes = sizeof(pontuacoes) / sizeof(pontuacoes[0]);
    int maiorPontuacao;
    float mediaPontuacoes;

    imprimirVetor(pontuacoes, tamanhoPontuacoes);
    analisarPontuacoes(pontuacoes, tamanhoPontuacoes, &maiorPontuacao, &mediaPontuacoes);

    printf("Maior pontuação: %d\n", maiorPontuacao);
    printf("Media das pontuacoes: %.2f\n\n", mediaPontuacoes);

    printf("2: Estacao Meteorologica:\n");

    float temperatura[7] = {22.5, 24.0, 21.8, 25.3, 23.7, 20.9, 24.6}, media;
    int tamanhoTemperatura = 7, quantidade;

    imprimirTemperaturas(temperatura, tamanhoTemperatura);
    contarAcimaMedia(temperatura, tamanhoTemperatura, &media, &quantidade);
    printf("Quantidade de temperatura/dia acima da média -> %d\n", quantidade);

    return 0;
}
