#include <stdio.h>
#include <ctype.h>
#define MAXVET 11

int main()
{
    int i, c, alunos, nota = 0, nota_tot = 0;
    char g[MAXVET], v[MAXVET];

    // Define a quanrtidade de alunos
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);

    printf("------------------------------------\n");

    // Define o gabarito da prova
    for (i = 1; i < MAXVET; i++)
    {   
        printf("Digite o GABARITO da questão %d: ", i);
        scanf(" %c", &g[i]);
        g[i] = toupper(g[i]);
    }

    printf("------------------------------------\n");

    //for para numeros de alunos
    for (c = 0; c < alunos; c++)
    {
        printf("Digite as notas do aluno %d\n", c + 1);
        printf("------------------------------------\n");
        
        //for para resultado dos alunos
        for (i = 1; i < MAXVET; i++)
        {
            printf("Digite a alternativa da questão %d: ", i);
            scanf(" %c", &v[i]);
            v[i] = toupper(v[i]);
        }
        printf("------------------------------------\n");
        for (i = 1; i < MAXVET; i++)
        {
            if (v[i] == g[i])
            {
                printf("Voce acertou a questão %d \n", i);
                nota += 1;
            }            
        }
        printf("A nota foi de: %d \n", nota);
        printf("------------------------------------\n");
        if (nota >= 6)
        {
            nota_tot += 1;
        }
        
        nota = 0;
        
    }
    printf("A porcentagem de aprovação foi de %d", (nota_tot * 100) / alunos );

    return 0;
}
