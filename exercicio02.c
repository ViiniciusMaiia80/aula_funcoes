/*Crie uma função que recebe um caractere e retorna o inteiro 1 se o
 caractere for uma letra minúscula (a-z), 2 se for maiúscula (A-Z) ou 0 se
 for outro caractere (!, @, #, $, %, 1, 2, 3, etc).
 Dica: lembre-se da tabela ASCII!*/

#include <stdio.h>

int verificaCaractere(char c){
    if((c >= 'a') && (c<='z')){
        printf("o caractere %c eh minusculo", c);
        return 1;
    }else if(c >= 'A' && c <= 'Z'){
        printf("o caractere %c eh maiusculo", c);
        return 2;
    }else{
        printf("o caractere %c nao eh letra", c);
        return 0;
    }
}

int main(){
    char caractere;
    printf("Digite apenas um caractere para analise: ");
    scanf("%c", &caractere);
    verificaCaractere(caractere);
    return 0;
}
