#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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
void exe16();
void exe17();
void exe18();
void exe19();
void exe20();
void exe21();

int main() {

  int resp;

  setlocale(LC_ALL, "Portuguese");
  
  do {

    system("clear");
    printf("LISTA DE EXERCICIOS 1");
    printf("\nCURSO:ENG DE CONTROLE E AUTOMACAO");
    printf("\nAluno: RAFAEL DOMINGOS SIQUEIRA MAGALHAES");
    printf("\n\n---Programa feito no replit (pode nao funcionar adequadamente no dev C++ ---");
    printf("\n\nEscolha um exercicio de (1) a (21)");
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
    
    system("read -p 'exercicio 15 não existe... pressione qualquer botaão\n' var");
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

    case 21:

      system("clear");
      exe21();
      break;  

    default:

      system("clear");
      printf("*nao e um valor aceito*\nREINICIANDO\n");
      break;
    }

  } while (resp != 0);
  return 0;
}

void exe1(){
    
    int n1, n2, n3, resp;
    
    printf ("1_SOMA DE 3 NUMEROS INTEIROS.");
    printf ("\nporfavor insira o primeiro numero\n");
    scanf ("%i", &n1);
    
    printf ("\nporfavor insira o segundo numero\n");
    scanf ("%i", &n2);
    
    printf ("\nporfavor insira o terceiro numero\n");
    scanf ("%i", &n3);
    
    resp = (n1 + n2 + n3);
    system ("clear");
    
    printf ("O resultado da soma desses numero é %i", resp);
    printf ("\nSe cuide :)");
    
    system("read -p 'Pressione Enter para continuar...\n' var");
}

void exe2(){
    
    float aa, an, resp;
    
    
    printf ("2_CALCULAR A IDADE.");
    printf ("\nporfavor me infome o ano de seu nascimento\n");
    scanf ("%f", &an);
    
    printf ("\nagora me informe em qual ano estamos\n");
    scanf ("%f", &aa);
    
    resp = (aa - an);
    system ("clear");
    
    printf ("Em teoria...");
    printf ("\nVoce faz %.f ate o final desse ano", resp);
    
    system("read -p 'Pressione Enter para continuar...\n' var");
}

void exe3(){
    
    float lq, resp;
  
    printf ("3_CALCULO AREA DO QUADRADO\n");
    printf ("me informe um dos lados do quadrado\n");
    scanf ("%f", &lq);
    
    resp = (lq * lq);

    system ("clear");
    printf ("%.f é a area de seu quadrado", resp);
    
    
    system("read -p 'Pressione Enter para continuar...\n' var");
}

void exe4(){
    
    float br, ar, resp;
    
    
    printf ("4_AREA DO RETANGULO\n");
    printf ("me informe a base do retangulo\n");
    scanf ("%f", &br);
    
    printf ("\n me informe a altura do retangulo\n");
    scanf ("%f", &ar);
    
    resp = (br * ar);

    system ("clear");
    printf ("%.f é a area de seu retangulo", resp);
    
    system("read -p 'Pressione Enter para continuar...\n' var");
}

void exe5(){
    
    float lq, resp;
  
    printf ("5_PERIMETRO DO QUADRADO.\n");
    printf ("me informe um dos lados do quadrado\n");
    scanf ("%f", &lq);
    
    resp = (lq*4);

    system ("clear");
    printf ("%.f é o perimetro de seu quadrado", resp);
    
    system("read -p 'Pressione Enter para continuar...\n' var");
}

void exe6(){
    
    float lr1, lr2, resp;
    
    printf ("6_PERIMETRO DO RETANGULO.\n");
    printf ("me informe o valor da base do retangulo\n");
    scanf ("%f", &lr1);
    
    printf ("me informe q altura do retangulo\n");
    scanf ("%f", &lr2);
  
    resp = (lr1*2)+(lr2*2);

    system ("clear");
    printf ("\n%.f é o perimetro de seu quadrado", resp);
    
    system("read -p 'Pressione Enter para continuar...\n' var");
}

