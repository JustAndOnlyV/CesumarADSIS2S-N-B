#include <stdio.h>

int valor1, valor2, opcao, resultado;

void exibirMenu(){
    printf("Escolha uma operacao:\n1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n \nDigite sua opcao: ");
}

int main(int argc, char **argv){
    printf("Digite o primeiro numero: ");
    scanf("%d",&valor1);
    printf("Digite o segundo numero: ");
    scanf("%d",&valor2);

    while (opcao < 1 || opcao > 4){
        exibirMenu();
        scanf("%d",&opcao);
    }

    switch (opcao){
    case 1:
        resultado = valor1 + valor2;
        break;
    case 2:
        resultado = valor1 - valor2;
        break;
    case 3:
        resultado = valor1 * valor2;
        break;
    case 4:
        if(valor2 != 0 ){
            resultado = valor1 / valor2;
        } else {
            resultado = 0;
        }
        break;
    }

    if(valor2 == 0 && opcao == 4){
        printf("Resultado: Impossivel dividir por 0!");
    } else {
        printf("Resultado: %d",resultado);
    }
    

    return 0;
}