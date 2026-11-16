#include <stdio.h>

int valor1, valor2;

int main(int argc, char **argv){
    printf("Digite o primeiro numero: ");
    scanf("%d",&valor1);
    printf("Digite o segundo numero: ");
    scanf("%d",&valor2);

    printf("\nSoma: %d",valor1 + valor2);
    printf("\nSubtracao: %d",valor1 - valor2);
    printf("\nMultiplicacao: %d",valor1 * valor2);
    if(valor2 != 0){
        printf("\nDivisao: %d",valor1 / valor2);
    } else {
        printf("\nDivisao: Impossivel dividir por zero!");
    }

    return 0;
}