void exe7(){
    
    float n1, f1, f2, resp;
    
    printf ("7_CALCULO DOBRO DE UM NUMERO\n");
    scanf ("%f", &n1);
    
    f1 = n1 * 2;
    
    system ("clear");
    printf ("\nO dobro de seu numero e %.2f", f1);
    printf ("\nMas podemos ir mais longe que isso");
    printf ("\nSe nao quiser continuar digite (0)");
    printf ("\nMas se quiser é so botar seu fator de multiplicacao");
    printf ("\nQue irei lhe dar um valor com base no seu primeiro numero colocado (%.2f)\n", n1);
    scanf ("%f", &f2);
    
        if (f2 == 0){
            system ("clear");
            printf ("ah sim...");
            printf ("\nate mais");
          }
        else { 
            system ("clear");
            resp = (f2 * n1);
            
            printf ("ah sim...");
            printf ("\nseu novo valor com o fator de multplicação %.2f é %.2f", f2, resp);
    }
    
    system("read -p 'Pressione Enter para continuar...\n' var");
}

void exe8(){
    
    float vp, desc, resp;
    
    printf ("8_DESCONTO DE 10 PORCENTO SOBRE ITEM");
    printf ("\nporfavor informe o valor inicial do produto\n");
    scanf ("%f", &vp);
    
    desc = (vp * 0.1);
    resp = (vp - desc);
    
    system ("clear");
    printf ("\n%.2f sera o valor do desconto", desc);
    printf ("\n%.2f sera o valor que ira pagar por esse produto", resp); 
  
    system("read -p 'Pressione Enter para continuar...\n' var");
}

void exe9(){
    
    float Ang1, Ang2, Ang3, res;

    printf ("9_CALCULO ANGULO RESTANTE TRIANGULO.");
    printf ("me informe seu primeiro angulo ");
    scanf ("%f", &Ang1);
    
    printf ("\nMe informe seu segundo angulo ");
    scanf ("%f", &Ang2);
    
    Ang3 = (180 - (Ang1 + Ang2));
    
    printf ("\nseu angulo é %.2f", Ang3);
    
    system("read -p 'Pressione Enter para continuar...\n' var");
}

void exe10(){
    
    float SM, SF, res;
    
    printf ("10_QUANTIDADE DE SALARIOS MINIMOS.");
    printf ("\nqual a cotação do salario minimo na sua regiao ");
    scanf ("%f", &SM);
    
    printf ("\nPorfavor me informe o valor de seu salario que calcularei");
    printf ("\nQuantos salarios voce possui ");
    scanf ("%f", &SF);
    
    res = SF/SM;
   
    printf ("\nAtulamente voce esta recebendo um total de %.2f salarios minimos", res);
   
    system("read -p 'Pressione Enter para continuar...\n' var");
}

void exe11(){
    
    float sf, vend, resp, rest, inp;

    printf ("11_CALCULO COMISSAO DE UM FUNCIONARIO.");
    printf ("Porfavor infome seu salario fixo");
    scanf ("%f", &sf);
    
    printf ("\nmuito bom, vi aqui q recebe um percentual de 4 porcento por venda");
    printf ("\nPorfavor me infome o valor da ultima venda que informarei o valor que recebera ");
    scanf ("%f", &vend);
    
    resp = (vend*0.04);
    
    printf ("\nCerto");
    printf ("\nSeu valor do percentual de 4 porcento da sua ultima venda é %.2f", resp);
    printf ("\nQuer ver esse total direto no seu salario");
    printf ("\n digite (1) para sim, e (2) para não ");
    scanf ("%f", &inp);
    
    if (inp == 1){
        printf ("\nMuito bem");
        rest = (resp + sf);
        printf ("\n%.2f sera o valor que ira receber no total", rest);
    }
   else {
       if (inp == 2){
       printf ("\nEntendido");
       printf ("\nTenha um bom dia");
    }
   
    else {
       printf ("\nNão compreendi, irei finalizar aqui");
    }
  }
    system("read -p 'Pressione Enter para continuar...\n' var");  
}

void exe12(){
    
    float sm, ht, sh, sb, sl, imp, resp;
    
    printf ("12_CALCULO VALOR HORAS TRABALHADAS\n");
    printf ("Se possivel, informe o valor do salario minimo da sua região a seguir\n");
    scanf ("%f", &sm);
    
    printf ("\nAgora me infome o total de horas que pretende fazer na sua jornada de trabalho\n");
    scanf ("%f", &ht);
  
    sh = (0.5 * sm);
    sb = (ht * sh);
    imp = (sb * 0.03);
    sl = (sb - imp);
    
    printf ("\nO valor que voce vai receber sem o imposto sera %.2f", sb);
    printf ("\naperte (1) para saber o imposto que recebera, e (2) para concluir\n");
    scanf ("%f", &resp);
    
    if (resp == 1){
        printf ("\nO valor do imposto de 3 porcento sobre as suas horas de trabalho sera de %.2f", imp);
        printf ("\nE seu valor liquido sera de %.2f", sl);
    }
    else {
            printf ("\nEntendido");
            printf ("\nAté mais :)");
    }
    system("read -p 'Pressione Enter para continuar...\n' var"); 
}

