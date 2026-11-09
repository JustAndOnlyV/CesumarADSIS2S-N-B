#include <stdio.h>

int senha;
float saldo = 500.00f;
int fim;
int delay;
float maiorDeposito;

void printMenu(){
    printf("Selecione uma opcao: \n");
    printf("1. Depositar\n");
    printf("2. Sacar\n");
    printf("3. Consultar Saldo\n");
    printf("4. Sair\n");
    printf("Digite o numero da operacao desejada: ");
}

int main(){
    printf("Insira uma nova senha: ");
    scanf("%d", &senha);
    while(senha < 1000 || senha > 9999){
        printf("Sua senha deve ter 4 digitos.\nInsira uma nova senha: ");
        scanf("%d", &senha);
    }
    while(fim == 0){
        int opcao;
        printf("\n\x1b[1m===== APLICATIVO BANCO =====\x1b[0m\n");
        printMenu();
        scanf("%d",&opcao);
        while(opcao<1&&opcao>4){
            printf("\n\nOpcao Invalida\n");
            printMenu();
            scanf("%d",&opcao);
        }
        switch (opcao){
        case 1:{
            float aDepositar;
            printf("\n\x1b[1m===== DEPOSITAR =====\x1b[0m\n");
            printf("Digite o valor a ser depositado: ");
            scanf("%f",&aDepositar);
            if(aDepositar <= 0){
                printf("Erro: Valor Invalido!\n");
                system("pause");
            } else {
                saldo += aDepositar;
                if(aDepositar >= maiorDeposito){
                    maiorDeposito = aDepositar;
                }
                printf("Saldo Adicionado. Valor atual: %.2f\n",saldo);
                system("pause");
            }
        }break;
        
        case 2:{
            int senhaReq;
            float aSacar;
            printf("\n\x1b[1m===== SACAR =====\x1b[0m\n");
            printf("Insira sua senha: ");
            scanf("%d",&senhaReq);
            if(senhaReq == senha){
                printf("Acesso Autorizado!\n");
                printf("Insira o valor a sacar:");
                scanf("%f",&aSacar);
                if(aSacar > saldo){
                    printf("Erro: Saldo insuficiente, Operacao cancelada!\n");
                    system("pause");
                } else {
                    printf("Sacando...\n");
                    saldo -= aSacar;
                    printf("Dinheiro sacado com sucesso!\n");
                    system("pause");
                }
            } else {
                printf("Acesso negado: Senha incorreta, Operacao cancelada!\n");
                system("pause");
            }
        }break;

        case 3:
            printf("\n\x1b[1m===== SALDO =====\x1b[0m\n");
            printf("Saldo atual: %.2f.\n", saldo);
            if(maiorDeposito){
                printf("--------\n");
                printf("Maior Deposito Efetuado: %.2f\n", maiorDeposito);
            }
            system("pause");
            break;

        case 4:
            printf("Fechando aplicativo...\n");
            printf("Obrigado por usar nosso banco! :) \n");
            fim = 1;
            return 0;
            break;

        default:
            printf("\nOpcao Invalida!\n");
            break;
        }
    }

    return 0;
}
