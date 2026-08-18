#include <stdio.h>

#define tabela_tamanho 6
#define imc_minimo 0
#define imc_maximo 40

float peso;
float altura;
short idade;

float imc;

struct tabela_valor {
    float minimo;
    float maximo;
    char resposta[100];
};


struct tabela_valor tabela_adulto[tabela_tamanho] = {
    {0, 18.5, "Abaixo do normal"},
    {18.5, 25, "Normal"},
    {25, 30, "Sobrepeso"},
    {30, 35, "Obesidade Classe I"},
    {35, 40, "Obesidade Classe II"},
    {40, 1000, "Obesidade Classe III"}
};

struct tabela_valor tabela_idoso[tabela_tamanho] = {
    {0, 22, "Abaixo do normal"},
    {22, 27, "Normal"},
    {27, 30, "Sobrepeso"},
    {30, 35, "Obesidade Classe I"},
    {35, 40, "Obesidade Classe II"},
    {40, 1000, "Obesidade Classe III"}
};

struct tabela_valor resultado_obtido;

int main(){
    printf("\x1b[36mColoque sua altura (exemplo: 1.8): \x1b[33m");
    scanf("%f",&altura);
    
    printf("\x1b[0m\n\x1b[36mColoque seu peso (exemplo: 60): \x1b[33m");
    scanf("%f",&peso);
    
    printf("\x1b[0m\n\x1b[36mColoque sua idade (exemplo: 18): \x1b[33m");
    scanf("%f",&idade);

    imc = peso / (altura * altura);


    if(imc <= imc_minimo){
        resultado_obtido = tabela_adulto[0];
    } else if(imc >= imc_maximo){
        resultado_obtido = tabela_adulto[tabela_tamanho-1];
    } else {
        for(int i = 0; i < tabela_tamanho; i++){
            if(idade >= 60){
                if(imc >= tabela_idoso[i].minimo && imc < tabela_idoso[i].maximo){
                    resultado_obtido = tabela_idoso[i];
                    break;
                };
            } else if(imc >= tabela_adulto[i].minimo && imc < tabela_adulto[i].maximo){
                resultado_obtido = tabela_adulto[i];
                break;
            };
        };
    };

    printf("\x1b[0m\n\n\x1b[36mSeu IMC: \x1b[33m%.2f\x1b[36m, \x1b[32m%s\x1b[36m.\x1b[0m\n",imc,resultado_obtido.resposta);

    return 0;
}
