// LISTA DE EXERCICIOS 01 - Entrada, Saída e Operadores em C
// RA: 22013871 -  Guilherme Domingues de Sousa
// RA: 22010825 - Rafael Lanza de Queiroz

#include <math.h>
#include <stdio.h>

void exercicio01()
{
  int n1, n2, sub;

  printf("Digite o primeiro número: ");
  scanf("%d", &n1);
  printf("\nDigite o segundo número: ");
  scanf("%d", &n2);

  sub = n1 - n2;

  printf("A subtração do primeiro numero pelo segundo é %d\n", sub);
}

void exercicio02()
{
  int n1, n2, n3, mult;

  printf("Digite o primeiro número: ");
  scanf("%d", &n1);
  printf("\nDigite o segundo número: ");
  scanf("%d", &n2);
  printf("\nDigite o terceiro número: ");
  scanf("%d", &n3);

  mult = n1 * n2 * n3;

  printf("A multiplicação desses três números é: %d\n", mult);
}

void exercicio03()
{
  float n1, n2, prova1, prova2, media;

  printf("Digite a primeira nota ponderada: ");
  scanf("%f", &n1);
  printf("Digite a segunda nota ponderada: ");
  scanf("%f", &n2);

  prova1 = n1 * 0.2;
  prova2 = n1 * 0.3;
  media = prova1 + prova2;

  printf("A média ponderada é %.2f\n", media);
}

void exercicio04()
{
  float preco, desc;

  printf("Digite o preço do produto: ");
  scanf("%f", &preco);

  desc = preco * 0.10;
  preco -= desc;

  printf("O novo preço com o desconto é %.2f\n", preco);
}

void exercicio05()
{
  float salarioFixo, vendas, comissao;

  printf("Informe o seu salário fixo: R$");
  scanf("%f", &salarioFixo);

  printf("Informe o total das vendas: R$");
  scanf("%f", &vendas);

  comissao = vendas * 0.04;

  printf("Salario -> R$%.2f\n", salarioFixo);
  printf("Comissão -> R$%.2f\n", comissao);
}

void exercicio06()
{
  float kg, gramas;

  printf("Digite seu peso (kg): ");
  scanf("%f", &kg);

  gramas = kg / 1000;
  printf("Seu peso convertido em gramas é %.4f\n", gramas);
}

void exercicio07()
{
  float peso, a, b;
  printf("Digite seu peso (kg): ");
  scanf("%f", &peso);

  a = peso * 1.15;
  b = peso - (peso * 0.2);

  printf("Seu peso -> %.2f\nSeu peso se você engordar 15(por cento) -> "
         "%.2f\nSeu peso se você emagrecer 20(por cento) -> %.2f\n",
         peso, a, b);
}

void exercicio08()
{
  float bMaior, bMenor, h, a;

  printf("Digite a base maior: ");
  scanf("%f", &bMaior);
  printf("Digite a base menor: ");
  scanf("%f", &bMenor);
  printf("Digite a altura: ");
  scanf("%f", &h);

  a = ((bMaior + bMenor) * h) / 2;
  printf("A Área do trapézio é %.2f\n", a);
}

void exercicio09()
{
  float lado, a;

  printf("Informe um lado de um quadrado: ");
  scanf("%f", &lado);

  a = lado * lado;
  printf("Resultado do calculo da area -> %.1f\n", a);
}

void exercicio10()
{
  float dMaior, dMenor, a;

  printf("Digite a diagonal maior: ");
  scanf("%f", &dMaior);
  printf("Digite a diagonal menor: ");
  scanf("%f", &dMenor);

  a = (dMaior * dMenor) / 2;

  printf("Resultado do calculo da area -> %.2f", a);
}

