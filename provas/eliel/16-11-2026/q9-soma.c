#include <stdio.h>

int num, i;

int main(int argc, char **argv){
    
    while (i <= 5){
        num+=i;
        i++;
    }
    printf("Resultado da soma: %d",num);

    return 0;
}