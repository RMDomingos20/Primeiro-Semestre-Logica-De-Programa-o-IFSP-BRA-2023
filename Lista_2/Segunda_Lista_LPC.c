#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void exe1();
void exe2();
void exe3();
void exe4();
void exe5();
void exe6();
void exe7();
void exe8();
void exe9();
void exe10();
void exe11();
void exe12();
void exe13();
void exe14();
void exe15();
void exe16();
void exe17();
void exe18();
void exe19();
void exe20();

int main() {

  int resp;

  do {

    system("clear");
    printf("LISTA DE EXERCICIOS 2");
    printf("\nCURSO:ENG DE CONTROLE E AUTOMACAO");
    printf("\nAluno: RAFAEL DOMINGOS SIQUEIRA MAGALHAES");
    printf("\n\n---Programa feito no replit (pode nao funcionar adequadamente no dev C++ ---");
    printf("\n\nEscolha um exercicio de (1) a (20)");
    printf("\nOu pressione (0) para sair\n");
    scanf("%i", &resp);

    switch (resp) {

    case 0:
      printf("Ok, entendido, ate qualquer dia");
      return 0;

    case 1:

      system("clear");
      exe1();
      break;

    case 2:

      system("clear");
      exe2();
      break;

    case 3:

      system("clear");
      exe3();
      break;

    case 4:

      system("clear");
      exe4();
      break;

    case 5:

      system("clear");
      exe5();
      break;

    case 6:

      system("clear");
      exe6();
      break;

    case 7:

      system("clear");
      exe7();
      break;

    case 8:

      system("clear");
      exe8();
      break;

    case 9:

      system("clear");
      exe9();
      break;

    case 10:

      system("clear");
      exe10();
      break;

    case 11:

      system("clear");
      exe11();
      break;

    case 12:

      system("clear");
      exe12();
      break;

    case 13:

      system("clear");
      exe13();
      break;

    case 14:

      system("clear");
      exe14();
      break;

    case 15:

      system("clear");
      exe15();
      break;

    case 16:

      system("clear");
      exe16();
      break;

    case 17:

      system("clear");
      exe17();
      break;

    case 18:

      system("clear");
      exe18();
      break;

    case 19:

      system("clear");
      exe19();
      break;

    case 20:

      system("clear");
      exe20();
      break;

    default:

      system("clear");
      printf("*nao e um valor aceito*\nREINICIANDO\n");
      break;
    }

  } while (resp != 0);
  return 0;
}

void exe1() {
  int nc, resp;
  printf("CALCULO DE FERRADURAS PARA CAVALO");
  printf("\nPorfavor me informe a quantidade de cavalos\n");
  scanf("%i", &nc);

  resp = (nc * 4);

  system("clear");
  printf("\nO numero de feraduras necessarias para a sua hara sera %i\n", resp);
  system("read -p 'Pressione Enter para continuar...\n' var");
}

void exe2() {
  float kc, vr;
  printf("CALCULO VALOR REFEICAO");
  printf("\nPorfavor informe o valor em quilos da sua refeicao\n");
  scanf("%f", &kc);

  vr = (kc * 32);

  system("clear");
  printf("\nPesando %.2f KG", kc);
  printf("\nO valor da sua refeicao sera %.2f\n", vr);
  system("read -p 'Pressione Enter para continuar...\n' var");
}

void exe3() {
  float m1c, m5c, m10c, m25c, m50c, m1r;
  float cm1c, cm5c, cm10c, cm25c, cm50c, resp;

  printf("CALCULO DE MOEDAS");
  printf("\nPorfavor me informe quantas moedas de 1 centavo possui\n");
  scanf("%f", &m1c);

  cm1c = (0.01 * m1c);

  printf("\nPorfavor me informe quantas moedas de 5 centavos possui\n");
  scanf("%f", &m5c);

  cm5c = (0.05 * m5c);

  printf("\nPorfavor me informe quantas moedas de 10 centavos possui\n");
  scanf("%f", &m10c);

  cm10c = (0.10 * m10c);

  printf("\nPorfavor me informe quantas moedas de 25 centavos possui\n");
  scanf("%f", &m25c);

  cm25c = (0.25 * m25c);

  printf("\nPorfavor me informe quantas moedas de 50 centavos possui\n");
  scanf("%f", &m50c);

  cm50c = (0.50 * m50c);

  printf("\nPorfavor me informe quantas moedas de 1 real possui\n");
  scanf("%f", &m1r);

  resp = (cm1c + cm5c + cm10c + cm25c + cm50c + m1r);

  system("clear");
  printf("\nA quantia reservada em seu cofrinho e de %.2f reais\n", resp);
  system("read -p 'Pressione Enter para continuar...\n' var");
}

