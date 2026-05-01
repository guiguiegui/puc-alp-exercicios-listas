// LISTA DE EXERCICIOS 05 - Funções e Ponteiros
// RA: 22013871 -  Guilherme Domingues de Sousa
// RA: 22010825 - Rafael Lanza de Queiroz

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void simular_robo(int corredor[], int tam, int *chegou_destino, int *posicao_parada, int *energia_restante)
{
    int energia = 3;
    *chegou_destino = 0;
    int i;
    for (i = 0; i < tam; i++)
    {
        if (energia <= 0)
        {
            i--;
            break;
        }
        energia--;
        if (corredor[i] == 1)
        {
            break;
        }
        else if (corredor[i] == 2)
        {
            energia += 3;
        }
        else if (corredor[i] == 3)
        {
            *chegou_destino = 1;
            break;
        }
    }
    if (i == tam)
    {
        *posicao_parada = tam - 1;
    }
    else if (i < 0)
    {
        *posicao_parada = 0;
    }
    else
    {
        *posicao_parada = i;
    }

    *energia_restante = energia;
}

void disputa_rodadas(int jogador1[], int jogador2[], int tam, int *venceuMais, int *houveEmpate, int *mudaLideranca)
{
    *houveEmpate = 0;
    *venceuMais = 0;
    *mudaLideranca = -1;
    int placarJogador1 = 0, placarJogador2 = 0, liderAnterior = 0, liderAtual = 0;

    for (int i = 0; i < tam; i++)
    {
        if (jogador1[i] > jogador2[i])
        {
            placarJogador1++;
        }
        else if (jogador2[i] > jogador1[i])
        {
            placarJogador2++;
        }
        if (placarJogador1 > placarJogador2)
        {
            liderAtual = 1;
        }
        else if (placarJogador2 > placarJogador1)
        {
            liderAtual = 2;
        }
        else
        {
            liderAtual = 0;
        }
        if (liderAnterior != 0 && liderAtual != 0 && liderAnterior != liderAtual && *mudaLideranca == -1)
        {
            *mudaLideranca = i;
        }
        if (liderAtual != 0)
        {
            liderAnterior = liderAtual;
        }
    }
    if (placarJogador1 > placarJogador2)
    {
        *venceuMais = 1;
    }
    else if (placarJogador2 > placarJogador1)
    {
        *venceuMais = 2;
    }
    else
    {
        *houveEmpate = 1;
    }
}

void classificar_pedidos(float valores[], int pagamentos[], int enderecos[], int tam, int *expedicao, int *revisao, int *bloqueado)
{
    *expedicao = 0;
    *revisao = 0;
    *bloqueado = 0;

    for (int i = 0; i < tam; i++)
    {
        if (pagamentos[i] == 1 && enderecos[i] == 1)
        {
            (*expedicao)++;
        }
        else if (pagamentos[i] == 0 && enderecos[i] == 0)
        {
            *bloqueado = 1;
        }
        else
        {
            (*revisao)++;
        }
    }
}

void preencher_aleatorio(int vetor[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        vetor[i] = (rand() % 100) + 1;
    }
}

void analisar_vetor(int vetor[], int tam, int *seq_crescentes, int *pos_inicial, int *tem_repetido)
{
    *seq_crescentes = 0;
    *pos_inicial = -1;
    *tem_repetido = 0;
    int tamanho_seq_atual = 1;

    for (int i = 0; i < tam - 1; i++)
    {
        if (vetor[i] == vetor[i + 1])
        {
            *tem_repetido = 1;
        }
        if (vetor[i + 1] > vetor[i])
        {
            tamanho_seq_atual++;
            if (tamanho_seq_atual == 3)
            {
                (*seq_crescentes)++;
                if (*pos_inicial == -1)
                {
                    *pos_inicial = i - 1;
                }
            }
        }
        else
        {
            tamanho_seq_atual = 1;
        }
    }
}

float calcular_serie_harmonica(int N)
{
    float soma = 0.0;
    for (int i = 1; i <= N; i++)
    {
        soma += 1.0 / i;
    }
    return soma;
}

// Questão 6
int calcular_potencia(int X, int Z)
{
    int resultado = 1;
    for (int i = 0; i < Z; i++)
    {
        resultado *= X;
    }
    return resultado;
}

// Questão 7
int calcular_pontuacao_acumulada(int N)
{
    int soma = 0;
    for (int i = 1; i <= N; i++)
    {
        soma += (i * i);
    }
    return soma;
}

// Questão 8
long long crescimento_experiencia(int N)
{
    long long fator = 1;
    for (int i = 1; i <= N; i++)
    {
        fator *= i;
    }
    return fator;
}

// Questão 9
void separar_temperaturas(int X[], int tam, int A[], int B[], int *qtd_A, int *qtd_B)
{
    *qtd_A = 0;
    *qtd_B = 0;
    for (int i = 0; i < tam; i++)
    {
        if (X[i] > 0)
        {
            A[*qtd_A] = X[i];
            (*qtd_A)++;
        }
        else
        {
            B[*qtd_B] = X[i];
            (*qtd_B)++;
        }
    }
}

// Questão 10
void receber_matriz(float matriz[10][5])
{
    // Para testar, preenchendo a matriz com valores aleatórios entre 0.0 e 10.0
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = (float)(rand() % 100) / 10.0;
        }
    }
}

