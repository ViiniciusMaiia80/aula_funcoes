/*Crie uma função que recebe a idade de uma pessoa e imprime a sua
 classe eleitoral, de acordo com a tabela abaixo:
 Classe:
    Não-eleitor
    Eleitor facultativo
    Eleitor obrigatório
Idade:
    Abaixo de 16 anos
    Entre 16 e 18 anos e maior que 65 anos
    Entre 18 e 65 anos*/

#include <stdio.h>

void tabela (int idade){
    if(idade<16){
        printf("Nao eleitor");
    }else if ((idade>= 16 && idade<18) || idade > 65){
        printf("Eleitor facultativo");
    }else{
        printf("Eleitor obrigatorio");
    }
   }

int main(){
    int idade;

    printf("Digite a idade do eleitor: ");
    scanf("%i", &idade);

    tabela(idade);
    return 0;
}