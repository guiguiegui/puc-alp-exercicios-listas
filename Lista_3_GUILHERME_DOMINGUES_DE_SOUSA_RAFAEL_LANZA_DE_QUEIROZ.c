// LISTA DE EXERCICIOS 03 - Estruturas de Repetição
// RA: 22013871 -  Guilherme Domingues de Sousa
// RA: 22010825 - Rafael Lanza de Queiroz
#include <stdio.h>

void exercicio01() {
    float precoInicial = 50.0, reducao = 5.0;
    int qtdInicial = 100;
    
    while (precoInicial != 20.0) {
        precoInicial-= reducao;
        qtdInicial+= 20;
        printf("Preço -> R$ %.2f\n", precoInicial);
        printf("Quantidade vendida -> %d\n", qtdInicial);
        printf("Faturamento -> %.2f\n\n", precoInicial * qtdInicial);        
    }
}

void exercicio02() {
    float investimento = 0.0, soma = 0.0;
    int meses = 0;
    
    
    while (soma < 10000) {
        printf("Digite o valor do %dº mês: ", meses + 1);
        scanf("%f", &investimento);
        soma += investimento;
        meses++;
    }
    
    printf("Demorou %d meses para atingir pelo menos R$ 10.000,00\n", meses);
}

void exercicio03() {
    int idade = 0, adolescente = 0, jovemAdulto = 0, adulto = 0;
    for (int i = 0; i < 15; i++) {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        
        if (idade < 18) adolescente++;
        else if (idade <= 40) jovemAdulto++;
        else adulto++;
    }
    printf("Quantidade de pessoas que tem idade de até 18 anos -> %d\n", adolescente);
    printf("Quantidade de pessoas que tem idade entre 19 a 40 anos -> %d\n", jovemAdulto);
    printf("Quantidade de pessoas que tem mais de 40 anos -> %d\n", adulto);
}

void exercicio04() {
    int habitantes = 100, cont = 0;
    float crescimento = 1.10;
    while (habitantes <= 500) {
        habitantes *= crescimento;
        printf("Crescimento de habitantes no %dº ano -> %d\n", cont + 1, habitantes);
        cont++;   
    }
    printf("\nForam necessários %d anos para ultrapassar 500 habitantes\n", cont);
}

void exercicio05() {
    int op = 0, praia = 0, montanha = 0, cidade = 0;
    
    for (int i = 0; i < 20; i++) {
        printf("\t\tMENU|\n\n1 - PRAIA\n2 - MONTANHA\n3 - CIDADE\n\nEscolha sua preferencia: ");
        scanf("%d", &op);
        
        switch (op) {
            case 1:
            praia++;
            break;
            
            case 2:
            montanha++;
            break;
            
            case 3:
            cidade++;
            break;
            
            default:
            printf("ERRO: Selecione uma opção válida!\n");
            i--;
        }
        printf("%d pessoas escolheram a PRAIA\n", praia);
        printf("%d pessoas escolheram a MONTANHA\n", montanha);
        printf("%d pessoas escolheram a CIDADE\n\n", cidade);
        
        if (praia > montanha && praia > cidade) {
            printf("O mais escolhido foi a praia!\n");        
        } else if (montanha > praia && montanha > cidade) {
            printf("O mais escolhido foi a montanha!\n");
        } else {
            printf("O mais escolhido foi a cidade!\n");
        }
    }
}

void exercicio06() {
    float litros = 50.0, consumo = 0.0;
    int qtdTrechos = 0;
    
    while (litros > 0.0) {
        printf("Digite o consumo do trecho: ");
        scanf("%f", &consumo);
        litros-= consumo;
        if (litros >= 0) printf("Combustivel restante -> %.1f\n\n", litros);
        qtdTrechos++;
    }
    printf("\nForam feitos %d trechos\n\n", qtdTrechos);
}

void exercicio07() {
    int hrsGravacao = 0, hrsEdicao = 0, totalGravacao = 0, totalEdicao = 0, qtd = 0;;
    
    for (int i = 0; i < 8; i++) {
        printf("Digite as horas de gravação do %d episodio: ", i + 1);
        scanf("%d", &hrsGravacao);
        printf("Digite as horas de edição do %d episodio: ", i + 1);
        scanf("%d", &hrsEdicao);
        
        totalGravacao += hrsGravacao;
        totalEdicao += hrsEdicao;
        
        if (hrsEdicao > hrsGravacao) qtd++;
    }
    printf("Total de horas gravadas -> %d\n", totalGravacao);
    printf("Total de horas editadas -> %d\n", totalEdicao);
    printf("Episodios que tiveram mais edição do que gravação -> %d\n\n", qtd);
}

void exercicio08() {
    for (int i = 500; i <= 1500; i++) {
        if (i % 9 == 4) printf("Número especial -> %d\n", i);
    }
}



#include <stdio.h>
int main() {
    int op;
    do {
        printf("Digite o numero de um exercicio: ");
        scanf("%d", &op);
        
        switch (op) {
            case 1:
            exercicio01();
            break;
            
            case 2:
            exercicio02();
            break;
            
            case 3:
            exercicio03();
            break;
            
            case 4:
            exercicio04();
            break;
            
            case 5:
            exercicio05();
            break;
            
            case 6:
            exercicio06();
            break;
            
            case 7:
            exercicio07();
            break;
            
            case 8:
            exercicio08();
            break;
        }
    } while (op != 0);
    
    return 0;
}