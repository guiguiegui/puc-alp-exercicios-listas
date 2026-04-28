// GUILHERME DOMINGUES DE SOUSA - 22013871
// RAFAEL LANZA DE QUIEROZ - 22010825

#include <stdio.h>
#include <string.h>

typedef struct Livro {
    int codigo;
    char titulo[30];
    int quantidade;
    int statusEmprestimo;
} Livro;

void criarLivros (Livro *livro, int codigo, char titulo[30], int quantidade, int statusEmprestimo){
    livro->codigo = codigo;
    strcpy(livro->titulo, titulo);
    livro->quantidade = quantidade;
    livro->statusEmprestimo = statusEmprestimo;   
}

void isEmprestado (Livro *livro, int statusEmprestimo){
    if (livro->statusEmprestimo == 0) {
        livro->statusEmprestimo = 1;
    }
}

void isDisponivel (Livro *livro, int statusEmprestimo){
    if (livro->statusEmprestimo == 1) {
        livro->statusEmprestimo = 0;
    }
}

int buscarLivro (Livro livros[5], int codigoBusca){
    for (int i = 0; i < 5; i++) {
        if (livros[i].codigo == codigoBusca) {
            Livro * livroEncontrado = &livros[i];        
        }
    }
    return NULL;  
}

typedef struct Jogador {
    char nome[30];
    float pontuacao;
    int qtdVitorias;
    int qtdDerrotas;
} Jogador;

void criarJogador (Jogador *jogador, char nome[30], float pontuacao, int vitorias, int derrotas){
    strcpy(jogador->nome, nome);
    jogador->pontuacao = pontuacao;
    jogador->qtdVitorias = vitorias;
    jogador->qtdDerrotas = derrotas;
}

void atualizarPontuacaoResultado (Jogador *jogador, float pontuacao, int resultado){
    if (resultado == 0) {
        jogador->qtdDerrotas++; 
        jogador->pontuacao += resultado;
    }
    else {
        jogador->qtdVitorias++;
        jogador->pontuacao += resultado;
    } 
}

void trocarDados (Jogador *jogador1, Jogador *jogador2){
    Jogador aux = *jogador1;
    *jogador1 = *jogador2;
    *jogador2 = aux;
}

int main() {
    
}