void exe4() {
  float n1, n2, divis;
  int resp;

  do {

    printf("DIVISAO DE DOIS NUMEROS");
    printf("\nMe de seu primeiro valor a ser divido\n");
    scanf("%f", &n1);

    printf("\nMe de seu divisor\n");
    scanf("%f", &n2);

    divis = (n1 / n2);

    system("clear");
    printf("A divisao de %.2f e %.2f sera %.4f\n", n1, n2, divis);
    printf("Aperte (0) para sair ou (1) para fazer outra divisao\n");
    scanf("%i", &resp);

    switch (resp) {

    case 0:
      system("clear");
      printf("Ok, ate qualquer momento\n");
      system("read -p 'Pressione Enter para continuar...\n' var");

    case 1:
      system("clear");
      break;

    default:
      printf("nao e um valor aceito");
      break;
    }
  } while (resp != 0);
}

void exe5() {
  int n1, n2;
  int resp, rest;

  do {

    printf("RESTO DA DIVISAO DE DOIS NUMEROS");
    printf("\nMe de seu primeiro valor a ser divido\n");
    scanf("%i", &n1);

    printf("\nMe de seu divisor\n");
    scanf("%i", &n2);

    rest = (n1 % n2);

    system("clear");
    printf("A o resto de %i/%i \nSera %i\n", n1, n2, rest);
    printf("Aperte (0) para sair ou (1) para fazer outra divisao\n");
    scanf("%i", &resp);

    switch (resp) {

    case 0:
      system("clear");
      printf("Ok, ate qualquer momento\n");
      system("read -p 'Pressione Enter para continuar...\n' var");

    case 1:
      system("clear");
      break;

    default:

      printf("nao e um valor aceito");
      break;
    }
  } while (resp != 0);
}

void exe6() {

  int resp, n1, n2;

  do {

    printf("SEU NUMERO E DIVISIVEL POR 10?");
    printf("\nMe de seu numero a ser divido\n");
    scanf("%i", &n1);

    system("clear");

    if (n1 % 10 == 0) {
      printf("%i e divisivel por 10\n", n1);
    }

    else {
      printf("%i nao e divisivel por 10\n", n1);
    }

    printf("Aperte (0) para sair ou (1) para ver outro numero\n");
    scanf("%i", &resp);

    switch (resp) {

    case 0:
      system("clear");
      printf("Ok, ate qualquer momento\n");
      system("read -p 'Pressione Enter para continuar...\n' var");

    case 1:
      system("clear");
      break;

    default:

      printf("nao e um valor aceito");
      break;
    }
  } while (resp != 0);
}

void exe7() {

  int resp, n1, n2;

  do {

    printf("SEU NUMERO E MULTIPLO DE 5?");
    printf("\nMe de seu numero\n");
    scanf("%i", &n1);

    system("clear");

    if (n1 % 5 == 0) {
      printf("%i e multiplo de 5\n", n1);
    }

    else {
      printf("%i nao e multiplo de 5\n", n1);
    }

    printf("Aperte (0) para sair ou (1) para ver outro numero\n");
    scanf("%i", &resp);

    switch (resp) {

    case 0:
      system("clear");
      printf("Ok, ate qualquer momento\n");
      system("read -p 'Pressione Enter para continuar...\n' var");

    case 1:
      system("clear");
      break;

    default:

      printf("nao e um valor aceito");
      break;
    }
  } while (resp != 0);
}

