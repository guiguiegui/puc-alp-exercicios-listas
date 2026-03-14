// LISTA DE EXERCICIOS 02 - Estruturas de Decisão
// RA: 22013871 -  Guilherme Domingues de Sousa
// RA: 22010825 - Rafael Lanza de Queiroz

#include <stdio.h>
#include <math.h>


void exercicio09() {
    float a, b, c, delta, x1, x2;
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    delta = (b * b) - (4 * a * c);
    printf("O valor de delta é %f\n", delta);

    if (delta >= 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("O valor da raiz x1 é %f\n", x1);
        printf("O valor da raiz x2 é %f\n", x2);
    }
    else {
        printf("Delta negativo! Impossivel obter duas raizes reais\n");
    }
}

void exercicio10() {
    float ph;
    printf("Digite o valor do ph: ");
    scanf("%f", &ph);

    if (ph < 7) {
        printf("ACIDA\n");
    }
    else if (ph == 7) {
        printf("NEUTRA\n");
    }
    else {
        printf("BASICA\n");
    }
}

void exercicio11() {
    int o, c;
    printf("Digite 1 para SIM e 0 para NÃO\n");
    printf("Há combustivel?");
    scanf("%d", &c);
    printf("Há oxigenio?");
    scanf("%d", &o);

    if (c < 0 || c > 1 || o < 0 || o > 1){
        printf("ERRO: DIGITE UM NUMERO ENTRE 0 OU 1\n");
    }
    else if (c == 1 && o == 1) {
        printf("COMBUSTÃO POSSÍVEL\n");
    }
    else {
        printf("COMBUSTÃO IMPOSSÍVEL\n");
    }
}

void exercicio12() {
    int umidade, luz;

    printf("Digite o valor da umidade: ");
    scanf("%d", &umidade);
    printf("Digite o valor da luminosidade: ");
    scanf("%d", &luz);

    if (umidade >= 60 && luz >= 4 && luz <= 8){
        printf("HABITAT ADEQUADO\n");
    } else {
        printf("HABITAT INADEQUADO\n");
    }
}

void exercicio13() {
    float temperatura, pressao;
    printf("Digite o valor da temperatura: ");
    scanf("%f", &temperatura);
    printf("Digite o valor da pressão: ");
    scanf("%f", &pressao);

    if (temperatura < 50 || pressao <= 2){
        printf("USO LIBERADO\n");
    } else {
        printf("USO NÃO LIBERADO\n");
    }
}

void exercicio14() {
    int porte;
    printf("Digite um código de porte: ");
    scanf("%d", &porte);

    switch (porte) {
        case 1:
        printf("PEQUENO\n");
        break;

        case 2:
        printf("MEDIO\n");
        break;

        case 3:
        printf("GRANDE\n");
        break;

        case 4:
        printf("GIGANTE\n");
        break;

        default:
        printf("CODIGO INVALIDO\n");
    }
}

void exercicio15() {
    int batimentos;
    printf("Informe os batimentos cardiacos: ");
    scanf("%d", &batimentos);
    
    if (batimentos < 50 || batimentos > 120) {
        printf("SITUAÇÃO DE ALERTA\n");
    }
    else {
        printf("DENTRO DO ESPERADO\n");
    }    
}

void exercicio16() {
    int ceu, umidade;
    printf("O ceu esta limpo? Digite 1 para SIM ou 0 para NÃO: ");
    scanf("%d", &ceu);
    printf("Digite o valor da umidade: ");
    scanf("%d", &umidade);
    
    if (ceu < 0 || ceu > 1) {
        printf("ERRO: DIGITE UM VALOR ENTRE 0 OU 1\n");
    }
    else if (ceu == 1  && umidade < 70) {
        printf("OBSERVACAO FAVORAVEL\n"); 
    }
    else {
        printf("OBSERVACAO DESFAVORAVEL\n");
    }
}


int main(){
    int op;

    do {
        printf("Digite o número do exercicio: ");
        scanf("%d", &op);

        switch (op) {
            case 9:
            exercicio09();
            break;
            
            case 10:
            exercicio10();
            break;
            
            case 11:
            exercicio11();
            break;
            
            case 12:
            exercicio12();
            break;
            
            case 13:
            exercicio13();
            break;
            
            case 14:
            exercicio14();
            break;
            
            case 15:
            exercicio15();
            break;
            
            case 16:
            exercicio16();
            break;
        }
    } while (op != 0);

}
