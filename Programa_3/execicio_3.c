#include <stdio.h>
#define MAXVET 50

int main()
{
    int v[MAXVET], i, total = 0;

    // Leitura dos dados 
    for (i = 0; i < MAXVET; i++)
    {
        printf("Digite o numero: ");
        scanf("%d", &v[i]);
    }

    // soma das posições pares do vetor
    for (i = 0; i < MAXVET; i =  i + 2)
    {
        total += v[i];
    }

    // Apresentação dos dados
    printf("A soma dos numeros foi de: %d", total);

    return 0;
}