void exe8() {

  int resp, n1, n2;

  do {

    printf("DESCOBRIR SE O NUMERO E PAR OU IMPAR");
    printf("\nMe de seu numero\n");
    scanf("%i", &n1);

    system("clear");

    if (n1 % 2 == 0) {
      printf("%i e par\n", n1);
    }

    else {
      printf("%i e impar\n", n1);
    }

    printf("Aperte (0) para sair ou (1) para ver outro numero\n");
    scanf("%i", &resp);

    switch (resp) {

    case 0:
      system("clear");
      printf("Ok, ate qualquer momento\n");
      system("read -p 'Pressione Enter para continuar...\n' var");

    case 1:
      system("clear");
      break;

    default:

      printf("nao e um valor aceito");
      break;
    }
  } while (resp != 0);
}

void exe9() {

  int resp, n1, n2;

  do {

    printf("SEU VALOR E POSITIVO OU NEGATIVO?");
    printf("\nMe de seu numero\n");
    scanf("%i", &n1);

    system("clear");

    if (n1 >= 0) {
      printf("%i e positivo\n", n1);
    }

    else {
      printf("%i e negativo\n", n1);
    }

    printf("Aperte (0) para sair ou (1) para ver outro numero\n");
    scanf("%i", &resp);

    switch (resp) {

    case 0:
      system("clear");
      printf("Ok, ate qualquer momento\n");
      system("read -p 'Pressione Enter para continuar...\n' var");

    case 1:
      system("clear");
      break;

    default:

      printf("nao e um valor aceito");
      break;
    }
  } while (resp != 0);
}

void exe10() {

  int resp;
  float n1, n2;

  do {

    printf("\nQUAL VALOR E MENOR?");
    printf("\nMe de seu primeiro numero\n");
    scanf("%f", &n1);

    printf("\nMe de seu segundo numero\n");
    scanf("%f", &n2);

    system("clear");

    if (n1 > n2) {
      printf("%.2f e menor\n", n2);
    }

    if (n1 == n2) {
      printf("ambos os valores sao %.2f \n", n1);
    }
    if (n1 < n2) {
      printf("%.2f e menor\n", n1);
    }

    printf("Aperte (0) para sair ou (1) para ver outro numero\n");
    scanf("%i", &resp);

    switch (resp) {

    case 0:
      system("clear");
      printf("Ok, ate qualquer momento");
      system("read -p 'Pressione Enter para continuar...\n' var");

    case 1:
      system("clear");
      break;

    default:

      system("clear");
      printf("*nao e um valor aceito*\nREINICIANDO\n");
      break;
    }
  } while (resp != 0);
}

void exe11() {

  int resp;
  float n1, n2;

  do {

    printf("QUAL VALOR E MENOR?");
    printf("\nMe de seu primeiro numero\n");
    scanf("%f", &n1);

    printf("\nMe de seu segundo numero\n");
    scanf("%f", &n2);

    system("clear");

    if (n1 > n2) {
      printf("%.2f e maior e %.2f e menor\n", n1, n2);
    }

    if (n1 == n2) {
      printf("ambos os valores sao %.2f \n", n1);
    } else {
      printf("%.2f e maior e %.2f e menor\n", n2, n1);
    }

    printf("Aperte (0) para sair ou (1) para ver outro numero\n");
    scanf("%i", &resp);

    switch (resp) {

    case 0:
      system("clear");
      printf("Ok, ate qualquer momento\n");
      system("read -p 'Pressione Enter para continuar...\n' var");

    case 1:
      system("clear");
      break;

    default:

      printf("nao e um valor aceito\n");
      break;
    }

  } while (resp != 0);
}

void exe12() {

  int resp;
  float n1, n2;

  do {

    printf("\nSE POSITIVO VC RECEBE A METADE\nSE FOR NEGATIVO VC RECEBE O "
           "QUADRADO DELE");
    printf("\nMe de seu numero\n");
    scanf("%f", &n1);

    system("clear");

    if (n1 > 0) {
      n2 = (n1 / 2);
      printf("Seu numero era positvo \nEntao seu numero dividido na metade "
             "fica %.2f \n",
             n2);
    }

    if (n1 < 0) {
      n2 = (pow(n1, 2));
      printf("seu resultado era negativo \nent seu numero fica ai quadrado "
             "%.2f \n",
             n2);
    }
    if (n1 == 0) {
      printf("nao conssigo fazer nada com %f", n1);
    }

    printf("Aperte (0) para sair ou (1) para ver outro numero\n");
    scanf("%i", &resp);

    switch (resp) {

    case 0:
      system("clear");
      printf("Ok, ate qualquer momento\n");
      system("read -p 'Pressione Enter para continuar...\n' var");

    case 1:
      system("clear");
      break;

    default:

      system("clear");
      printf("*nao e um valor aceito*\nREINICIANDO\n");
      break;
    }

  } while (resp != 0);
}

