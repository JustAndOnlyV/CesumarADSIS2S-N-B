#include <stdio.h>
#define TABUADA_SIZE 10

int num;

int main(int argc, char **argv){
    
    printf("Digite um numero: ");
    scanf("%d", &num);

    for(int i = 1; i<= TABUADA_SIZE; i++){
        printf("\n%d x %d = %d",num,i,num*i);
    }

    return 0;
}