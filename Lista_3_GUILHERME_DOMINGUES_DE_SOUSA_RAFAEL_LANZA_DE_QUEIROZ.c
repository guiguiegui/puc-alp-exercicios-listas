// LISTA DE EXERCICIOS 03 - Estruturas de Repetição
// RA: 22013871 -  Guilherme Domingues de Sousa
// RA: 22010825 - Rafael Lanza de Queiroz
#include <stdio.h>

void exercicio01()
{
    float precoInicial = 50.0, reducao = 5.0;
    int qtdInicial = 100;

    while (precoInicial != 20.0)
    {
        precoInicial -= reducao;
        qtdInicial += 20;
        printf("Preço -> R$ %.2f\n", precoInicial);
        printf("Quantidade vendida -> %d\n", qtdInicial);
        printf("Faturamento -> %.2f\n\n", precoInicial * qtdInicial);
    }
}

void exercicio02()
{
    float investimento = 0.0, soma = 0.0;
    int meses = 0;

    while (soma < 10000)
    {
        printf("Digite o valor do %dº mês: ", meses + 1);
        scanf("%f", &investimento);
        soma += investimento;
        meses++;
    }

    printf("Demorou %d meses para atingir pelo menos R$ 10.000,00\n", meses);
}

void exercicio03()
{
    int idade = 0, adolescente = 0, jovemAdulto = 0, adulto = 0;
    for (int i = 0; i < 15; i++)
    {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade < 18)
            adolescente++;
        else if (idade <= 40)
            jovemAdulto++;
        else
            adulto++;
    }
    printf("Quantidade de pessoas que tem idade de até 18 anos -> %d\n", adolescente);
    printf("Quantidade de pessoas que tem idade entre 19 a 40 anos -> %d\n", jovemAdulto);
    printf("Quantidade de pessoas que tem mais de 40 anos -> %d\n", adulto);
}

void exercicio04()
{
    int habitantes = 100, cont = 0;
    float crescimento = 1.10;
    while (habitantes <= 500)
    {
        habitantes *= crescimento;
        printf("Crescimento de habitantes no %dº ano -> %d\n", cont + 1, habitantes);
        cont++;
    }
    printf("\nForam necessários %d anos para ultrapassar 500 habitantes\n", cont);
}

void exercicio05()
{
    int op = 0, praia = 0, montanha = 0, cidade = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("\t\tMENU|\n\n1 - PRAIA\n2 - MONTANHA\n3 - CIDADE\n\nEscolha sua preferencia: ");
        scanf("%d", &op);

        switch (op)
        {
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

        if (praia > montanha && praia > cidade)
        {
            printf("O mais escolhido foi a praia!\n");
        }
        else if (montanha > praia && montanha > cidade)
        {
            printf("O mais escolhido foi a montanha!\n");
        }
        else
        {
            printf("O mais escolhido foi a cidade!\n");
        }
    }
}

void exercicio06()
{
    float litros = 50.0, consumo = 0.0;
    int qtdTrechos = 0;

    while (litros > 0.0)
    {
        printf("Digite o consumo do trecho: ");
        scanf("%f", &consumo);
        litros -= consumo;
        if (litros >= 0)
            printf("Combustivel restante -> %.1f\n\n", litros);
        qtdTrechos++;
    }
    printf("\nForam feitos %d trechos\n\n", qtdTrechos);
}

void exercicio07()
{
    int hrsGravacao = 0, hrsEdicao = 0, totalGravacao = 0, totalEdicao = 0, qtd = 0;
    ;

    for (int i = 0; i < 8; i++)
    {
        printf("Digite as horas de gravação do %d episodio: ", i + 1);
        scanf("%d", &hrsGravacao);
        printf("Digite as horas de edição do %d episodio: ", i + 1);
        scanf("%d", &hrsEdicao);

        totalGravacao += hrsGravacao;
        totalEdicao += hrsEdicao;

        if (hrsEdicao > hrsGravacao)
            qtd++;
    }
    printf("Total de horas gravadas -> %d\n", totalGravacao);
    printf("Total de horas editadas -> %d\n", totalEdicao);
    printf("Episodios que tiveram mais edição do que gravação -> %d\n\n", qtd);
}

void exercicio08()
{
    for (int i = 500; i <= 1500; i++)
    {
        if (i % 9 == 4)
            printf("Número especial -> %d\n", i);
    }
}

void exercicio09()
{
    int n;
    float S = 0.0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        S += 1.0 / i;
    }

    printf("A soma da série S é: %.4f\n", S);
}

void exercicio10()
{
    float preco = 60.0;
    int turistas = 40;
    float custoFixo = 900.0;
    float lucroEsperado;

    printf("\nPreço (R$)\tTuristas\tLucro (R$)\n");
    printf("------------------------------------------\n");

    while (preco >= 30.0)
    {
        lucroEsperado = (preco * turistas) - custoFixo;
        printf("%.2f\t\t%d\t\t%.2f\n", preco, turistas, lucroEsperado);

        preco -= 5.0;
        turistas += 6;
    }
    printf("\n");
}

