#include <stdio.h>
int main()
{
    int anterior = 0; // variável que irá receber o valor anterior
    int proximo = 1; // próximo valor da sequência
    int auxiliar = 0;
    printf("Informe um numero e verificarei se ele existe na sequência fibonacci: \n");
    int k = 0;
    scanf("%d", &k);
    while(proximo <= k)
    {
        if(k == proximo)
        {
            printf("O numero existe! \n");
            break;
        }
        auxiliar = proximo;
        proximo = anterior + proximo;
        anterior = auxiliar;
    }
    if(proximo > k)
    {
        printf("O numero não existe! \n");
    }
}
