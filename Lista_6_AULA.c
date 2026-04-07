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

// Sua parte

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

    float temperaturas[] = {22.5, 24.0, 21.8, 25.3, 23.7, 20.9, 24.6};
    int tamanhoTemperaturas = sizeof(temperaturas) / sizeof(temperaturas[0]);
    float mediaTemperaturas;
    int diasAcimaMedia;

    imprimirTemperaturas(temperaturas, tamanhoTemperaturas);
    contarAcimaMedia(temperaturas, tamanhoTemperaturas, &mediaTemperaturas, &diasAcimaMedia);

    printf("Media das temperaturas: %.2f\n", mediaTemperaturas);
    printf("Quantidade de dias acima da media: %d\n", diasAcimaMedia);

    return 0;
}