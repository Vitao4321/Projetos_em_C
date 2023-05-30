#include <stdio.h>
#define LINHA 10
#define COLUNA 20

int main()
{
    float m_a[LINHA][COLUNA], m_b[LINHA][COLUNA], m_c[LINHA][COLUNA];
    int l, c;

    for (l = 0; l < COLUNA; l++)
    {
        for (c = 0; c < COLUNA; c++)
        {
            printf("Digite o numero para a primeira matriz: ");
            scanf("%f", &m_a[l][c]);
        }
    }
    printf("---------------------------------\n");
    for (l = 0; l < COLUNA; l++)
    {
        for (c = 0; c < COLUNA; c++)
        {
            printf("Digite o numero para a segunda matriz: ");
            scanf("%f", &m_b[l][c]);
        }
    }
    printf("---------------------------------\n");
    for (l = 0; l < COLUNA; l++)
    {
        for (c = 0; c < COLUNA; c++)
        {
            m_c[l][c] = m_a[l][c] + m_b[l][c];
            printf("A soma da linha %d coluna %d é de: %.1f\n", l, c, m_c[l][c]);
        }
    }
    return 0;
} 
