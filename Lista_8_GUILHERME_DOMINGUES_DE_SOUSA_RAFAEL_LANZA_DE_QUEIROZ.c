// LISTA DE EXERCICIOS 08 - Funções e PonteirosAlocação Dinâmica
// RA: 22013871 -  Guilherme Domingues de Sousa
// RA: 22010825 - Rafael Lanza de Queiroz

/*
===============================================================================
Album de Figurinhas da Copa

Durante a Copa do Mundo de 2026, uma pessoa esta organizando seu album de figurinhas.

Cada figurinha possui:

- numero da figurinha;
- nome do jogador;
- selecao;
- quantidade de vezes que a figurinha aparece no album;
- indicacao se a figurinha eh especial. (1 para especial, 0 para normal)

A partir do codigo-base abaixo, complete o programa criando as funcoes que faltam
e fazendo as chamadas corretas na funcao main.

O programa deve:

1) Alocar dinamicamente um vetor de figurinhas.
2) Copiar para esse vetor dinamico as figurinhas ja fornecidas no main.
3) Imprimir todas as figurinhas do album.
4) Calcular e imprimir a quantidade total de figurinhas repetidas.
5) Calcular e imprimir quantas figurinhas pertencem a uma determinada selecao.

A quantidade de figurinhas repetidas deve ser calculada considerando que:

    se quantidade > 1, entao repetidas = quantidade - 1

Exemplo:

    quantidade = 4

Significa que a pessoa tem 1 figurinha para o album e 3 repetidas.

A funcao que conta as figurinhas especiais deve retornar a quantidade de
figurinhas cujo campo especial seja igual a 1.

Observacoes:

- O vetor inicial ja esta preenchido dentro da funcao main.
- As funcoes devem acessar os campos da struct usando o vetor.
  Exemplo: album[i].nomeJogador, album[i].quantidade, album[i].especial.
===============================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Figurinha{
 // preencher com campos da struct

} Figurinha;

/* Prototipos das funcoes */
Figurinha* alocarAlbum(int tamanho);
void copiarFigurinhas(Figurinha *album, Figurinha figurinhasProntas[], int tamanho);
void imprimirAlbum(Figurinha *album, int tamanho);
int contarFigurinhasRepetidas(Figurinha *album, int tamanho);
int contarFigurinhasPorSelecao(Figurinha *album, int tamanho, char selecao[]);

int main() {
    int tamanho = 8;
    Figurinha *album; // ponteiro para o vetor dinamico de figurinhas

    int totalRepetidas; // variavel para armazenar o total de figurinhas repetidas
    int totalBrasil; // variavel para armazenar o total de figurinhas da selecao Brasil

    Figurinha figurinhasProntas[8] = {
        {17, "De_Bruyne", "Belgica", 3, 1},
        {30, "Messi", "Argentina", 2, 1},
        {7, "Cristiano_Ronaldo", "Portugal", 4, 1},
        {10, "Mbappe", "Franca", 1, 1},
        {1, "Alisson", "Brasil", 2, 0},
        {8, "Modric", "Croacia", 1, 1},
        {5, "Casemiro", "Brasil", 5, 0},
        {9, "Kane", "Inglaterra", 2, 0}
    };

    /*
        Chame a funcao que aloca dinamicamente o vetor de figurinhas
        e armazene o retorno na variavel album.
    */



    /*
        Chame a funcao que copia as figurinhas prontas para o vetor dinamico.
    */



    /*
        Chame a funcao que imprime todas as figurinhas do album.
    */



    /*
        Chame a funcao que conta a quantidade total de figurinhas repetidas
        e armazene o retorno na variavel totalRepetidas.
    */



    printf("\nTotal de figurinhas repetidas: %d\n", totalRepetidas);

    /*
        Chame a funcao que conta quantas figurinhas sao da selecao Brasil
        e armazene o retorno na variavel totalBrasil.
    */

    printf("Total de figurinhas da selecao Brasil: %d\n", totalBrasil);

    /*
        Libere a memoria alocada dinamicamente.
    */



    return 0;
}




//============= FUNCOES =============

/*
    Recebe o tamanho do vetor.

    - A funcao deve alocar dinamicamente um vetor de Figurinha
    com a quantidade de posicoes informada.
    - A funcao deve retornar o ponteiro para o vetor alocado.
*/
Figurinha* alocarAlbum(int tamanho) {

}

/*
    Recebe:
    - um ponteiro para o vetor dinamico album;
    - um vetor com as figurinhas prontas;
    - o tamanho do vetor.

    - A funcao deve copiar todas as figurinhas do vetor figurinhasProntas
    para o vetor dinamico album.
*/
void copiarFigurinhas(Figurinha *album, Figurinha figurinhasProntas[], int tamanho) {

}

/*
    Recebe:
    - um ponteiro para o vetor dinamico album;
    - o tamanho do vetor.
    - A funcao deve imprimir todas as figurinhas cadastradas no album.

    Para acessar os campos, use o vetor.
    Exemplo:

        album[i].numero
        album[i].nomeJogador
        album[i].selecao
        album[i].quantidade
        album[i].especial
*/
void imprimirAlbum(Figurinha *album, int tamanho) {

}

/*
    Recebe:
    - um ponteiro para o vetor dinamico album;
    - o tamanho do vetor.

    - A funcao deve retornar a quantidade total de figurinhas repetidas no álbum inteiro.

*/
int contarFigurinhasRepetidas(Figurinha *album, int tamanho) {

}

/*
    Recebe:
    - um ponteiro para o vetor dinamico album;
    - o tamanho do vetor;
    - o nome de uma selecao.

    - A funcao deve retornar quantas figurinhas pertencem a essa selecao.

    Para comparar strings, use strcmp.
*/
int contarFigurinhasPorSelecao(Figurinha *album, int tamanho, char selecao[]) {

}
