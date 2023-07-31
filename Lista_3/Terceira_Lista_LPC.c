#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>
#include <math.h>

void exec1();
void exec2();
void exec3();
void exec4();
void exec5();
void exec6();
void exec7();
void exec8();
void exec9();
void exec10();
void exec11();
void exec12();
void exec13();
void exec14();
void exec15();
void exec16();
void exec17();


int main(){
    
    int resp;
    
    setlocale(LC_ALL, "Portuguese");
    
    do{
    
    system("clear");
    printf("LISTA DE EXERCICIOS 3");
    printf("\nCURSO:ENG DE CONTROLE E AUTOMACAO");
    printf("\nAluno: RAFAEL DOMINGOS SIQUEIRA MAGALHAES");
    printf("\n\n---Programa feito no replit (pode nao funcionar adequadamente no dev C++ ---");
    printf("\n\nEscolha um exercicio de (1) a (17)");
    printf("\nOu pressione (0) para sair\n");
    scanf("%i", &resp);
    
    
    switch (resp){
        case 0:
        printf ("Até qualquer momento");
        break;
        
        case 1:
        exec1();
        break;
        
        case 2:
        exec2();
        break;
        
        case 3:
        exec3();
        break;
        
        case 4:
        exec4();
        break;
        
        case 5:
        exec5();
        break;
        
        case 6:
        exec6();
        break;
        
        case 7:
        exec7();
        break;
        
        case 8:
        exec8();
        break;
        
        case 9:
        exec9();
        break;
        
        case 10:
        exec10();
        break;
        
        case 11:
        exec11();
        break;
        
        case 12:
        exec12();
        break;
        
        case 13:
        exec13();
        break;
        
        case 14:
        exec14();
        break;
        
        case 15:
        exec15();
        break;
        
        case 16:
        exec16();
        break;
        
        case 17:
        exec17();
        break;
        
        default:
        system("\nread -p 'Esse valor não é valido pressione Enter para continuar...\n' var");
        break;
        
        
        
    }
    
    
    }while (resp != 0);
    return 0;
}

//EXERCICIO 1
void exec1(){
    
    int x, i;
    int resp;
    
    do{
    
    int status = 0;
    int num[5] = {10, 20, 30, 40, 50};
    char nam[5][128] = {"Arthur", "Yasmim", "Matheus", "Anna Carolina", "Luciana"};
    
    
    system ("clear");
    printf ("EXERCICIO_1_NUMERO_DO_CANDADTO_E_O_SEU_NOME\n");
    printf ("Informe o numero do candidato\n");
    scanf ("%i", &x);
    
    
        for (i=0;i<=4;i++){
            
            if (x == num[i]){
                system ("clear");
                printf ("\n%i, %s\n", num[i], nam[i]);
                status = 1;}
        }   
    if (status == 0){
        system ("clear");
        printf ("\n%i, nao e um numero conhecido\n", x);}
              
    printf ("\ngostaria de ver outro numero?\n");
    printf ("pressione (1) para sim e (0) para não\t");
    scanf ("%i", &resp);
    
        switch (resp){
            case 0:
            break;
            
            case 1:
            break;
            
            default:
            system("\nread -p 'Esse valor não é valido pressione Enter para continuar...\n' var");
            break;
        }
    }   while (resp != 0);
    return 0;
 }

//EXERCICIO 2
void exec2(){
    
    int ano, resp1, resp2, resp3;
    int resp;
    
    do {
    system ("clear");
    printf ("EXERCICIO_2_SEU_ANO_É_BISEXTO?\n");
    printf("Me informe o ANO\n");
    scanf ("%d", &ano);
    
        if (ano == 0){
            system ("clear");
            printf ("\n%d Não é um ano valido\n", ano);
            break;}
    
        else {
            resp1 = (ano % 400);
            resp2 = (ano % 4);
            resp3 = (ano % 100);
    
            if (resp1 == 0 || resp2 == 0 && resp3 != 0){
                printf ("\nSeu ano %d é bisexto\n", ano);}
    
            else {
                printf ("\nSeu ano %d não é bisexto\n", ano);}
        }
        printf ("Gostaria de consultar outro ano?\n");
        printf ("Insira (1) para sim ou (0) para sair: ");
        scanf ("%i", &resp);
        
        switch (resp){
            
            case 0:
            system ("clear");
            printf ("Até qualquer momento");
            break;
                
            case 1:
            break;
            
            default:
            system("read -p '\nEsse valor não é valido pressione Enter para continuar...\n' var");
            break;
        }
    } while (resp != 0);
    return 0;
}

