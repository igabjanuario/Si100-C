/*Enunciado:
Em um determinado semestre de um curso foram aplicadas três provas com pesos iguais. Escreva um programa que leia estas três
notas e exiba a média do aluno e seu status no curso:
• Se as três notas forem maiores ou iguais a 6.0, o aluno está aprovado;
• Se uma das notas for inferior a 2.0, o aluno está reprovado.
• Caso contrário, o aluno deveria ter feito exame e sua média será dada pela soma da média das provas com a nota do exame dividida
por dois. O programa deve ler a nota do exame neste caso. A aprovação ocorrerá se a média for maior ou igual a 5.0 */

#include <stdio.h>
int main(){
    float Nota1, Nota2, Nota3, Media, Exame;
    printf("Digite as Notas do Aluno: ");
    scanf("%f%f%f",&Nota1,&Nota2,&Nota3); //Lê Notas
    Media = ((Nota1+Nota2+Nota3)/3); // Calcula Média
    if(Nota1>=6 && Nota2>=6 && Nota3>=6) // Verifica se Notas são Maiores que 6
        printf("O Aluno está Aprovado! Sua média é %.2f",Media); 
    if(Nota1<2 || Nota2<2 || Nota3<2) // Verifica se há alguma Nota Abaixo do Permitido
        printf("O Aluno está Reprovado! Sua média é %.2f",Media);
    else{ // Se alguma Nota for entre 3 e 6 há Exame
        printf("Digite a Nota do Exame: "); // Solicita Nota do Exame
        scanf("%f", &Exame); // Lê Nota do Exame
        Media = (((Nota1+Nota2+Nota3)/3)+(Exame/2)); // Calcula Média Final
        if(Media>=5)
            printf("O Aluno está Aprovado!Sua média é %.2f",Media);
        else{
        printf("O Aluno está Reprovado! Sua média é %.2f",Media);}
    }
    return 0;
}