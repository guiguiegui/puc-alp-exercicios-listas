// LISTA DE EXERCICIOS 09 - Matrizes Dinâmicas
// RA: 22013871 -  Guilherme Domingues de Sousa
// RA: 22010825 - Rafael Lanza de Queiroz

/*
===============================================================================
Placar de Powerlifting

Durante uma competicao de powerlifting, alguns atletas participaram de uma prova
composta por tres levantamentos principais.

Uma matriz armazena a maior carga valida, em kg, levantada por cada atleta em cada
levantamento.

Cada linha da matriz representa um atleta.
Cada coluna da matriz representa um levantamento.

Os levantamentos sao:

0 - Agachamento
1 - Supino
2 - Deadlift

A partir do codigo-base abaixo, complete o programa criando as funcoes que faltam
e fazendo as chamadas corretas na funcao main.

O programa deve:

1) Ler a quantidade de atletas da competicao.
2) Alocar dinamicamente uma matriz de inteiros.
3) Ler as cargas dos atletas e armazenar na matriz dinamica.
4) Imprimir todas as cargas da competicao.
5) Calcular e imprimir o total levantado por um determinado atleta.
6) Calcular e imprimir quantos atletas levantaram pelo menos uma carga minima
   em um determinado levantamento.
7) Liberar a memoria alocada dinamicamente.

Exemplo:

    Se o levantamento escolhido for Deadlift e a carga minima for 180,
    a funcao deve contar quantos atletas levantaram 180 kg ou mais no deadlift.

Observacoes:

- As cargas devem ser lidas pelo teclado.
- As funcoes devem acessar os valores da matriz usando:

        cargas[i][j]

===============================================================================
*/

#include <stdio.h>
#include <stdlib.h>

/* Prototipos das funcoes */
int** alocarMatriz(int linhas, int colunas);
void lerCargas(int **matriz, int linhas, int colunas);
void imprimirCargas(int **matriz, int linhas, int colunas);
int calcularTotalAtleta(int **matriz, int colunas, int indiceAtleta);
int contarAtletasAcimaMinimo(int **matriz, int linhas, int indiceLevantamento, int minimo);
void liberarMatriz(int **matriz, int linhas);

int main() {
    int qtdAtletas;
    int qtdLevantamentos = 3;

    int **cargas; // matriz dinamica de cargas

    int totalAtleta;
    int atletasAcimaMinimo;

    printf("Digite a quantidade de atletas: ");
    scanf("%d", &qtdAtletas);

    /*
        Chame a funcao que aloca dinamicamente a matriz de cargas
        e armazene o retorno na variavel cargas.
    */
    cargas = alocarMatriz(qtdAtletas, qtdLevantamentos);

    /*
        Chame a funcao que le as cargas dos atletas e armazena
        os valores na matriz dinamica.
    */
    lerCargas(cargas, qtdAtletas, qtdLevantamentos);

    /*
        Chame a funcao que imprime todas as cargas da competicao, para cada atleta.
    */

    /*
        Chame a funcao que calcula o total levantado pelo atleta de indice 1
        e armazene o retorno na variavel totalAtleta.
    */

    printf("\nTotal levantado pelo atleta 1: %d kg\n", totalAtleta);

    /*
        Chame a funcao que conta quantos atletas levantaram pelo menos 180 kg
        no levantamento de indice 2, ou seja, Deadlift.

        Armazene o retorno na variavel atletasAcimaMinimo.
    */

    printf("Atletas com pelo menos 180 kg no deadlift: %d\n", atletasAcimaMinimo);

    /*
        Chame a função que Libera a memoria alocada dinamicamente.
    */

    cargas = NULL; 

    return 0;
}



//============= FUNCOES =============

/*
    Recebe:
    - a quantidade de linhas;
    - a quantidade de colunas.

    A funcao deve alocar dinamicamente uma matriz de inteiros.

    A funcao deve retornar o ponteiro para a matriz alocada.
*/
int** alocarMatriz(int linhas, int colunas) {
    int** matriz = malloc(linhas * sizeof(int *));
    if (!matriz) {
        printf("ERRO! Matriz não alocado dinamicamente");
        return NULL;
    }
    for (int i = 0; i < linhas; i++) {
        matriz[i] = malloc(colunas * sizeof(int));
    
    }
    return matriz;
}

/*
    Recebe:
    - uma matriz dinamica;
    - a quantidade de linhas;
    - a quantidade de colunas.

    A funcao deve ler pelo teclado as cargas dos atletas e armazenar
    os valores na matriz dinamica.

    Os levantamentos devem ser lidos na seguinte ordem:

    0 - Agachamento
    1 - Supino
    2 - Deadlift
*/
void lerCargas(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (j == 0){
                printf("Digite a carga do agachamento do %dº atleta: ", i + 1);
                scanf("%d", &matriz[i][j]);
            }
            else if (j == 1) {
                printf("Digite a carga do supino do %dº atleta: ", i + 1);
                scanf("%d", &matriz[i][j]);
            }
            else {
                printf("Digite a carga do deadlift do %dº atleta: ", i + 1);
                scanf("%d", &matriz[i][j]);
            }            
        }
    }
}

/*
    Recebe:
    - uma matriz dinamica;
    - a quantidade de linhas;
    - a quantidade de colunas.

    A funcao deve imprimir todas as cargas da competicao, para cada atleta (linha).

*/
void imprimirCargas(int **matriz, int linhas, int colunas) {

}

/*
    Recebe:
    - uma matriz dinamica;
    - a quantidade de colunas;
    - o indice de um atleta.

    A funcao deve retornar o total levantado pelo atleta informado.

    Exemplo:

        indiceAtleta = 1

    A funcao deve somar todos os valores da linha 1.
*/
int calcularTotalAtleta(int **matriz, int colunas, int indiceAtleta) {

}

/*
    Recebe:
    - uma matriz dinamica;
    - a quantidade de linhas;
    - o indice de um levantamento;
    - uma carga minima.

    A funcao deve retornar quantos atletas levantaram pelo menos a carga
    minima no levantamento informado.

    Exemplo:

        indiceLevantamento = 2
        minimo = 180

    A funcao deve contar quantos atletas levantaram 180 kg ou mais no deadlift.
*/
int contarAtletasAcimaMinimo(int **matriz, int linhas, int indiceLevantamento, int minimo) {

}

/*
    Recebe:
    - uma matriz dinamica;
    - a quantidade de linhas.

    A funcao deve liberar toda a memoria alocada dinamicamente para a matriz. (não precisa apontar para NULL, já que isso é feito na main)
*/
void liberarMatriz(int **matriz, int linhas) {

}