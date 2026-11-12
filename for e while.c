#include <stdio.h>

int whileVar;

int main(int argc, char **argv){
    // for
    printf("for:\n");
    for (int i = 1; i <= 10; i++){
        printf("%d\n",i);
    }
    printf("\n");
    for (int i = 10; i >= 1; i--){
        printf("%d\n",i);
    }
    
    // while
    printf("\nwhile:\n");
    while(whileVar < 10){
        whileVar++;
        printf("%d\n",whileVar);
    }
    printf("\n");
    while(whileVar >= 1){
        printf("%d\n",whileVar);
        whileVar--;
    }
    
    // do while
    printf("\ndo while:\n");
    do {
        whileVar++;
        printf("%d\n",whileVar);
    } while(whileVar < 10);
    printf("\n");
    do {
        printf("%d\n",whileVar);
        whileVar--;
    } while(whileVar >= 1);

    return 0;
}