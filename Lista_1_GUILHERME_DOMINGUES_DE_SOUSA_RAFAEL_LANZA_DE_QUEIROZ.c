// LISTA DE EXERCICIOS 01 - Entrada, Saída e Operadores em C
// RA: 22013871 -  Guilherme Domingues de Sousa
// RA: 2201     - Rafael Lanza de Queiroz

#include <math.h>
#include <stdio.h>

void exercicio01() {
  int n1, n2, sub;

  printf("Digite o primeiro número: ");
  scanf("%d", &n1);
  printf("\nDigite o segundo número: ");
  scanf("%d", &n2);

  sub = n1 - n2;

  printf("A subtração do primeiro numero pelo segundo é %d\n", sub);
}

void exercicio02() {
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

void exercicio03() {
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

void exercicio04() {
  float preco, desc;

  printf("Digite o preço do produto: ");
  scanf("%f", &preco);

  desc = preco * 0.10;
  preco -= desc;

  printf("O novo preço com o desconto é %.2f\n", preco);
}

void exercicio05() {
  float salarioFixo, vendas, comissao;

  printf("Informe o seu salário fixo: R$");
  scanf("%f", &salarioFixo);

  printf("Informe o total das vendas: R$");
  scanf("%f", &vendas);

  comissao = vendas * 0.04;

  printf("Salario -> R$%.2f\n", salarioFixo);
  printf("Comissão -> R$%.2f\n", comissao);
}

void exercicio06() {
  float kg, gramas;

  printf("Digite seu peso (kg): ");
  scanf("%f", &kg);

  gramas = kg / 1000;
  printf("Seu peso convertido em gramas é %.4f\n", gramas);
}

void exercicio07() {
  float peso, a, b;
  printf("Digite seu peso (kg): ");
  scanf("%f", &peso);

  a = peso * 1.15;
  b = peso - (peso * 0.2);

  printf("Seu peso -> %.2f\nSeu peso se você engordar 15(por cento) -> "
         "%.2f\nSeu peso se você emagrecer 20(por cento) -> %.2f\n",
         peso, a, b);
}

void exercicio08() {
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

void exercicio09() {
  float lado, a;

  printf("Informe um lado de um quadrado: ");
  scanf("%f", &lado);

  a = lado * lado;
  printf("Resultado do calculo da area -> %.1f\n", a);
}

void exercicio10() {
  float dMaior, dMenor, a;

  printf("Digite a diagonal maior: ");
  scanf("%f", &dMaior);
  printf("Digite a diagonal menor: ");
  scanf("%f", &dMenor);
  
  a = (dMaior * dMenor) / 2;
  
  printf("Resultado do calculo da area -> %.2f", a);

}

int main() {
  int op;

  do {
    printf("\nEscolha o número do exercício: ");
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
    case 9:
      exercicio09();
      break;
    case 10:
      exercicio10();
      break;
    }
  } while (op != 0);
  return 0;
}