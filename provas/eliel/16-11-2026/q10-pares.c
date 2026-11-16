#include <stdio.h>

int main(int argc, char **argv){
    
    for(int i = 1; i <= 20; i++){
        printf("%d eh %s!\n",i,(i%2==0)?"par":"impar");
    }

    return 0;
}