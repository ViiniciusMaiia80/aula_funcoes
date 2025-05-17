/*Crie uma função que retorna 1 se o aluno for aprovado em uma disciplina
 e 0 caso contrário, considerando que as seguintes informações são
 passadas como argumentos:
 r1- o número total de aulas de uma disciplina;
 r2- o número de faltas do aluno (que deve ser 25% das aulas);
 r3- a nota deste aluno (que deve ser 6)*/

 #include <stdio.h>

 int aprovado(int r1,int r2,double r3){
    if(r2 < (r1*0.25) && r3 >= 6){
        printf("aluno aprovado");
        return 1;
     }else {
        printf("aluno reprovado");
        return 0;
    }
}

 int main(){

    int totalAulas;
    int faltasAluno;
    double notaAluno;

    printf("Digite o numero total de aulas: ");
    scanf("%i", &totalAulas);

    printf("Digite o numero de faltas: ");
    scanf("%i", &faltasAluno);

    printf("Qual a nota do aluno?");
    scanf("%lf", &notaAluno);

     aprovado(totalAulas,faltasAluno,notaAluno);

    return 0;
 }