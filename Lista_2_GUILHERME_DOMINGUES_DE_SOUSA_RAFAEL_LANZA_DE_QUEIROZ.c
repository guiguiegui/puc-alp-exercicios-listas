// LISTA DE EXERCICIOS 02 - Estruturas de Decisão
// RA: 22013871 -  Guilherme Domingues de Sousa
// RA: 22010825 - Rafael Lanza de Queiroz

#include <stdio.h>
#include <math.h>

void exercicio01()
{
    float salario, bonus, salario_final;
    printf("Digite o valor do salario: ");
    scanf("%f", &salario);
    if (salario > 5000)
    {
        bonus = salario * 0.05;
        salario_final = salario + bonus;
    }
    else if (salario < 5000 && salario > 2000)
    {
        bonus = salario * 0.1;
        salario_final = salario + bonus;
    }
    else
    {
        bonus = salario * 0.2;
        salario_final = salario + bonus;
    }
    printf("O bonus e: %.1f e o salario final e: %.1f.", bonus, salario_final);
}

void exercicio02()
{
    float a, b, c;
    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b)
    {
        if (a == b && b == c)
        {
            printf("Classificacao: EQUILATERO\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("Classificacao: ISOSCELES\n");
        }
        else
        {
            printf("Classificacao: ESCALENO\n");
        }
    }
    else
    {
        printf("Os valores informados nao formam um triangulo.\n");
    }
}

void exercicio03()
{
    int codigo;
    printf("Digite o codigo do produto (1 a 12): ");
    scanf("%d", &codigo);

    if (codigo >= 1 && codigo <= 4)
    {
        printf("Categoria: ALIMENTICIO\n");
    }
    else if (codigo >= 5 && codigo <= 8)
    {
        printf("Categoria: LIMPEZA\n");
    }
    else if (codigo >= 9 && codigo <= 12)
    {
        printf("Categoria: ELETRONICO\n");
    }
    else
    {
        printf("CODIGO INVALIDO\n");
    }
}

void exercicio04()
{
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade <= 12)
    {
        printf("Classificacao: CRIANCA\n");
    }
    else if (idade >= 13 && idade <= 17)
    {
        printf("Classificacao: ADOLESCENTE\n");
    }
    else if (idade >= 18 && idade <= 59)
    {
        printf("Classificacao: ADULTO\n");
    }
    else
    {
        printf("Classificacao: IDOSO\n");
    }
}

void exercicio05()
{
    float preco, novoPreco, aumento;
    int categoria;

    printf("Digite o preco atual: ");
    scanf("%f", &preco);
    printf("Digite a categoria (1-Basico, 2-Premium, 3-Luxo): ");
    scanf("%d", &categoria);

    if (preco <= 100.00)
    {
        if (categoria == 1)
            aumento = 0.05;
        else if (categoria == 2)
            aumento = 0.08;
        else
            aumento = 0.10;
    }
    else
    {
        if (categoria == 1)
            aumento = 0.12;
        else if (categoria == 2)
            aumento = 0.15;
        else
            aumento = 0.20;
    }

    novoPreco = preco + (preco * aumento);
    printf("O novo preco e: R$ %.2f\n", novoPreco);
}

void exercicio06()
{
    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
    {
        printf("O ano %d e BISSEXTO.\n", ano);
    }
    else
    {
        printf("O ano %d NAO E BISSEXTO.\n", ano);
    }
}

void exercicio07()
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("O numero e PAR ");
    else
        printf("O numero e IMPAR ");

    if (num > 0)
        printf("e POSITIVO.\n");
    else if (num < 0)
        printf("e NEGATIVO.\n");
    else
        printf("e NEUTRO (Zero).\n");
}