void exercicio11()
{
  int salarioMinimo = 1621;
  int salario;
  float resp;
  printf("Digite seu salario: ");
  scanf("%d", &salario);
  resp = salario / salarioMinimo;
  printf("Voce recebe %.1f salario(s) minimo(s).", resp);
}
void exercicio12()
{
  int i;
  printf("Digite o numero que voce quer saber a tabuada ate 10: ");
  scanf("%d", &i);
  for (int n = 1; n <= 10; n++)
  {
    int resp = n * i;
    printf("A tabuada de %d e: %d x %d = %d\n", i, i, n, resp);
  }
}

void exercicio13()
{
  int anoN;
  int ano;
  printf("Digite que ano voce nasceu: ");
  scanf("%d", &anoN);
  printf("Digite que ano estamos: ");
  scanf("%d", &ano);
  int idade = ano - anoN;
  printf("Voce tem %d anos.\n", idade);
  int meses = idade * 12;
  printf("Voce tem %d meses.\n", meses);
  int semanas = idade * 52;
  printf("Voce tem %d semanas.\n", semanas);
  int dias = idade * 365;
  printf("Voce tem %d dias.\n", dias);
}

void exercicio14()
{
  int valor;
  float reajuste;
  printf("Digite o valor em reais: ");
  scanf("%d", &valor);
  reajuste = valor * 1.12;
  printf("Reajuste e: %.1f", reajuste);
}

void exercicio15()
{
  int fatia;
  int pizza;
  int resto;
  printf("Quantas fatias foram consumidas: ");
  scanf("%d", &fatia);
  pizza = fatia / 8;
  resto = fatia % 8;
  printf("Foram consumidas %d pizza(s).\n", pizza);
  printf("Sobraram %d fatias.", resto);
}

void exercicio16()
{
  int a, b;
  printf("Digite dois numeros: ");
  scanf("%d %d", &a, &b);
  printf("Quociente: %d\n", a / b);
  printf("Resto: %d\n", a % b);
}

void exercicio17()
{
  float tempF;
  float tempC;
  printf("Digite a temperatura: ");
  scanf("%f", &tempF);
  tempC = (tempF - 32) / 1.8;
  printf("A temperatura em Celsius e: %.2f", tempC);
}

void exercicio18()
{
  int raio;
  float area;
  float circunferencia;
  float pi = 3.14159;
  printf("Digite o raio: ");
  scanf("%d", &raio);
  area = pi * (raio * raio);
  circunferencia = 2 * pi * raio;
  printf("A area e: %.2f; e a circunferencia e: %.2f", area, circunferencia);
}

void exercicio19()
{
  float v, r, i;
  printf("DIgite a tensao e a resistencia: ");
  scanf("%f %f", &v, &r);
  i = v / r;
  printf("A corrente eletrica e: %.2f", i);
}

void exercicio20()
{
  float a, b, h;
  printf("Digite o valor do primeiro cateto (a): ");
  scanf("%f", &a);
  printf("Digite o valor do segundo cateto (b): ");
  scanf("%f", &b);
  h = sqrt(pow(a, 2) + pow(b, 2));
  printf("A hipotenusa é: %.2f\n", h);
}

void exercicio21()
{
  float largura, comprimento, area, potencia;
  printf("Digite a largura do comodo: ");
  scanf("%f", &largura);
  printf("Digite o comprimento do comodo: ");
  scanf("%f", &comprimento);
  area = largura * comprimento;
  potencia = area * 18;
  printf("Area total: %.2fm2\n", area);
  printf("Potencia de iluminação necessaria: %.2fW\n", potencia);
}

void exercicio22()
{
  int a1, a2, a3;
  printf("Digite o primeiro angulo do triangulo: ");
  scanf("%d", &a1);
  printf("Digite o segundo angulo do triangulo: ");
  scanf("%d", &a2);
  a3 = 180 - (a1 + a2);
  printf("O terceiro angulo e: %d", a3);
}

void exercicio23()
{
  int n, d;
  printf("Digite o numero de lados do poligono: ");
  scanf("%d", &n);
  d = (n * (n - 3)) / 2;
  printf("O numero de diagonais e: %d\n", d);
}