void exe13() {

  int resp;
  float n1, n2, n3, n4, mef;

  do {

    printf("\nCALCULO DE SITUACAO DAS NOTAS DO ALUNO");
    printf("\nPorfavor insira a primeira nota do aluno\n");
    scanf("%f", &n1);

    printf("\nPorfavor insira a segunda nota do aluno\n");
    scanf("%f", &n2);

    printf("\nPorfavor insira a terceira nota do aluno\n");
    scanf("%f", &n3);

    printf("\nPorfavor insira a quarta nota do aluno\n");
    scanf("%f", &n4);

    mef = ((n1 + n2 + n3 + n4) / 4);

    if (10 < mef >= 8) {

      system("clear");
      printf("\nParabens sua media final foi %.2f\nE voce esta aprovado\n",
             mef);
    }
    if (mef < 8) {

      system("clear");
      printf("\nInfelizmente sua media final foi %.2f\nE voce esta reprovado\n",
             mef);
    }
    if (mef > 10) {

      system("clear");
      printf("Algo errado aconteceu\nVoce deve ter colocado alguma nota maior "
             "que 10\nSua nota atual e %.2f\n",
             mef);
    }

    printf("Aperte (0) para sair ou (1) para ver outra situacao\n");
    scanf("%i", &resp);

    switch (resp) {

    case 0:
      system("clear");
      printf("Ok, ate qualquer momento");
      system("read -p 'Pressione Enter para continuar...\n' var");

    case 1:
      system("clear");
      break;

    default:

      system("clear");
      printf("*nao e um valor aceito*\nREINICIANDO\n");
      break;
    }

  } while (resp != 0);
}

void exe14() {

  int resp;
  float n1, n2, n3, mef;

  do {

    printf("\nCALCULO DE SITUACAO DAS NOTAS DO ALUNO\nCOM MEDIA PONDERADA");
    printf("\nPorfavor insira a primeira nota do aluno\n");
    scanf("%f", &n1);

    printf("\nPorfavor insira a segunda nota do aluno\n");
    scanf("%f", &n2);

    printf("\nPorfavor insira a terceira nota do aluno\n");
    scanf("%f", &n3);

    mef = (n1 * 0.2) + (n2 * 0.3) + (n3 * 0.5);

    if (mef >= 9) {

      system("clear");
      printf("\nParabens sua media final foi %.2f\nE voce esta aprovado\n",
             mef);
    }
    if (mef < 9) {

      system("clear");
      printf("\nInfelizmente sua media final foi %.2f\nE voce esta reprovado\n",
             mef);
    }

    printf("Aperte (0) para sair ou (1) para ver outra situacao\n");
    scanf("%i", &resp);

    switch (resp) {

    case 0:
      system("clear");
      printf("Ok, ate qualquer momento\n");
      system("read -p 'Pressione Enter para continuar...\n' var");

    case 1:
      system("clear");
      break;

    default:

      system("clear");
      printf("*nao e um valor aceito*\nREINICIANDO\n");
      break;
    }
  } while (resp != 0);
}

void exe15() {

  int resp;
  float sl, vd1, vd2, vd3, vtt;

  do {

    printf("\nCALCULO DESCONTO DO INSS");
    printf("\nPorfavor insira seu salario\n");
    scanf("%f", &sl);

    vd1 = (sl * 0.2);
    vd2 = (sl * 0.25);
    vd3 = (sl * 0.3);

    if (sl <= 600) {

      system("clear");
      printf("\nseu salario e %.2f e voce e isento\n", sl);
    }
    if (600.01 <= sl && sl >= 1200) {

      system("clear");
      printf("\nSeu salario e R$%.2f e voce tera R$%.2f de desconto\n", sl,
             vd1);
    }
    if (1200.01 <= sl && sl >= 2000) {

      system("clear");
      printf("\nSeu salario e R$%.2f e vc tera R$%.2f de desconto\n", sl, vd2);
    }
    if (sl > 2000) {

      system("clear");
      printf("Seu salario de R$%.2f e maior que R$2000\nE receberar R$%.2f de "
             "desconto\n",
             sl, vd3);
    }

    printf("Aperte (0) para sair ou (1) para ver outra situacao\n");
    scanf("%i", &resp);

    switch (resp) {

    case 0:
      system("clear");
      printf("Ok, ate qualquer momento\n");
      system("read -p 'Pressione Enter para continuar...\n' var");

    case 1:
      system("clear");
      break;

    default:

      system("clear");
      printf("*nao e um valor aceito*\nREINICIANDO\n");
      break;
    }

  } while (resp != 0);
}

