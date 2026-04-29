// LISTA DE EXERCICIOS 05 - Funções e Ponteiros
// RA: 22013871 -  Guilherme Domingues de Sousa
// RA: 22010825 - Rafael Lanza de Queiroz



#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void simular_robo(int corredor[], int tam, int *chegou_destino, int *posicao_parada, int *energia_restante) {
    int energia = 3; 
    *chegou_destino = 0; 
    int i;
    for (i = 0; i < tam; i++) {
        if (energia <= 0) {
            i--;
            break;
        }
        energia--;
        if (corredor[i] == 1) {
            break;
        } else if (corredor[i] == 2) {
            energia += 3;
        } else if (corredor[i] == 3) {
            *chegou_destino = 1;
            break;
        }
    }
    if (i == tam) {
        *posicao_parada = tam - 1;
    } else if (i < 0) {
        *posicao_parada = 0;
    } else {
        *posicao_parada = i;
    }
    
    *energia_restante = energia;
}

void disputa_rodadas(int jogador1[], int jogador2[], int tam, int *venceuMais, int *houveEmpate, int *mudaLideranca) {
    *houveEmpate = 0;
    *venceuMais = 0;
    *mudaLideranca = -1;
    int placarJogador1 = 0, placarJogador2 = 0, liderAnterior = 0,liderAtual = 0;

    for (int i = 0; i < tam; i++) {
        if (jogador1[i] > jogador2[i]) {
            placarJogador1++;
        } else if (jogador2[i] > jogador1[i]) {
            placarJogador2++;
        }
        if (placarJogador1 > placarJogador2) {
            liderAtual = 1;
        } else if (placarJogador2 > placarJogador1) {
            liderAtual = 2;
        } else {
            liderAtual = 0;
        }
        if (liderAnterior != 0 && liderAtual != 0 && liderAnterior != liderAtual && *mudaLideranca == -1) {
            *mudaLideranca = i;
        }
        if (liderAtual != 0) {
            liderAnterior = liderAtual;
        }
    }
    if (placarJogador1 > placarJogador2) {
        *venceuMais = 1;
    } else if (placarJogador2 > placarJogador1) {
        *venceuMais = 2;
    } else {
        *houveEmpate = 1;
    }
}

void classificar_pedidos(float valores[], int pagamentos[], int enderecos[], int tam, int *expedicao, int *revisao, int *bloqueado) {
    *expedicao = 0;
    *revisao = 0;
    *bloqueado = 0;

    for (int i = 0; i < tam; i++) {
        if (pagamentos[i] == 1 && enderecos[i] == 1) {
            (*expedicao)++;
        } 
        else if (pagamentos[i] == 0 && enderecos[i] == 0) {
            *bloqueado = 1;
        } 
        else {
            (*revisao)++;
        }
    }
}

void preencher_aleatorio(int vetor[], int tam) {
    for (int i = 0; i < tam; i++) {
        vetor[i] = (rand() % 100) + 1;
    }
}

void analisar_vetor(int vetor[], int tam, int *seq_crescentes, int *pos_inicial, int *tem_repetido) {
    *seq_crescentes = 0;
    *pos_inicial = -1;
    *tem_repetido = 0;
    int tamanho_seq_atual = 1;

    for (int i = 0; i < tam - 1; i++) {
        if (vetor[i] == vetor[i+1]) {
            *tem_repetido = 1;
        }
        if (vetor[i+1] > vetor[i]) {
            tamanho_seq_atual++;
            if (tamanho_seq_atual == 3) {
                (*seq_crescentes)++;
                if (*pos_inicial == -1) {
                    *pos_inicial = i - 1;
                }
            }
        } else {
            tamanho_seq_atual = 1;
        }
    }
}

float calcular_serie_harmonica(int N) {
    float soma = 0.0;
    for (int i = 1; i <= N; i++) {
        soma += 1.0 / i;
    }
    return soma;
}

int main() {
    //Exericio 1
    int corredor[20] = {0, 2, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3};
    int chegou_destino;
    int posicao_parada;
    int energia_restante;
    simular_robo(corredor, 20, &chegou_destino, &posicao_parada, &energia_restante);

    printf("--- Teste do Robo (Cenario com obstaculo) ---\n");
    if (chegou_destino) {
        printf("Status: O robo ALCANCOU o destino!\n");
    } else {
        printf("Status: O robo NAO conseguiu concluir o percurso.\n");
    }
    printf("Posicao de parada: Indice %d\n", posicao_parada);
    printf("Energia restante: %d unidades\n\n", energia_restante);
    
    
    //Exercicio 2
    int jogador1[10] = {8, 5, 6, 7, 3, 9, 4, 8, 2, 10};
    int jogador2[10] = {5, 5, 9, 8, 4, 2, 7, 6, 2, 9};
    int tam = 10, venceuMais, houveEmpate, mudaLideranca;
    disputa_rodadas(jogador1, jogador2, tam, &venceuMais, &houveEmpate, &mudaLideranca);
    
    printf("--- Resultado do Torneio de Cartas ---\n");
    if (houveEmpate == 1) {
        printf("Vencedor: Houve um Empate Geral!\n");
    } else {
        printf("Vencedor: Jogador %d venceu mais rodadas.\n", venceuMais);
    }
    if (mudaLideranca != -1) {
        printf("Primeira mudanca de lideranca: Ocorreu na Rodada %d (indice %d).\n", mudaLideranca + 1, mudaLideranca);
    } else {
        printf("Primeira mudanca de lideranca: Nao houve mudanca de lideranca no placar acumulado.\n");
    }
    
    
    //Exercicio 3
    srand(time(NULL));
    float valores[10] = {100.5, 200.0, 50.0, 300.0, 150.0, 80.0, 90.0, 400.0, 60.0, 120.0};
    int pagamentos[10] = {1, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    int enderecos[10]  = {1, 0, 1, 1, 0, 1, 0, 1, 0, 1};
    int expedicao, revisao, bloqueado;
    classificar_pedidos(valores, pagamentos, enderecos, 10, &expedicao, &revisao, &bloqueado);
    
    printf("Pedidos para expedicao: %d\n", expedicao);
    printf("Pedidos para revisao manual: %d\n", revisao);
    printf("Existe pedido bloqueado? %s\n\n", bloqueado ? "Sim" : "Nao");


    //Exercicio 4
    int vetor_aleatorio[30];
    int seq_cresc, pos_ini, repetido;
    
    preencher_aleatorio(vetor_aleatorio, 30);
    analisar_vetor(vetor_aleatorio, 30, &seq_cresc, &pos_ini, &repetido);
    
    printf("Vetor gerado: ");
    for(int i = 0; i < 30; i++) printf("%d ", vetor_aleatorio[i]);
    printf("\n");
    printf("Qtd de sequencias crescentes (tamanho >= 3): %d\n", seq_cresc);
    printf("Posicao inicial da primeira sequencia: %d\n", pos_ini);
    printf("Existem valores repetidos vizinhos? %s\n\n", repetido ? "Sim" : "Nao");


    //Exercicio 5
    int N = 5;
    float resultado_serie = calcular_serie_harmonica(N);
    printf("A soma da serie harmonica para N = %d eh: %.4f\n", N, resultado_serie);

    return 0;
}