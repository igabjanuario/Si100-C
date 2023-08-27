#include <stdio.h>
int main(){
    int num,par=0,impar=0;
        printf("Digite o 1º Número: "); // Solicita Número
        scanf("%d",&num); // Lê Número
        if(num%2==1) // Verifica de resultado da divisão do Número/2 é 1
            impar++; // Se condição for Verdadeira Incrementa Ímpar
        else {
            par++;} // Se condição for Falsa Incrementa Par
         printf("Digite o 2º Número: ");
        scanf("%d",&num);
        if(num%2==1)
            impar++;
        else {
            par++;}
         printf("Digite o 3º Número: ");
        scanf("%d",&num);
        if(num%2==1)
            impar++;
        else {
            par++;}
         printf("Digite o 4º Número: ");
        scanf("%d",&num);
        if(num%2==1)
            impar++;
        else {
            par++;}
         printf("Digite o 5º Número: ");
        scanf("%d",&num);
        if(num%2==1)
            impar++;
        else {
            par++;}
         printf("Digite o 6º Número: ");
        scanf("%d",&num);
        if(num%2==1)
            impar++;
        else {
            par++;}
         printf("Digite o 7º Número: ");
        scanf("%d",&num);
        if(num%2==1)
            impar++;
        else {
            par++;}
         printf("Digite o 8º Número: ");
        scanf("%d",&num);
        if(num%2==1)
            impar++;
        else {
            par++;}
         printf("Digite o 9º Número: ");
        scanf("%d",&num);
        if(num%2==1)
            impar++;
        else {
            par++;}
         printf("Digite o 10º Número: ");
        scanf("%d",&num);
        if(num%2==1)
            impar++;
        else {
            par++;}
    printf("A Quantidade de Números Pares e %d, de Ímpares é:%d\n",par,impar); // Imprime Quantidade de Númeos Pares e ímpares 
    return 0;
}