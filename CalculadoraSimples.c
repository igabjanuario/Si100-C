/*Enunciado
Escreva um programa que simule o funcionamento de uma calculadora simples com quatro operações (+, -, * e /). 
Este programa deverá ler os operandos e o operador, como ilustrado abaixo, e exibir o resultado da operação (repetindo os operandos e o operador fornecidos pelo usuário). 
Use apenas comandos if-else. • Ex. de entrada e saída: • Entrada: 4 + 2 • Saída: 4 + 2 = 6*/
#include <stdio.h>
int main(){
    float Operando1, Operando2;
    char Operador;
    printf ("Orientação de Uso de Calculadora Simples:\n1. Digite Operações no Formato: 'Número''Operador''Número'\n2. Os Operadores aceitos são; '+', '-', '*', '/'.\n");
    printf ("\nDigite a operação que deseja realizar: ");
    scanf("%f%c%f",&Operando1,&Operador,&Operando2);
    if (Operador=='+')
        printf("%.2f%c%.2f= %.2f",Operando1,Operador,Operando2,Operando1+Operando2);
    else {
        if (Operador=='-')
        printf("%.2f%c%.2f= %.2f",Operando1,Operador,Operando2,Operando1-Operando2);
        else {
            if (Operador=='*')
                printf("%.2f%c%.2f= %.2f",Operando1,Operador,Operando2,Operando1*Operando2);
           else { 
                if (Operador=='/')
                printf("%.2f%c%.2f= %.2f",Operando1,Operador,Operando2,Operando1/Operando2);
                else {
                    printf("Operador inválido, digite novamente!\n");}}}}
    return 0;
}