void exe16() {

  int resp;
  int ic;

  do {

    printf("\nQUAL TURMA A SUA CRIANCA PERTENCE?");
    printf("\nQual a idade da sua crianca?\n");
    scanf("%i", &ic);

    if (ic >= 4 && ic <= 5) {

      system("clear");
      printf("Pela faixa de idade da sua crianca (%i anos)\nSua turminha vai "
             "ser a TURMA A\n",
             ic);
    }
    if (ic >= 6 && ic <= 8) {

      system("clear");
      printf("Pela faixa de idade da sua crianca (%i anos)\nSua turminha vai "
             "ser a TURMA B\n",
             ic);
    }
    if (ic >= 9 && ic <= 10) {

      system("clear");
      printf("Pela faixa de idade da sua crianca (%i anos)\nSua turminha vai "
             "ser a TURMA C\n",
             ic);
    }
    if (ic < 4 || ic > 10) {

      system("clear");
      printf("Infelizmente nao temos classe disponivel para a idade da sua "
             "crianca (%i anos)\n",
             ic);
    }

    printf("Aperte (0) para sair ou (1) para ver outra situacao\n");
    scanf("%i", &resp);

    switch (resp) {

    case 0:
      system("clear");
      printf("Ok, ate qualquer momento\n");
      system("read -p 'Pressione Enter para continuar...\n' var");

    case 1:
      system("clear");
      break;

    default:

      system("clear");
      printf("*nao e um valor aceito*\nREINICIANDO\n");
      break;
    }
  } while (resp != 0);
}

void exe17() {

  int resp;
  float mf;

  do {

    printf("\nCONCEITO E SITUACAO DA SUA NOTA");
    printf("\nMe informe sua media final\n");
    scanf("%f", &mf);

    if (mf < 4.0) {

      system("clear");
      printf("Com sua nota sendo %.2f seu conceito é E", mf);
      printf("\nSua situacao e REPROVADO\n");
    }

    if (mf >= 4.1 && mf <= 6.0) {

      system("clear");
      printf("Com sua nota sendo %.2f seu conceito é D", mf);
      printf("\nSua situacao e REPROVADO\n");
    }

    if (mf >= 6.1 && mf <= 7.1) {

      system("clear");
      printf("Com sua nota sendo %.2f seu conceito é C", mf);
      printf("\nSua situacao e APROVADO\n");
    }

    if (mf >= 7.6 && mf <= 9.0) {

      system("clear");
      printf("Com sua nota sendo %.2f seu conceito é B", mf);
      printf("\nSua situacao e APROVADO\n");
    }

    if (mf >= 9.1 && mf <= 10) {

      system("clear");
      printf("Com sua nota sendo %.2f seu conceito é A", mf);
      printf("\nSua situacao e APROVADO\n");
      printf("\nSHEEESHH\n\n");
    }

    printf("Aperte (0) para sair ou (1) para ver outra situacao\n");
    scanf("%i", &resp);

    switch (resp) {

    case 0:
      system("clear");
      printf("Ok, ate qualquer momento\n");
      system("read -p 'Pressione Enter para continuar...\n' var");

    case 1:
      system("clear");
      break;

    default:

      system("clear");
      printf("*nao e um valor aceito*\nREINICIANDO\n");
      break;
    }

  } while (resp != 0);
}