float calcular_soma_matriz(float matriz[10][5])
{
    float soma = 0.0;
    // Índices de 6 a 9 correspondem às linhas 7 a 10
    for (int i = 6; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main()
{
    srand(time(NULL));

    // Exercicio 1
    int corredor[20] = {0, 2, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3};
    int chegou_destino;
    int posicao_parada;
    int energia_restante;
    simular_robo(corredor, 20, &chegou_destino, &posicao_parada, &energia_restante);

    printf("01: Teste do Robo (Cenario com obstaculo)\n");
    if (chegou_destino)
    {
        printf("Status: O robo ALCANCOU o destino!\n");
    }
    else
    {
        printf("Status: O robo NAO conseguiu concluir o percurso.\n");
    }
    printf("Posicao de parada: Indice %d\n", posicao_parada);
    printf("Energia restante: %d unidades\n\n", energia_restante);

    // Exercicio 2
    int jogador1[10] = {8, 5, 6, 7, 3, 9, 4, 8, 2, 10};
    int jogador2[10] = {5, 5, 9, 8, 4, 2, 7, 6, 2, 9};
    int tam2 = 10, venceuMais, houveEmpate, mudaLideranca;
    disputa_rodadas(jogador1, jogador2, tam2, &venceuMais, &houveEmpate, &mudaLideranca);

    printf("02: Resultado do Torneio de Cartas\n");
    if (houveEmpate == 1)
    {
        printf("Vencedor: Houve um Empate Geral!\n");
    }
    else
    {
        printf("Vencedor: Jogador %d venceu mais rodadas.\n", venceuMais);
    }
    if (mudaLideranca != -1)
    {
        printf("Primeira mudanca de lideranca: Ocorreu na Rodada %d (indice %d).\n\n", mudaLideranca + 1, mudaLideranca);
    }
    else
    {
        printf("Primeira mudanca de lideranca: Nao houve mudanca de lideranca no placar acumulado.\n\n");
    }

    // Exercicio 3
    float valores[10] = {100.5, 200.0, 50.0, 300.0, 150.0, 80.0, 90.0, 400.0, 60.0, 120.0};
    int pagamentos[10] = {1, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    int enderecos[10] = {1, 0, 1, 1, 0, 1, 0, 1, 0, 1};
    int expedicao, revisao, bloqueado;
    classificar_pedidos(valores, pagamentos, enderecos, 10, &expedicao, &revisao, &bloqueado);

    printf("03: Classificacao de Pedidos\n");
    printf("Pedidos para expedicao: %d\n", expedicao);
    printf("Pedidos para revisao manual: %d\n", revisao);
    printf("Existe pedido bloqueado? %s\n\n", bloqueado ? "Sim" : "Nao");

    // Exercicio 4
    int vetor_aleatorio[30];
    int seq_cresc, pos_ini, repetido;

    preencher_aleatorio(vetor_aleatorio, 30);
    analisar_vetor(vetor_aleatorio, 30, &seq_cresc, &pos_ini, &repetido);

    printf("04: Vetor Aleatorio\n");
    printf("Vetor gerado: ");
    for (int i = 0; i < 30; i++)
        printf("%d ", vetor_aleatorio[i]);
    printf("\n");
    printf("Qtd de sequencias crescentes (tamanho >= 3): %d\n", seq_cresc);
    printf("Posicao inicial da primeira sequencia: %d\n", pos_ini);
    printf("Existem valores repetidos vizinhos? %s\n\n", repetido ? "Sim" : "Nao");

    // Exercicio 5
    int N5 = 5;
    float resultado_serie = calcular_serie_harmonica(N5);
    printf("05: Serie Harmonica\n");
    printf("A soma da serie harmonica para N = %d eh: %.4f\n\n", N5, resultado_serie);

    // Exercicio 6
    int base = 2, expoente = 5;
    int potencia = calcular_potencia(base, expoente);
    printf("06: Calculo de Potencia\n");
    printf("%d elevado a %d eh: %d\n\n", base, expoente, potencia);

    // Exercicio 7
    int N7 = 4; // 1^2 + 2^2 + 3^2 + 4^2 = 1 + 4 + 9 + 16 = 30
    int pontuacao = calcular_pontuacao_acumulada(N7);
    printf("07: Pontuacao Acumulada\n");
    printf("Pontuacao acumulada para etapa %d eh: %d\n\n", N7, pontuacao);

    // Exercicio 8
    int N8 = 5; // 1 * 2 * 3 * 4 * 5 = 120
    long long exp = crescimento_experiencia(N8);
    printf("08: Crescimento de Experiencia\n");
    printf("Experiencia acumulada para etapa %d eh: %lld\n\n", N8, exp);

    // Exercicio 9
    int temperaturas[30] = {12, -3, 0, 5, 20, -1, -5, 0, 10, 8, -2, -10, 15, 3, 0, -4, 25, 6, 0, -7, 18, 9, -2, -1, 4, 11, 0, 2, -6, 14};
    int temp_A[30], temp_B[30];
    int qtd_A, qtd_B;
    separar_temperaturas(temperaturas, 30, temp_A, temp_B, &qtd_A, &qtd_B);
    printf("09: Separacao de Temperaturas\n");
    printf("Quantidade de registros maiores que zero: %d\n", qtd_A);
    printf("Quantidade de registros menores ou iguais a zero: %d\n\n", qtd_B);

    // Exercicio 10
    float matriz[10][5];
    receber_matriz(matriz);
    float soma_matriz = calcular_soma_matriz(matriz);
    printf("10: Soma de Elementos na Matriz\n");
    printf("Soma dos elementos abaixo da 6a linha (linhas 7 a 10): %.2f\n\n", soma_matriz);

    return 0;
}