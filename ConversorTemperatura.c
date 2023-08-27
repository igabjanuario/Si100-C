#include <stdio.h>
int main(){
    int Celcius, Farenheit;
    printf("Digite a Temperatura em Graus Celsius(°C): "); // Solicita a Temperatura em °C
    scanf("%d",&Celcius); // Lê a Temperatura em °C
    Farenheit=((Celcius*1.80)+32); // Calcula Temperatura em °F
    printf("A Temperatura em Farenheit é %d°F.", Farenheit); // Imprime °F
    return 0;
}