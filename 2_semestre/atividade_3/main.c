#include <stdio.h>

// Crie um programa que leia os valores para 3 
// variáveis do tipo int e mostre os valores depois de lidos.

int main()
{
    int numA, numB, numC;

    printf("por favor inserir o valor de numero a: ");
    scanf("%d", &numA);
    printf("\n");

    printf("por favor inserir o valor de numero b: ");
    scanf("%d", &numB);
    printf("\n");

    printf("por favor inserir o valor de numero c: ");
    scanf("%d", &numC);
    printf("\n");

    printf("o valor do numero a é: %d", numA);
    printf("\n");

    printf("o valor do numero b é: %d", numB);
    printf("\n");

    printf("o valor do numero c é: %d", numC);

    return 0;
}