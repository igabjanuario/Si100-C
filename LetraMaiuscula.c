#include <stdio.h>
int main() {
    char Letra;
    printf("Digite uma Letra: ");
    scanf("%c",&Letra);
    if (Letra>='a'&& Letra<='z') { // Verifica se o caractere é uma letra minúscula
        Letra = Letra -'a'+'A';} // Converte em maiúscula
    printf("Letra Maiúsculs : %c\n", Letra);
    return 0;
}