//EXERCICIO 3
void exec3(){
    
    int nvt, nvb, nvn, nvv;
    float  pvn, pvb, pvv;
    int resp;
    
    do{
    
        system ("clear");
        printf ("EXERCICIO_3_QUANTIA_TOTAIS_DE_VOTOS\n");
        printf ("Me informe a quantia de votos brancos\n");
        scanf ("%d", &nvb);
        
        printf ("\nMe informe a quantia de votos nulos\n");
        scanf ("%d", &nvn);
        
        printf ("\nMe informe a quantia de votos validos\n");
        scanf ("%d", &nvv);
        
        
        nvt = (nvb + nvn + nvv);   //n total de eleitores
        
            if (nvt == 0){
                system ("clear");
                printf ("não houve nenhum eleitor nessa votacao");
                return 0;
        }
        
        else {
            pvn = (nvn*100)/nvt;   // porcentual total de votos nulos
            pvb = (nvb*100)/nvt;   //percentual de votos brancos
            pvv = (nvv*100)/nvt;
            
            system ("clear");
            printf ("%d, refere a 100 %% dos votos totais \n", nvt);
            printf ("%d, refere a %.2f %% de votos brancos\n", nvb, pvb);
            printf ("%d, refere a %.2f %% de votos nulos\n", nvn, pvn);
            printf ("%d, refere a %.2f %% de votos validos\n", nvv, pvv);
        }
        
        printf ("Gostaria de fazer outra conta de votos?\n");
        printf ("Pressione (1) para sim ou (0) para sair: ");
        scanf ("%d", &resp);
        
            switch (resp){
                case 0:
                printf ("\naté qualquer momento");
                break;
                
                case 1:
                break;
                
                default:
                system("\nread -p 'Esse valor não é valido pressione Enter para continuar...\n' var");
                break;
            }
    }while (resp != 0);
    return 0;
}