void exe13(){
    
    float mt, vi, cal, res;

    printf ("13_CALCULO META DE VENDAS");
    printf ("Porfavor informe o valor de meta do show do teatro de hoje a seguir\n");
    scanf ("%f", &mt);
    
    printf ("\nMuito bom, agora porfavor infome o valor que venderemos o ingresso\n");
    scanf ("%f", &vi); 
    
    res = ceil(mt/vi);

    printf ("\nHoje deveremos vender pelomenos uma quantia de %.0f", res);
    printf ("\npara alcancarmos nossa meta :)");
    
    system("read -p 'Pressione Enter para continuar...\n' var"); 
}

void exe14(){
    
    float sb, gf, imp, sl;
    int resp;
    
    do{
    printf ("14_CALCULO DE SALARIO_01");
    printf ("\nMe informe o valor do sálario base\n");
    scanf ("%f", &sb);
   
    gf = sb * 0.05;
    imp = sb * 0.07;
    sl = (sb + gf) - imp;
    
    printf ("\nValor final %.2f", sl);
    printf ("\npressione (1) para fazer outra operação \n ou (0) para sair do programa\n");
    scanf ("%i", &resp);
    
    switch (resp){
        
            case 1: 
            system ("clear");
            break;
            
            case 0:
            system ("clear");
            printf ("Até outro momento");
            
            default: 
            system ("clear");
            printf ("\nEsse valor não é valido");
            break;
    }
        } while (resp != '0');
    system("read -p 'Pressione Enter para continuar...\n' var");
}

void exe16(){
    
    float vkw, kw, sm, hr, des;
    int resp;

    printf ("16_CALCULO GASTO DE QUILOWATT.\n");
    printf ("porfavor informe o valor regional de seu salario minimo\n");
    scanf ("%f", &sm);
    printf ("\nPorfavor informe o quantos quilowatts foram utilizados\n");
    scanf ("%f", &hr);
    system ("clear");
    
    vkw = (sm * 0.2);
    kw = (vkw * hr);
    des = (kw * 0.15);
    
    do { 
        printf ("\npressione (0) para cancelar");
        printf ("\npressione (1) para saber o valor do quilowatts na sua regiao");
        printf ("\npressione (2) para saber o valor a ser pago em sua residencia (sem desconteo)");
        printf ("\npressione (3) para saber o valor com desconto da sua tarifa\n ");
        scanf ("%i", &resp);
        
        switch (resp) {
            
            case 0: 
            printf ("sucesso");
            
            case 1: 
            printf ("\n%.2f e o valor na sua regiao", vkw);
            
            case 2: 
            printf ("\n%.2f e o valor em sua residencia sem desconto", kw);
            
            case 3:
            printf ("\n%.2f é o seu valor com desconto em sua residencia", des);
            
            default:
            system ("clear");
            printf ("esse valor nao e aceito");
            break;
            }
    } while (resp != '0');
    system("read -p 'Pressione Enter para continuar...\n' var");
}

void exe17(){
    
    float an, aa, ia, im, ih, imin;
    int is;
    
    printf ("17_CALUCULO TEMPO DE VIDA.");
    printf ("\nporfavor forneça seu ano de nascimento a seguir\n");
    scanf ("%f", &an);
    
    printf ("\nporfavor forneça o ano atual\n");
    scanf ("%f", &aa);
    system ("clear");
    
    ia = (aa - an);
    im = (ia * 12);
    ih = (im * 730.001);
    imin = (ih * 60);
    is = (imin * 100);
    
    printf ("\nSegundo os meus calculos voce possui:");
    printf ("\n%.f anos", ia);
    printf ("\n%.f meses", im);
    printf ("\n%.f horas", ih);
    printf ("\n%.f minutos",imin);
    printf ("\ne %.d segundos de vida", is);
    printf ("\nsimplesmente incrivel");

    system("read -p 'Pressione Enter para continuar...\n' var");
}

void exe18(){
    
    float m1, m2, a2, kw1, res;

    printf ("18_Calculo W por m²");
    printf ("Ola, irei calcular a potencia de iluminação necessaria para sua casa");
    printf ("\nPorfavor insira o valor da base em metros \n");
    scanf ("%f", &m1);
    
    system ("clear");
    printf ("Agora me informe o valor da altura em metros \n");
    scanf ("%f", &m2);
    
    a2 = m1 * m2;
    kw1 = 18 * a2;
    
    system ("clear");
    printf ("A area quadrada total de sua casa e %.2f", a2);
    printf ("\nE precisara de um total de %.f KW de potencia", kw1);
    
    system("read -p 'Pressione Enter para continuar...\n' var");
}

