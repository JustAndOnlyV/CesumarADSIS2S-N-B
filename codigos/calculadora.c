#include <stdio.h>

#define quantia_operacoes 4

struct operacao {
    double (*calculo)(double, double);
    char nome[20];
};

double soma(double a,double b){return a+b;}
double subtracao(double a,double b){return a-b;}
double divisao(double a,double b){return a/b;}
double multiplicacao(double a,double b){return a*b;}

struct operacao operacoes[quantia_operacoes] = {
    { soma, "Soma" },
    { subtracao, "Subtracao" },
    { multiplicacao, "Multiplicacao" },
    { divisao, "Divisao" }
};

int main(){
    double val1;
    double val2;
    int op;

    printf("\x1b[36m======== \x1b[32mCalculadora \x1b[36m========\n");

    for(int i = 0; i < quantia_operacoes; i++){
        printf("\x1b[33m%d \x1b[36m- \x1b[32m%s\n\x1b[0m",i+1,operacoes[i].nome);
    }
    printf("\x1b[33m0 \x1b[36m- \x1b[32mSair\n\x1b[0m");

    printf("\x1b[36mEscolha uma operacao: \x1b[33m");

    scanf("%d", &op);

    if(op < 0 || op > quantia_operacoes){
        while(op < 0 || op > quantia_operacoes){
            printf("\x1b[31mSinto muito! nao existe essa opcao, selecione outra: \x1b[33m");
            scanf("%d", &op);
        }
    }


    printf("\x1b[1;1H\x1b[0J\x1b[0m");
    
    printf("\x1b[36mSelecionado: \x1b[32m%s\n",operacoes[op-1].nome);
    printf("\x1b[36mColoque o valor 1: \x1b[33m");
};