void exercicio11()
{
    int duracao, a = 0, b = 0, c = 0, d = 0;

    for (int i = 0; i < 15; i++)
    {
        printf("Digite a duração do %dº filme (em minutos): ", i + 1);
        scanf("%d", &duracao);

        if (duracao <= 90)
            a++;
        else if (duracao <= 120)
            b++;
        else if (duracao <= 150)
            c++;
        else
            d++;
    }

    printf("\nQuantidade de filmes por faixa:\n");
    printf("A (Até 90 min): %d\n", a);
    printf("B (De 91 a 120 min): %d\n", b);
    printf("C (De 121 a 150 min): %d\n", c);
    printf("D (Acima de 150 min): %d\n", d);

    printf("\nPorcentagem da primeira faixa (A): %.2f%%\n", (a / 15.0) * 100);
    printf("Porcentagem da última faixa (D): %.2f%%\n\n", (d / 15.0) * 100);
}

void exercicio12()
{
    int idade, idososRapidos = 0, somaIdadeLonga = 0, qtdLonga = 0, qtdMeia = 0, histNaoInt = 0;
    float tempo;
    char ingresso, interesse;

    for (int i = 0; i < 20; i++)
    {
        printf("\n--- Visitante %d ---\n", i + 1);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Tempo de visita (em horas): ");
        scanf("%f", &tempo);

        printf("Ingresso (I - inteira, M - meia): ");
        scanf(" %c", &ingresso);
        printf("Interesse (A - arte, H - história, C - ciência): ");
        scanf(" %c", &interesse);

        if (idade > 60 && tempo < 2.0)
            idososRapidos++;

        if (tempo > 3.0)
        {
            somaIdadeLonga += idade;
            qtdLonga++;
        }

        if (ingresso == 'M' || ingresso == 'm')
            qtdMeia++;

        if ((interesse == 'H' || interesse == 'h') && (ingresso != 'I' && ingresso != 'i'))
        {
            histNaoInt++;
        }
    }

    printf("\nVisitantes > 60 anos e tempo < 2h: %d\n", idososRapidos);

    if (qtdLonga > 0)
    {
        printf("Média de idade (tempo > 3h): %.1f anos\n", (float)somaIdadeLonga / qtdLonga);
    }
    else
    {
        printf("Nenhum visitante permaneceu mais de 3 horas.\n");
    }

    printf("Porcentagem de ingressos meia: %.2f%%\n", (qtdMeia / 20.0) * 100);
    printf("Visitantes (interesse História e NÃO inteira): %d\n\n", histNaoInt);
}

void exercicio13()
{
    int n;
    long long fatorial = 1;

    printf("Digite o valor de n para calcular o fatorial (n!): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fatorial *= i;
    }

    printf("%d! = %lld\n", n, fatorial);
}

void exercicio14()
{
    char sexo, resposta;
    int sim = 0, nao = 0, mulheresSim = 0, homensTotal = 0, homensNao = 0;

    for (int i = 0; i < 12; i++)
    {
        printf("\n--- Entrevistado %d ---\n", i + 1);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Gostou do episódio? (S/N): ");
        scanf(" %c", &resposta);

        if (resposta == 'S' || resposta == 's')
        {
            sim++;
            if (sexo == 'F' || sexo == 'f')
                mulheresSim++;
        }
        else if (resposta == 'N' || resposta == 'n')
        {
            nao++;
            if (sexo == 'M' || sexo == 'm')
                homensNao++;
        }

        if (sexo == 'M' || sexo == 'm')
            homensTotal++;
    }

    printf("\nNúmero de pessoas que respondeu sim: %d\n", sim);
    printf("Número de pessoas que respondeu não: %d\n", nao);
    printf("Número de mulheres que respondeu sim: %d\n", mulheresSim);

    if (homensTotal > 0)
    {
        printf("Porcentagem de homens que responderam não: %.2f%%\n\n", ((float)homensNao / homensTotal) * 100);
    }
    else
    {
        printf("Nenhum homem foi entrevistado.\n\n");
    }
}

void exercicio15()
{
    int idade;
    float peso;
    float somaP1 = 0, somaP2 = 0, somaP3 = 0, somaP4 = 0;
    int q1 = 0, q2 = 0, q3 = 0, q4 = 0;

    for (int i = 0; i < 15; i++)
    {
        printf("\n--- Pessoa %d ---\n", i + 1);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Peso (kg): ");
        scanf("%f", &peso);

        if (idade >= 1 && idade <= 10)
        {
            somaP1 += peso;
            q1++;
        }
        else if (idade >= 11 && idade <= 20)
        {
            somaP2 += peso;
            q2++;
        }
        else if (idade >= 21 && idade <= 30)
        {
            somaP3 += peso;
            q3++;
        }
        else if (idade > 30)
        {
            somaP4 += peso;
            q4++;
        }
    }

    printf("\n--- Médias de peso por faixa etária ---\n");
    if (q1 > 0)
        printf("De 1 a 10 anos: %.2f kg\n", somaP1 / q1);
    else
        printf("De 1 a 10 anos: Sem dados\n");
    if (q2 > 0)
        printf("De 11 a 20 anos: %.2f kg\n", somaP2 / q2);
    else
        printf("De 11 a 20 anos: Sem dados\n");
    if (q3 > 0)
        printf("De 21 a 30 anos: %.2f kg\n", somaP3 / q3);
    else
        printf("De 21 a 30 anos: Sem dados\n");
    if (q4 > 0)
        printf("Acima de 30 anos: %.2f kg\n", somaP4 / q4);
    else
        printf("Acima de 30 anos: Sem dados\n");
}

#include <stdio.h>
int main()
{
    int op;
    do
    {
        printf("Digite o numero de um exercicio: ");
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
        }
    } while (op != 0);

    return 0;
}