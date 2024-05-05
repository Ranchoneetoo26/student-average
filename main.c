//autor: antonio neto
//data: 25-02-2024
//obj; - achar o conceito da nota

#include <stdio.h>
int main() {

    //declarar as variaveis

    char nome[40];
    float nota1;
    float nota2;
    float nota3;
    float media;

    //ler as variaveris de entrada

    printf("digite o nome do aluno: ");
    scanf("%s", nome);

    printf("digite a nota 1: ");
    scanf("%f", &nota1);

    printf("digite a nota 2: ");
    scanf("%f", &nota2);

    printf("digite a nota 3: ");
    scanf("%f", &nota3);

    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

    if (media >= 0 && media <= 4){
        printf("media conceito D");
    }else if(media > 4 && media <= 6){
        printf("media conceito C");
    }else if(media > 6  && media <= 8){
        printf("media conceito B");
    }else{
        printf("media conceito A");
    }
        
    

    return 0;

}