void exe18() {

  int resp;
  int ano;

  do {

    printf("\nSEU ANO E BISEXTO?");
    printf("\nMe informe algum ano\n");
    scanf("%i", &ano);

    if (ano % 400 == 0 && ano % 4 == 0 || ano % 100 != 0) {

      system("clear");
      printf("O ano %i e bisexto\n", ano);
    } else {

      system("clear");
      printf("o ano %i nao e bisexsto\n", ano);
    }

    printf("Aperte (0) para sair ou (1) para ver outra situacao\n");
    scanf("%i", &resp);

    switch (resp) {

    case 0:
      system("clear");
      printf("Ok, ate qualquer momento\n");
      system("read -p 'Pressione Enter para continuar...\n' var");

    case 1:
      system("clear");
      break;

    default:

      system("clear");
      printf("*nao e um valor aceito*\nREINICIANDO\n");
      break;
    }
  } while (resp != 0);
}

void exe19() {

  int resp;
  int qv, vb, vn, vv;
  float pvb, pvn, pvv;

  do {

    printf("\nCALCULO DE PERCENTUAL DE VOTOS");
    printf("\nInforme a quantia de votos nessa eleicao\n");
    scanf("%i", &qv);

    printf("\nMe informe a quantia de votos em brancos\n");
    scanf("%i", &vb);

    printf("\nMe informe a quantia de votos nulos\n");
    scanf("%i", &vn);

    vv = qv - (vb + vn);
    pvb = (vb * 100) / qv;
    pvn = (vn * 100) / qv;
    pvv = (vv * 100) / qv;

    system("clear");
    printf("SEGUNDO MEUS CALCULOS\n");
    printf("\nDos %i eleitores", qv);
    printf("\n%i pessoas expressao %.2f porcento das pessoas que votaram em "
           "branco",
           vb, pvb);
    printf(
        "\n%i pessoas expressao %.2f porcento das pessoas que votaram em nulo",
        vn, pvn);
    printf("\n%i pessoas expressao %.2f porcento das pessoas que tiveram votos "
           "validos\n",
           vv, pvv);

    printf("\nAperte (0) para sair ou (1) para ver outra situacao\n");
    scanf("%i", &resp);

    switch (resp) {

    case 0:
      system("clear");
      printf("Ok, ate qualquer momento\n");
      system("read -p 'Pressione Enter para continuar...\n' var");

    case 1:
      system("clear");
      break;

    default:

      system("clear");
      printf("*nao e um valor aceito*\nREINICIANDO\n");
      break;
    }

  } while (resp != 0);
  system("pause");
}

void exe20() {

  int resp;
  int m;

  do {

    printf("\nESCOLHA UM NUMERO E DAREI UM MES");
    printf("\nMe informe um numero que lhe darei o mes correspondente\n");
    scanf("%i", &m);

    if (m == 1) {
      system("clear");
      printf("\nSeu mes é Janeiro");
    }

    if (m == 2) {
      system("clear");
      printf("\nSeu mes e Fevereiro");
    }

    if (m == 3) {
      system("clear");
      printf("\nSeu mes é Marco");
    }

    if (m == 4) {
      system("clear");
      printf("\nSeu mes e Abril");
    }

    if (m == 5) {
      system("clear");
      printf("\nSeu mes é Maio");
    }

    if (m == 6) {
      system("clear");
      printf("\nSeu mes e Junho");
    }

    if (m == 7) {
      system("clear");
      printf("\nSeu mes é Julho");
    }

    if (m == 8) {
      system("clear");
      printf("\nSeu mes e Agosto");
    }

    if (m == 9) {
      system("clear");
      printf("\nSeu mes é Setembro");
    }

    if (m == 10) {
      system("clear");
      printf("\nSeu mes e Outubro");
    }

    if (m == 11) {
      system("clear");
      printf("\nSeu mes é Novembro");
    }

    if (m == 12) {
      system("clear");
      printf("\nSeu mes e Dezembro");
    }

    else {
      printf("\nEsse valor nao eh valido");
    }

    printf("\nAperte (0) para sair ou (1) para ver outra situacao\n");
    scanf("%i", &resp);

    switch (resp) {

    case 0:
      system("clear");
      printf("Ok, ate qualquer momento\n");
      system("read -p 'Pressione Enter para continuar...\n' var");

    case 1:
      system("clear");
      break;

    default:

      system("clear");
      printf("*nao e um valor aceito*\nREINICIANDO\n");
      break;
    }
  } while (resp != 0);
}
