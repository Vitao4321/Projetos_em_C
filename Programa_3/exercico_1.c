#include <stdio.h>
#define MAXVET 10

int main()
{
    int v[MAXVET], i, j, achou;

    // Leitura de dados
    for (i = 0; i < MAXVET; i++)
    {
        printf("Digite o valor que deseja consultar: ");
        scanf("%d", &v[i]);
    }

    // Mostra se numero é primo ou é par
    for (j = 0; j < MAXVET; j++)
    {
        achou = 1;
        for (i = 2; i < v[j]; i++)
        {
            if (v[j] % i == 0)
            {
                achou = 0;
                printf("O numero %d não é primo\n", v[j]);
                break;
            }
        }
        if (achou == 1)
        {
            printf("O numero %d é primo\n", v[j]);
        }
    }

    return 0;
}
