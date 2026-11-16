#include <stdio.h>

int senha = 123;
int tentaivas, senhaDigitada;

int main(int argc, char **argv){
    
    do {
        if(tentaivas > 0){
            printf("Senha Incorreta. ");
        }
        printf("Insira a senha: ");
        scanf("%d", &senhaDigitada);
        tentaivas++;
    } while (senhaDigitada != senha);

    if(senhaDigitada == senha){
        printf("Senha correta!\nAcesso liberado!\n");
    } else {
        printf("Operacao interrompida pelo usuario!\nAcesso negado!\n");
    }

    return 0;
}