void exercicio08()
{
    float recompensaBase, bonus, valorFinal;

    printf("Digite a recompensa base: ");
    scanf("%f", &recompensaBase);

    if (recompensaBase <= 1000.00)
    {
        bonus = 500.00;
    }
    else if (recompensaBase <= 2000.00)
    {
        bonus = 350.00;
    }
    else if (recompensaBase <= 3000.00)
    {
        bonus = 180.00;
    }
    else
    {
        bonus = 100.00;
    }

    valorFinal = recompensaBase + bonus - (0.07 * recompensaBase);
    printf("O valor final a receber e: R$ %.2f\n", valorFinal);
}

void exercicio09()
{
    float a, b, c, delta, x1, x2;
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    delta = (b * b) - (4 * a * c);
    printf("O valor de delta é %f\n", delta);

    if (delta >= 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("O valor da raiz x1 é %f\n", x1);
        printf("O valor da raiz x2 é %f\n", x2);
    }
    else
    {
        printf("Delta negativo! Impossivel obter duas raizes reais\n");
    }
}

void exercicio10()
{
    float ph;
    printf("Digite o valor do ph: ");
    scanf("%f", &ph);

    if (ph < 7)
    {
        printf("ACIDA\n");
    }
    else if (ph == 7)
    {
        printf("NEUTRA\n");
    }
    else
    {
        printf("BASICA\n");
    }
}

void exercicio11()
{
    int o, c;
    printf("Digite 1 para SIM e 0 para NÃO\n");
    printf("Há combustivel?");
    scanf("%d", &c);
    printf("Há oxigenio?");
    scanf("%d", &o);

    if (c < 0 || c > 1 || o < 0 || o > 1)
    {
        printf("ERRO: DIGITE UM NUMERO ENTRE 0 OU 1\n");
    }
    else if (c == 1 && o == 1)
    {
        printf("COMBUSTÃO POSSÍVEL\n");
    }
    else
    {
        printf("COMBUSTÃO IMPOSSÍVEL\n");
    }
}

void exercicio12()
{
    int umidade, luz;

    printf("Digite o valor da umidade: ");
    scanf("%d", &umidade);
    printf("Digite o valor da luminosidade: ");
    scanf("%d", &luz);

    if (umidade >= 60 && luz >= 4 && luz <= 8)
    {
        printf("HABITAT ADEQUADO\n");
    }
    else
    {
        printf("HABITAT INADEQUADO\n");
    }
}

void exercicio13()
{
    float temperatura, pressao;
    printf("Digite o valor da temperatura: ");
    scanf("%f", &temperatura);
    printf("Digite o valor da pressão: ");
    scanf("%f", &pressao);

    if (temperatura < 50 || pressao <= 2)
    {
        printf("USO LIBERADO\n");
    }
    else
    {
        printf("USO NÃO LIBERADO\n");
    }
}

void exercicio14()
{
    int porte;
    printf("Digite um código de porte: ");
    scanf("%d", &porte);

    switch (porte)
    {
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

void exercicio15()
{
    int batimentos;
    printf("Informe os batimentos cardiacos: ");
    scanf("%d", &batimentos);

    if (batimentos < 50 || batimentos > 120)
    {
        printf("SITUAÇÃO DE ALERTA\n");
    }
    else
    {
        printf("DENTRO DO ESPERADO\n");
    }
}

void exercicio16()
{
    int ceu, umidade;
    printf("O ceu esta limpo? Digite 1 para SIM ou 0 para NÃO: ");
    scanf("%d", &ceu);
    printf("Digite o valor da umidade: ");
    scanf("%d", &umidade);

    if (ceu < 0 || ceu > 1)
    {
        printf("ERRO: DIGITE UM VALOR ENTRE 0 OU 1\n");
    }
    else if (ceu == 1 && umidade < 70)
    {
        printf("OBSERVACAO FAVORAVEL\n");
    }
    else
    {
        printf("OBSERVACAO DESFAVORAVEL\n");
    }
}

int main()
{
    int op;

    do
    {
        printf("Digite o número do exercicio: ");
        scanf("%d", &op);

        switch (op)
        {
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
