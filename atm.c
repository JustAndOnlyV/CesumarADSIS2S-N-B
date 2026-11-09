#include <stdio.h>
#include <openssl/sha.h>
#include <string.h>

int main(int argc, char **argv){
    FILE *senha = fopen(".\\password.sha","rb");
    if(senha == NULL){
        char *novaSenha;
        printf("Crie uma nova senha: ");
        scanf("%s", &novaSenha);
        FILE *senhaPraSalvar = fopen(".\\password.sha", "wb");
        unsigned char hash[SHA256_DIGEST_LENGTH];
        SHA256((unsigned char*)novaSenha,11,hash);
        size_t senhaEscrita = fwrite(hash, 1, SHA256_DIGEST_LENGTH, senhaPraSalvar);
    } else {
        char *senhaPraPor;
        for(int i = 0; i <= 3; i++){
            if(i == 3){
                printf("Muitas tentativas erradas!\n");
            }
            if(strcmp(senhaPraPor,senha) != 0){
                if(i > 0){
                    printf("Senha errada!\n");
                }
                printf("Insira sua senha: ");
                scanf("%s", &senhaPraPor);
            }
        }
    }

    return 0;
}

// TODO: Terminar
