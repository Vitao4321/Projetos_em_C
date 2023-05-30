#include <stdio.h>
#define LINHA 20
#define COLUNA 50

int main()
{
    float numeros[LINHA][COLUNA], soma_linha, soma_total;
    int l, c;

    for (l = 0; l < LINHA; l++)
    {
        for (c = 0; c < COLUNA; c++)
        {
            printf("Digite um numero: ");
            scanf("%f", &numeros[l][c]);
        }
    }
    
    for (l = 0; l < LINHA; l++)
    {
        soma_linha = 0;
        for (c = 0; c < COLUNA; c++)
        {
            soma_linha += numeros[l][c];
        }
        printf("---------------------------------\n");
        printf("A soma da linha %d é de: %f\n", l + 1, soma_linha);
        soma_total += soma_linha;
    }
    
    printf("---------------------------------\n");
    printf("A soma de todos os elementos é de: %f\n", soma_total);

    return 0;
}
