#include <stdio.h>
int main()
{
    int indice = 13;
    int soma = 0;
    int k = 0;
    while(k < indice)
    {
        k++;
        soma = soma + k;
    }
    printf("Soma: %d\n", soma);
}