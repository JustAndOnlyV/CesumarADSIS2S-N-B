#include <stdio.h>
#include <string.h>

#define quantia_notas 2

float nota[quantia_notas];
float media;
char resultado[50];

int main(){
    for(int i = 0; i < quantia_notas; i++){
        printf("\n\x1b[36mInsira a %d° Nota: \x1b[33m",i+1);
        scanf("%f", &nota[i]);
        media += (nota[i] / quantia_notas);
    }

    if(media < 60){
        strcpy(resultado, "\x1b[31mREPROVADO!\x1b[0m");
    } else if(media < 100){
        strcpy(resultado, "\x1b[32mAPROVADO!\x1b[0m");
    } else {
        strcpy(resultado, "\x1b[33mERRO NO LANÇAMENTO!\x1b[0m");
    }

    printf("%d: %s",media,resultado);
}
