#include <stdio.h>
int main(){
    int Numero;
    printf("Digite um Número: "); // Solicita Número
    scanf("%d",&Numero); // Lê Número
    if(Numero%2==0) // Verifica se o resto da divisão Numero/2 é 0
        printf("O número digitado é Par"); // Imprime se condição for Verdadeira
    else 
        printf("O número digitado é Ímpar"); // Imprime se condição for Falsa
    
}