void exe19(){
    
    float sm, ht, vht, hx, vhx, varhx, sb, sr;
    int resp;

    printf ("19_CALCULO DE SALARIO_02");
    printf ("\nPorfavor me infome o valor do salario minimo na sua região\n");
    scanf ("%f", &sm);
    
    printf ("\nPerfeito");
    printf ("\nAgora, porfavor me informe a quantia em horas da sua jornada de trabalho habitual\n");
    scanf ("%f", &ht);
    
    printf ("\nPara finalizar porfavor informe a quantia de horas extras trabalhadas nesse mes\n");
    scanf ("%f", &hx);
    
    vht = (sm * 0.125);
    vhx = (sm * 0.25);
    sb = (vht * ht);
    varhx = (vhx * hx);
    sr = (varhx + sb);
    
    system ("clear");
    do {
        
        printf ("aperte (0) para sair");
        printf ("\naperte (1) para saber o salario Bruto ");
        printf ("\naperte (2) para saber o valor total das horas extras");
        printf ("\naperte (3) para saber o valor total a receber do seu salario esse mes\n");
        scanf ("%i", &resp);
        
        switch (resp) {
             
            case (0):
            system ("clear");
            printf ("Ok, até a proxima");
            
            case (1):
            printf ("\no valor que ira receber de salario bruto é %.2f", sb);
            system ("clear");
            printf ("\nvai precisar de mais alguma coisa?\n\n");
            break;
            
            case (2):
             printf ("\no valor que ira receber de horas extras sao %.2f", varhx);
            system ("clear");
            printf ("\nvai precisar de mais alguma coisa?\n\n");
            break;
            
            case (3):
            printf ("\nO valor total que ira receber sera de %.2f esse mes", sr);
            system ("clear");
            printf ("\nvai precisar de mais alguma coisa?\n\n");
            break;
            
            default:
            system ("clear");
            printf ("\nesse valor nao e aceito\n");
            break;  
        }
    } while (resp !='0');
    system("read -p 'Pressione Enter para continuar...\n' var");
}

void exe20(){
    
    /* não me foi informado se era uma avaliação com peso ou somatoria ent irei fazer por somatoria de notas*/
    
    float nt1, nt2, res, resf;
    
    printf ("20_MEDIA FINAL DA DISCIPLINA.\n");
    printf ("Porfavor me informe o valor da primeira nota que irei lhe dar a media de seu aluno\n");
    scanf ("%f", &nt1);
    
    printf ("\nAgora me infome a segunda nota de seu aluno\n");
    scanf ("%f", &nt2);
    
    res = (nt1 + nt2)/2;
    
    system ("clear");
    printf ("%.2f sera a nota de seu aluno", res);
    
    if (res < 6) {
            printf ("\nparece que ele ficara de recuperacao");
            printf ("\nque tristeza :(");  
    }
    else {
            printf ("\nboa, parece que ele passou");
            printf ("\nque coisa boa :)");
    }
    system("read -p 'Pressione Enter para continuar...\n' var");
}

void exe21(){
    
    int vr, resp, v1, v2;
    
    do {
    system ("clear");
    printf ("21_ RESTO DA DIVISAO DE DOIS NUMEROS");
    printf("\nMe de o primeiro valor a ser divido\n");
    scanf ("%d", &v1);
    
    printf("\nMe de o segundo valor a dividir\n");
    scanf ("%d", &v2);
    
    if (v2 == 0){
        system("read -p 'Esse valor não é valido\n Aperte qualquer tecla...\n' var");
        break;
    }
        else {
            vr = (v1 % v2);
        }
    
    system ("clear");
    printf ("O resto da sua divisão sera %d\n", vr);
    printf ("\nGostaria de repetir com outro valor?");
    printf ("\nAperte (1) para sim e (0) para não\n");
    scanf ("%i", &resp);
    
    switch (resp){
        
        case 0:
        printf ("Ok, até qualquer momento");
        
        case 1: 
        break;
        
        default: 
        printf ("\nNão entendi, irei reiniciar");
        break;
        
    }
    
    } while (resp != 0);
    system("read -p 'Pressione Enter para continuar...\n' var");
}