//EXERCICIO 4
void exec4(){
    
    int x, i, resp;
    int status = 0;
    int num[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    char nam[12][256] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho","julho","agosto","setembro","outubro","novembro","dezembro"};
    
    do {
        
    system ("clear");
    printf ("EXERCICIO_4_MES_E_ANO\n");
    printf ("Informe o numero do mes\n");
    scanf ("%i", &x);
    
    
    for (i=0;i<=11;i++){
        
        if (x == num[i]){
          printf ("(%i)referente ao mes de %s\n", num[i], nam[i]);
          status = 1;
          }   
    }
    
        if (status == 0){
          printf ("(%i), nao e um numero conhecido\n", x);
    }
    printf ("\naperte (1) para fazer outra busca de mes\n");
    printf("aperte (0) para sair do programa\n");
    scanf ("%d", &resp);
    
    switch (resp){
        
        case 1:
        break;
        
        case 0:
        printf ("Ate qualquer momento");
        return 0;
        
        default: 
        printf ("Esse valor n e valido");
        return 0;
    }
    
    }while (resp != 0);
    
    return 0;
 }
 
//EXERCICIO 5
void exec5(){
    
    int resp, n1;
    
do{ 
    
    system ("clear");
    printf ("EXERCICIO_5_SEU_NUMERO_É_DIVISIVEL_POR_10,5,2?\n");
    printf("me informe o numero\n");
    scanf ("%d", &n1);
    
////////////////////////////////////////////////////////////////////////////////   

    if (n1 % 10 == 0){
        printf ("o numero %.0i é divisivel por 10\n", n1);
    }
    
    else {
        printf ("o numero %.0i não é divisivel por 10\n", n1);
    }
    
//////////////////////////////////////////////////////////////////////////////// 

    if (n1 % 5 == 0){
        printf ("o numero %.0i é divisivel por 5\n", n1);
    }
    
    else {
        printf ("o numero %.0i não é divisivel por 5\n", n1);
    }
    
////////////////////////////////////////////////////////////////////////////////   

    if (n1 % 2 == 0){
        printf ("o numero %.0i é divisivel por 2\n", n1);
    }
    
    else {
        printf ("o numero %.0i não é divisivel por 2\n", n1);
    }
    
    printf ("\npressione (1) para fazer outro valor\npressione (0) para sair\n");
    scanf ("%d", &resp);
    
    switch (resp){
        
        case 0:
        printf ("ate qualquer momento");
        return 0;
        
        case 1:
        break;
    }
    
} while (resp != 0);
    
    return 0;
 }
 
 //EXERCICIO 6
 
int soma (int v[], int tam){//codigo para somatoria dos itens dentro do vetor//
    if (tam == 0)
        return 0;
    else 
        return v[tam -1] + soma(v, tam - 1);
    }

void exec6(){
    
    int i, valor[4];
    int vma1,vma2, vme;
    int resp;
    
    do{
        
    system ("clear");
    printf ("EXERCICIO_06-DOIS_MAIORES_VALORES_INSERIDOS\n");
    printf ("Me informe o 1* valor: ");
    scanf ("%d", &valor[0]);
    
    vma1 = valor[0];
    vma2 = valor[0];
    
    
    for (i = 1;i <3;i++){
        
        printf ("Me informe o %d* valor: ", i+1);
        scanf ("%d", &valor[i]);
        
        if(valor[i] > vma1){
            
            if(vma1> vma2){
                vma2=vma1;}
                
            vma1=valor[i];
        }
        
        if(vma1>=vma2 && valor[i] != vma1){
            if(vma1 > vma2){
                
            vma2=valor[i];}
            
        }
    }
    
    system ("clear");
    printf ("Primeriro Maior valor: %d\n", vma1);
    printf ("Segundo maior valor: %d\n", vma2);
    printf ("A soma desses valores é: %d\n", vma2 + vma1);
    printf ("E a soma de todos os valores inseridos é: %d\n\n", soma(valor,4));
    
    printf ("Pressione (0) para sair ou (1) para fazer outra consulta: ");
    scanf ("%d", &resp);
    
    switch (resp){
        case 0:
        system ("clear");
        printf ("Até qualquer momento");
        break;
        
        case 1:
        break;
        
        default:
        system ("clear");
        printf ("Não é um valor valido");
        return 0;
    }
    }while (resp != 0);
    return 0;
}

//EXERCICIO 7
void exec7(){
    
    int valor[4], i;
    int maior,medio,menor;
    int resp;
    
    do{
    
    system ("clear");
    printf ("EXERCICIO_7_ORDENAR_3_NUMEROS_EM_ORDEM_DECRESCENTE\n");
    printf ("Vou necessitar de 3 numeros diferentes\n");
    printf ("me informe o 1* valor\n");
    scanf ("%d", &valor[0]);
    
    maior = valor [0];
    medio = valor [0];
    menor = valor [0];
    
    for (i = 1; i<3 ;i++){
    printf ("me informe %d* valor\n", i+1);
    scanf ("%d", &valor[i]);
    
        if (valor[0] == valor[1] && valor[0] == valor[2]){
            system ("clear");
            printf ("todos os valores sao iguais a %d", valor[0]);
            return 0;
        }
        if (valor[i] >= maior){
            if(maior> medio){
                medio=maior;
            }
            maior=valor[i];
        }
            
        if (valor[i] < menor){
            menor = valor[i];
        }
        
        if(maior>=medio && valor[i] != maior){
            if(maior > medio){
            medio=valor[i];
            }
        }
    }
    system ("clear");
    printf ("RESULTADOS: \n");
    printf ("Maior valor: %d\nValor Medio: %d\nValor Menor: %d\n\n\n", maior, medio, menor);
    printf ("Pressione (0) para sair ou (1) para fazer outra consulta: ");
    scanf ("%d", &resp);
    
        switch (resp){
            case 0:
            system ("clear");
            printf ("Até qualquer momento");
            break;
            
            case 1:
            break;
            
            default:
            system ("clear");
            printf ("Não é um valor valido");
            return 0;
        }
    }while (resp != 0);
return 0;
}
//EXERCICIO 8
void exec8(){
    float ve, desc, acres1, acres2;
    float parc2x, parc3x;
    int resp, resp2;
    
    setlocale(LC_ALL, "Portuguese");
    
    do{
    system ("clear");
    printf ("EXERCICIO_8_OPÇÃO DE PAGAMENTO\n");
    printf ("Me infome o valor do seu eletrodomestico\n");
    scanf ("%f", &ve);
    
    desc = ve - (ve * 0.05);
    acres1 = ve + (ve * 0.10);
    acres2 = ve + (ve * 0.20);
    
    parc2x = (acres1 / 3);
    parc3x = (acres2 / 3);
    do {
    printf ("selecione a opção que condiz com quantas vezes \nquer pagar por esse produto:");
    printf ("\n(1) A vista com desconto de 5%\n");
    printf ("\n(2) Em duas vezes com acescimo de 10%\n");
    printf ("\n(3) Em 3 parcelas com acrescimo de de 20%\n");
    scanf ("%d", &resp);
    
    switch (resp){
        
        default :
        system ("clear");
        printf ("Essa opção não é valida!");
        break;
        
        case 1:
        system ("clear");
        printf ("O valor a vista ira ficar R$%.2f\n", desc);
        break;
        
        case 2:
        system ("clear");
        printf ("\n2x R$%.2f\n", parc2x);
        printf ("\nE o valor a ser pago no total vai ficar R$%.2f\n", acres1);
        break;
        
        case 3:
        system ("clear");
        printf ("\n3x de R$%.2f\n", parc3x);
        printf ("\nE o valor a ser pago no total vai ficar R$%.2f\n", acres2);
        break; 
        
    }
    }while (resp > '3' );
    

    printf ("\npressione (0) para sair ou (1) para fazer outra consulta:\n");
    scanf ("%d", &resp2);
    
    switch (resp2){
        
        case 0:
        system ("clear");
        printf ("Até qualquer momento");
        break;
        
        case 1:
        break;
        
        default:
        system ("clear");
        printf ("não é um valor conhecido\n");
        break;
    }
    }while(resp2 != 0);
return 0;
}

//EXERCICIO 9
void exec9(){
    
    int resp1, resp2;
    float c1 = 2.90, c2 = 5.60, c3 = 27.00;
    float tp;
    char resp3;
 
    setlocale(LC_ALL, "Portuguese");
    
    do{
        
        printf ("EXERCICIO_9_SELEÇÃO_DE_BILHETES\n");
        printf("\nInsira qual opção de bilhete necessita\n");
        printf ("(1)- Bilhete unitario________(R$2.90)\n");
        printf ("(2)- Bilhete duplo___________(R$5.60)\n");
        printf ("(3)- Bilhete para Dez viagens(R$27.00)\n");
        scanf ("%d", &resp1);
        
            switch (resp1){
                
                case 1:
                    do{
                        printf ("quantas unidades necessita?\n");
                        scanf ("%d", &resp2);
                        if (resp2 == 0){
                        system ("clear");
                        printf ("VALOR INVALIDO\n"); 
                    }
                    } while (resp2 == 0);
                
                    tp = (c1 * resp2);
                    system ("clear");
                    printf ("\nO valor total vai ficar R$%.2f\n", tp);
                
                
                
                case 2:
                    do{
                        printf ("quantas unidades necessita?\n");
                        scanf ("%d", &resp2);
                        if (resp2 == 0){
                        system ("clear");
                        printf ("VALOR INVALIDO\n");
                    }
                    } while (resp2 == 0);
                
                    tp = (c2 * resp2);
                    system ("clear");
                    printf ("\nO valor total vai ficar R$%.2f\n", tp);
                    break;
                
                
                case 3:
                    do{
                        printf ("quantas unidades necessita?\n");
                        scanf ("%d", &resp2);
                        if (resp2 == 0){
                        system ("clear");
                        printf ("VALOR INVALIDO\n"); 
                    }
                    } while (resp2 == 0);
                
                    tp = (c3 * resp2);
                    system ("clear");
                    printf ("\nO valor total vai ficar R$%.2f\n", tp);
                    break;
                
                default: 
                    system ("clear");
                    printf ("O valor não é admissivel");    
            }
        
        printf ("\nGostaria de comprar outro bilhete?");
        printf ("\nPressione (S) para sim e (N) para não\n");
        scanf (" %c", &resp3);
        
            switch(resp3){
                
                case 'N':
                case 'n':
                    system ("clear");
                    printf ("Até qualquer momento");
                    return 0;
                
                case 'S':
                case 's':
                    system ("clear");
                    break;
            }
        
    }while (resp3 != 'N' || resp3 != 'n');
    
return 0;

}
//EXERCICIO 10
void exec10(){
    
    float med;
    char resp;
    
    do{ 
        system ("clear");
        printf ("EXERCICIO_10_MEDIA_E_CONCEITO\n");
        printf ("Me informe a media do aluno\n");
        scanf ("%f", &med);
        
        if (med < 5.0){
            system ("clear");
            printf ("\n---Com a media %.2f seu conceito sera E---\n", med);
            }
        else if (med >= 4.0 && med <6.0){
            system ("clear");
            printf ("\n---Com a media %.2f seu conceito sera D---\n", med);
        }
        else if (med >= 6.0 && med <7.5){
            system ("clear");
            printf ("\n---Com a media %.2f seu conceito sera C---\n", med);
        }
        else if (med >= 7.5 && med <9.0){
            system ("clear");
            printf ("\n---Com a media %.2f seu conceito sera B---\n", med);
        }
        else if (med>= 0.0 && med <= 10){
            system ("clear");
            printf ("\n---Com a media %.2f seu conceito sera A---\n", med);
        }
        else {
            system ("clear");
            printf ("\nSua media n pode ser maior que 10\nPortanto sem conceito\n");
        }
  
        printf ("\nGostaria de ver outro conceito?");
        printf ("\nPressione (S) para sim, ou  (N) para não\n");
        scanf (" %c", &resp);
        
        switch (resp){
            
            case 'N':
            case 'n':
            system ("clear");
            printf ("Até qualquer momento");
            return 0;
            
            case 'S':
            case 's':
            system ("clear");
            break;
            
            default:
            printf ("não é valor valido");
            break;
            
        }
    }while (resp != 'N' || resp != 'n');
    return 0;  
}
//EXERCICIO 11
void exec11(){
    
    float sal;
    char a;
    int resp;
    
    do{
        system ("clear");
        printf ("EXERCICIO_11_VALOR_DESCONTO_INSS\n");
        printf ("Informe o valor do seu salario: ");
        scanf ("%f", &sal);
        
            if (sal <= 600.00){
                printf ("Com %.2f voce e isento\n", sal);
            }
            else if (sal >= 600.01 && sal  <= 1200.00){
                float desc = (sal * 0.2);
                printf ("\nCom o salario de R$%.2f\nSeu desconto é de R$%.2f\n", sal,desc);
                printf ("20%% de desconto\n");
            }
            else if (sal >= 1200.01 && sal  <= 2000.00){
                float desc = (sal * 0.25);
                printf ("\nCom o salario de R$%.2f\nSeu desconto é de R$%.2f\n", sal,desc);
                printf ("25%% de desconto\n");
            }
            else{
                float desc = (sal * 0.3);
                printf ("\nCom o salario de R$%.2f\nSeu desconto é de R$%.2f\n", sal,desc);
                printf ("30%% de desconto\n");
            }
        printf ("\nPression (0) para sair ou (1) para fazer outra consulta: ");
        scanf ("%d", &resp);
        
        switch (resp){
        
        case 0:
        system ("clear");
        printf ("Até qualquer momento");
        break;
        
        case 1:
        break;
        
        default:
        system ("clear");
        printf ("não é um valor conhecido\n");
        break;
    }

    }while (resp != 0);
    return 0;
}

//EXERCICIO 12
void exec12(){
    
    char nome[10];
    int i;
    int resp;
    
    do{
        system ("clear");
        printf ("EXERCICIO_12_IDADE_E_SALA_DO_ALUNO\n");
        printf ("me informe a idade do aluno ou a letra da sala\n");
        scanf(" %s", nome);
        
            for (i = 0; nome[i] != '\0'; i++) { 
                if (!isalpha(nome[i])) { // verifica pela biblioteca ctype se minha string é numero ou n
                    break; 
                }
            }
        
            if (nome[i] != '\0') {//se o valor i for diferente de null o resultado e numero.
                int num = atoi(nome);
                
                switch (num){
                    case 0 ... 3:
                    printf ("\nEstamos sem turmas\nPara os alunos com menos 4 anos\n\n");
                    break;
                    
                    case 4:    
                    case 5:
                    printf ("\nPara alunos de idade %i\nA turma sera A.\n\n", num);   
                    break;
                    
                    case 6:
                    case 7:
                    case 8:
                    printf ("\nPara alunos de idade %i\nA turma sera B.\n\n", num);
                    break;
                    
                    case 9:
                    case 10:
                    printf ("\nPara alunos de idade %i\nA turma sera C.\n\n", num);
                    break;
                    
                    default:
                    printf ("\nEstamos sem turmas\nPara alunos com mais de 10 anos.\n\n");
                    break;
                    
                }
            
            }
            else {//se valor i for null significa que tem letras
                
                switch (nome[0]){
                    
                    case 'a':
                    case 'A':
                    printf ("\nPara alunos da turma A\nA faixa de idade esta entre 4~5 anos.\n\n");
                    break;
                    
                    case 'b':
                    case 'B':
                    printf ("\nPara alunos da turma B\nA faixa de idade esta entre 6~8 anos.\n\n");
                    break;
                    
                    case 'c':
                    case 'C':
                    printf ("\nPara alunos da turma C\nA faixa de idade esta entre 9~10 anos.\n\n");
                    break;
                    
                    default:
                    printf ("\nturma invalida\n\n");
        
                    }
            }
        printf ("Pressione (0) para sair ou (1) para fazer outra consulta: ");
        scanf ("%d", &resp);
        
        switch (resp){
                    case 0:
                    system ("clear");
                    printf ("\nAté qualquer momento");
                    break;
                    
                    case 1:
                    break;
                    
                    default:
                    system ("clear");
                    printf ("Não é um valor valido");
                    break;
                    
        }
    }while (resp != 0);
   return 0; 
}

//EXERCICIO 13
void exec13(){
    
    
    int marc, nvd1, nvd2, nvd3;
    int resp, resp2;
    float sal, INSS;
    float com1, com2, com3;
    
    do{
        system ("clear");
        printf ("EXERCICIO_13_COMISSÃO_X_DESCONTO_INSS_SALARIO_BASE\n\n");
        printf("Me informe o valor do seu salario base\n");
        scanf ("%f", &sal);
        
        do {
        printf("\nEscolha a opcao:\n");
        printf("insira (1) para marca 1\n");
        printf("insira (2) para marca 2\n");
        printf("insira (3) para marca 3\n");
        printf("insira (4) para o calculo total do salario\n");
        scanf ("%d", &resp);
        
            switch(resp){
                
                case 1:
                printf ("\nquantos televisores vendeu desse modelo?\n");
                scanf ("%d", &nvd1);
                
                    if (nvd1 < 10){
                    com1 = nvd1 * 5;
                    }
                    else if (nvd1 == 0){
                    com1 = 0;
                    }
                    else {
                    com1 = (((nvd1 - 10)* 50)+50);
                    }
                    printf ("\nSua comissao total por tv vendida sera R$%.2f\n", com1);
                    break;
                
                case 2:
                printf ("\nquantos televisores vendeu desse modelo?\n");
                scanf ("%d", &nvd2);
                
                    if (nvd2 <= 20){
                    com2 = nvd2 * 2;
                    }
                    else if (nvd2 == 0){
                    com2 = 0;
                    }
                    else {
                    com2 = (((nvd2 - 20)* 20)+40);
                    }
                    printf ("\nSua comissao total por tv vendida sera R$%.2f\n", com2);
                    break;
                    
                case 3:
                printf ("\nquantos televisores vendeu desse modelo?\n");
                scanf ("%d", &nvd3);
                
                    if (nvd3 <= 30){
                    com3 = nvd3 * 3;
                    }
                    else if (nvd3 == 0){
                    com3 = 0;
                    }
                    else {
                    com3 = (((nvd3 - 30)* 30)+90);
                    }
                    printf ("\nSua comissao total por tv vendida sera R$%.2f\n", com3);
                    break;
                
                case 4:
                
                    INSS = (sal * 0.08);//cobrança do INSS
                    float CTT = (com1 + com2 + com3);//comissao total
                    float STT = (sal + CTT - INSS);//salario total
                
                    if (STT >= 5000.00){
                        STT = (STT + (STT*0.15));//Valor total se o salario for maior que 5k
                    }
                    
                system ("clear");
                printf ("O salario Bruto total e igual a R$%.2f\n", sal);
                printf ("O Total de comissoes desse mes e de R$%.2f\n", CTT);
                printf ("O desconto do INSS e de R$%.2f\n", INSS);
                printf ("O valor Liquido sera de R$%.2f\n", STT);
                
            }
        }while(resp != 4);
    
        printf ("\nGostaria de fazer outra cotacao?\n");
        printf ("pressione (1) para sim e (0) para nao.");
        scanf ("%d", &resp2);
        
            switch (resp2){
                case 0:
                printf ("\nAte um proximo dia...");
            
                case 1:
                break;
            }
    }while(resp2 != 0);
    
    return 0;
}

//EXERCICIO 14
void exec14(){
    
    int val, resp1;
    int qc1, qc2, qc3, qc4;
    
    do{
        float pc1 = 0, pc2 = 0, pc3 = 0, pc4 = 0;
        do{
            system ("clear");
            printf ("Exercicio_14_CODIGO_DO_PRODUTO_E_VALOR\n\n");
            printf ("Informe o codigo do produto\n");
            printf ("Ou aperte (0) para ver o resultado total dos itens\n");
            scanf(" %d", &val);
                
                switch (val){
                    case 0:
                    system ("clear");
                        float vtt = (pc1 + pc2 + pc3 + pc4);
                        printf ("\nvalor total vai ser R$%.2f\n", vtt);
                        break;
                        
                    case 90:
                        printf ("\nInforme quantas unidades foram compradas\n");
                        scanf ("%d", &qc1);
                            
                        pc1 = (5.30 * qc1);
                            
                        system ("clear");    
                        printf ("\nO valor total desse item vai dar R$%.2f\n", pc1);
                        system("read -p 'Pressione Enter para continuar...\n' var");
                        break;
                        
                    case 91:
                        printf ("\nInforme quantas unidades foram compradas\n");
                        scanf ("%d", &qc2);
                            
                        pc2 = (6 * qc2);
                        
                        system ("clear");      
                        printf ("O valor total desse item vai dar R$%.2f\n", pc2);
                        system("read -p 'Pressione Enter para continuar...\n' var");
                        break;
                            
                    case 112:
                        printf ("\nInforme quantas unidades foram compradas\n");
                        scanf ("%d", &qc3);
                            
                        pc3 = (3.20 * qc3);
                         
                        system ("clear");      
                        printf ("\nO valor total desse item vai dar R$%.2f\n", pc3);
                        system("read -p 'Pressione Enter para continuar...\n' var");
                        break;
                            
                    case 321:
                        printf ("Informe quantas unidades foram compradas\n");
                        scanf ("%d", &qc4);
                            
                        pc4 = (6 * qc4);
                        
                        system ("clear");      
                        printf ("\nO valor total desse item vai dar R$%.2f\n", pc4);
                        system("read -p 'Pressione Enter para continuar...\n' var");
                        break;
                        
                    default:
                        system ("clear");  
                        printf ("\nnao e um resultado numerico valido\n");
                        break;
                }
                
        }while (val != 0);
        printf ("Aperte (0) para sair do programa ou (1) para repetir os processos: ");
        scanf ("%d", &resp1);
        
    }while (resp1 != 0);
    
    return 0;    
}

//EXERCICIO 15
void exec15(){ 
    
char cpf[12];  
int icpf[12]; 
int resp1;
int i,digito1,res1,res2,digito2,valor; 

    do{
        
        int somador=0; 
        
        system ("clear");
        printf ("EXERCICIO_15_VALIDADOR_DO_CPF\n\n");
        printf("Sem caracteres especiais ou espacos digite o cpf: ");  
        scanf(" %s",cpf);  
      
    //Efetua a conversao de array de char para um array de int.  
            for(i=0;i<11;i++){  
                icpf[i]=cpf[i]-48;  
            }  
  
    //PRIMEIRO DIGITO.  
  
            for(i=0;i<9;i++){  
                somador+=icpf[i]*(10-i);  
            }  
  
        res1=somador%11;  
  
            if( (res1==0) || (res1==1) ){  
                digito1=0;  
            }  
          
            else {  
                digito1 = 11-res1;  
            }  
  
    //SEGUNDO DIGITO.  
  
        somador=0;  
  
            for(i=0;i<10;i++){  
                somador+=icpf[i]*(11-i);  
            }  
  
        valor=(somador/11)*11;  
        res2=somador-valor;  
  
            if( (res2==0) || (res2==1) ){  
                digito2=0;  
            }  
  
            else{  
                digito2=11-res2;  
            }  
  
    //RESUTADOS DA VALIDACAO.  
  
            if((digito1==icpf[9]) && (digito2==icpf[10])){  
                printf("\nCPF %s VALIDADO.\n", cpf);  
            }
    
            else{  
                printf("NÃO VALIDO.\n");  
            }  
    
        printf ("Aperte (0) para sair do programa ou (1) para repetir os processos: ");
        scanf ("%d", &resp1);
            
    }while (resp1 != 0);
return 0;  
}
//EXERCICIO 16
void exec16(){  
char cpf[12];  
int icpf[12];  
int resp, status;
int i,digito1,res1,res2,digito2,valor;
    setlocale(LC_ALL, "Portuguese");
    
    do{
  
    int somador=0;     
        
        system ("clear");
        printf("EXERCICIO_16_VALIDAR_E_DETERMINAR_O_LOCAL_CPF\n\n");
        printf("Sem caracteres especiais ou espacos digite o cpf: ");  
        scanf(" %s", cpf);  
      
    //Efetua a conversao de array de char para um array de int. 

            for(i=0;i<11;i++){  
            icpf[i]=cpf[i]-48;  
            }  
  
    //PRIMEIRO DIGITO.

            for(i=0;i<9;i++){  
            somador+=icpf[i]*(10-i);  
            }  
  
    res1=somador%11;  
  
            if( (res1==0) || (res1==1) ){  
                digito1=0;  
            }  
  
            else {  
                digito1 = 11-res1;  
            }  
  
    //SEGUNDO DIGITO.  
  
    somador=0;  
  
            for(i=0;i<10;i++){  
                somador+=icpf[i]*(11-i);  
            }  
  
    valor=(somador/11)*11;  
    res2=somador-valor;  
  
            if( (res2==0) || (res2==1) ){  
                digito2=0;  
            }  
  
            else{  
                digito2=11-res2;  
            }  
  
    //RESUTADOS DA VALIDACAO.  
  
            if((digito1==icpf[9]) && (digito2==icpf[10])){  
                printf("\nCPF %s VALIDADO.\n", cpf); 
                status = 1;
            }
    
            else{  
                printf("CPF %s NÃO É VALIDO.\n", cpf);
                status = 0;
            }  
    
    //SELEÇÃO DO ESTADO.
    //PARA DESCOBRIR O ESTADO DE UM CPF PROCURAMOS O ULTIMO NUMERO ANTES DOS DOIS ULTIMOS NUMEROS.
    if (status == 1){
        
        switch (icpf[8]){
            
            case 0: 
            printf ("possiveis estados para seu CPF:\n");
            printf ("-RIO GRANDE DO SUL\n");
            break;
            
            case 1:
            printf ("possiveis estados para seu CPF:\n");
            printf ("-DISTRITO FEDERAL\n-GOIAS\n-MATO GROSSO DO SUL\n-TOCANTINS\n");
            break;
            
            case 2:
            printf ("possiveis estados para seu CPF:\n");
            printf ("-PARÁ\n-AMAZONAS\n-ACRE\n-AMAPÁ\n-RONDONIA\n-RORAIMA\n");
            break;
            
            case 3:
            printf ("possiveis estados para seu CPF:\n");
            printf ("-CEARA\n-MARANHÃO\n-PIAUÍ\n");
            break;
            
            case 4:
            printf ("possiveis estados para seu CPF:\n");
            printf ("-PERNAMBUCO\n-RIO GRANDE DO NORTE\n-PARAIBA\nALAGOAS\n");
            break;
            
            case 5:
            printf ("possiveis estados para seu CPF:\n");
            printf ("-BAHIA\n-SERGIPE\n");
            break;
            
            case 6:
            printf ("possiveis estados para seu CPF:\n");
            printf ("-MINAS GERAIS\n");
            break;
            
            case 7:
            printf ("possiveis estados para seu CPF:\n");
            printf ("-RIO DE JANEIRO\n-ESPIRITO SANTO\n");
            break;
            
            case 8:
            printf ("possiveis estados para seu CPF:\n");
            printf ("-SÃO PAULO\n");
            break;
            
            case 9:
            printf ("possiveis estados para seu CPF:\n");
            printf ("-PARANÁ\n-SANTA CATARINA\n");
            break;
        
        }
        
        printf ("\nGostaria de fazer outra consulta?");
        printf ("\nPressione (1) para sim ou (0) para sair: ");
        scanf ("%d", &resp);
    
        switch (resp){
          case 1: 
          system ("clear");
          break;
          
          case 0:
          system ("clear");
          printf ("Até qualquer momento");
          break;
          
          default:
          system ("clear");
          printf ("valor invalido\n");
        }
        
    }
    if (status == 0) {
        
        printf ("\nGostaria de fazer outra consulta?");
        printf ("\nPressione (1) para sim ou (0) para sair: ");
        scanf ("%d", &resp);
    
        switch (resp){
          case 1: 
          system ("clear");
          break;
          
          case 0:
          system ("clear");
          printf ("Até qualquer momento");
          break;
          
          default:
          system ("clear");
          printf ("valor invalido\n");
        }
    }
        
    }while (resp != 0);
    
return 0;  
}

//EXERCICIO 17
void exec17(){
    
    int i, resp, calc[11];
    int resp1;
    
    do{
    system ("clear");
    printf("EXERCICIO_17_CALCULO_TABUADA_QUALQUER_VALOR\n\n");
    printf("Me informe o valor para lhe dar a tabuada\n");
    scanf ("%i", &resp);
    
    system ("clear");
    
        for (i = 0; i <11; i++){
            
            calc[i] = i * resp;
            
            printf ("%i x %i = %i\n",resp, i, calc[i]);
        }
    printf ("\nPressione (0) para sair ou (1) para fazer outra consulta: ");
    scanf ("%d", &resp1);
    
    }while(resp1 != 0); 
    return 0;
}
