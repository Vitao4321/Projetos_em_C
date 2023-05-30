#include <stdio.h>
#define MAXVET 50

int main()
{
    int v[MAXVET], i, j;

    // Leitura de dados
    for (i = 0; i < MAXVET; i++)
    {
        printf("Digite o numero: ");
        scanf("%d", &v[i]);
    }

    // Determina quais numeros pares e quais são impares
    for (i = 0; i < MAXVET; i++)
    {
        if (v[i] % 2 == 0)
            printf("O numero %d é par\n", v[i]);
        else
            printf("O numero %d é impar\n", v[i]);
    }

    return 0;
}
