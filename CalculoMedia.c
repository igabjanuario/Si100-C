#include <stdio.h>
int main(){
    float Nota1, Nota2, Trabalho, Media;
    printf("Digite as Notas do Aluno:\n");//Solicita Notas
    scanf("%f%f%f",&Nota1,&Nota2,&Trabalho);//Lê Notas
    Media = ((Nota1+Nota2+Trabalho)/3);// Calcula Média
    printf("A Média Final é %0.2f", Media); //Imprime Média
    return 0;
}