void exercicio24()
{
  float r, h, v;
  printf("Digite o raio da lata: ");
  scanf("%f", &r);
  printf("Digite a altura da lata: ");
  scanf("%f", &h);
  v = 3.14159 * (r * r) * h;
  printf("O volume da lata cilindrica e: %.2f\n", v);
}

void exercicio25()
{
  int h, m, total_minutos, total_segundos;
  printf("Digite a hora: ");
  scanf("%d", &h);
  printf("Digite os minutos: ");
  scanf("%d", &m);
  total_minutos = (h * 60) + m;
  total_segundos = total_minutos * 60;
  printf("Hora convertida em minutos: %d min\n", h * 60);
  printf("Total de minutos: %d min\n", total_minutos);
  printf("Total em segundos: %d s\n", total_segundos);
}

void exercicio26()
{
  int alfa, beta, gama, aux;
  printf("Digite o valor de alfa: ");
  scanf("%d", &alfa);
  printf("Digite o valor de beta: ");
  scanf("%d", &beta);
  printf("Digite o valor de gama: ");
  scanf("%d", &gama);
  printf("Antes: alfa=%d, beta=%d, gama=%d\n", alfa, beta, gama);
  aux = alfa;
  alfa = beta;
  beta = gama;
  gama = aux;
  printf("Depois: alfa=%d, beta=%d, gama=%d\n", alfa, beta, gama);
}

void exercicio27()
{
  float n1, n2, n3, n4, media;
  printf("Digite as 4 notas: ");
  scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
  media = (n1 * 1 + n2 * 2 + n3 * 3 + n4 * 4) / 10;
  printf("A media ponderada e: %.2f\n", media);
}

void exercicio28()
{
  float tempo, velocidade, distancia, litros;
  printf("Digite o tempo da viagem (horas): ");
  scanf("%f", &tempo);
  printf("Digite a velocidade media (km/h): ");
  scanf("%f", &velocidade);
  distancia = tempo * velocidade;
  litros = distancia / 12;
  printf("Distancia percorrida: %.2fkm\n", distancia);
  printf("Litros utilizados: %.2fL\n", litros);
}

void exercicio29()
{
  float salario, conta1, conta2, resto;
  printf("Digite o salario: ");
  scanf("%f", &salario);
  printf("Digite o valor da conta 1: ");
  scanf("%f", &conta1);
  printf("Digite o valor da conta 2: ");
  scanf("%f", &conta2);
  resto = salario - (conta1 * 1.02) - (conta2 * 1.02);
  printf("Restara do salario: R$ %.2f\n", resto);
}

void exercicio30()
{
  float r1, r2, rs, rp;
  printf("Digite o valor do resistor 1: ");
  scanf("%f", &r1);
  printf("Digite o valor do resistor 2: ");
  scanf("%f", &r2);
  rs = r1 + r2;
  rp = (r1 * r2) / (r1 + r2);
  printf("Resistencia em serie: %.2fohms\n", rs);
  printf("Resistencia em paralelo: %.2fohms\n", rp);
}

int main()
{
  int op;

  do
  {
    printf("\nEscolha o número do exercício: ");
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
    case 17:
      exercicio17();
      break;
    case 18:
      exercicio18();
      break;
    case 19:
      exercicio19();
      break;
    case 20:
      exercicio20();
      break;
    case 21:
      exercicio21();
      break;
    case 22:
      exercicio22();
      break;
    case 23:
      exercicio23();
      break;
    case 24:
      exercicio24();
      break;
    case 25:
      exercicio25();
      break;
    case 26:
      exercicio26();
      break;
    case 27:
      exercicio27();
      break;
    case 28:
      exercicio28();
      break;
    case 29:
      exercicio29();
      break;
    case 30:
      exercicio30();
      break;
    }
  } while (op != 0);
  return 0;
}