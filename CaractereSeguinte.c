#include <stdio.h>
int main(){
    char Caractere;
    printf("Escolha uma tecla e descubra o Caractere Seguinte:\n");//Solicita Caractere
    scanf("%c",&Caractere);//Lê Caractere
    printf("%c",(Caractere+1));//Imprime Caractere Seguinte
    return 0;
}