#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUMAVIAO 2    // numero de avioes
#define NUMLUGARES 10 // numero de assentos para cada aviao
#define LINHA 2
#define COLUNA 20

int main()
{
    int menu = 1, menu_consultar, contador, i, voo_consulta, flag = 0, reserva_lugares = 1, l, c;
    int voo[NUMAVIAO], lugares[NUMLUGARES];
    char origem[LINHA][COLUNA], destino[LINHA][COLUNA];
    char consulta_origem[COLUNA], consulta_destino[COLUNA];

    //Dados do VOO
    for (i = 0; i < NUMAVIAO; i++)
    {
        printf("Digite o numero do VOO %d: ", i +1);
        scanf("%d", &voo[i]);

        printf("Digite a origem do VOO %d:  ", i + 1);
        scanf("%s", origem[i]);  

        for (l = 0; l < LINHA; l++)
        {
            for (c = 0; c < COLUNA; c++)
            {
                origem[l][c] = toupper(origem[l][c]);      
            }
            
        }

        printf("Digite o local de destino do VOO %d: ", i + 1);
        scanf("%s", destino[i]);

        for (l = 0; l < LINHA; l++)
        {
            for (c = 0; c < COLUNA; c++)
            {
                destino[l][c] = toupper(destino[l][c]);
            }
            
        }
        
        printf("Digite quantos lugares tera o VOO %d: ", i + 1);
        scanf("%d", &lugares[i]);

        printf("---------------------------------------------\n");
    }

    printf("---------------------------------------------\n");
    for (i = 0; i < LINHA; i++)
    {
        printf("NUMERO DO VOO: %d\n", voo[i]);
        printf("ORIGEM: %s\n", origem[i]);
        printf("DESTINO: %s\n", destino[i]);
        printf("LUGARES: %d\n", lugares[i]);
        printf("---------------------------------------------\n");
    }

    // menu do programa
    while (menu != 3)
    {
        printf("---------------------------------------------\n");
        printf("[1] - CONSULTAR\n");
        printf("[2] - EFETUAR RESERVA\n");
        printf("[3] - SAIR\n");
        printf("DIGITE O MENU QUE DESEJA: ");
        scanf("%d", &menu);
        printf("---------------------------------------------\n");

        switch (menu)
        {
        case 1:
            printf("[1] - CONSULTAR POR NUMERO DE VOO\n");
            printf("[2] - CONSULTAR POR ORIGEM\n");
            printf("[3] - CONSULTAR POR DESTINO\n");
            printf("DIDGITE A CONSULTA: ");
            scanf("%d", &menu_consultar);

            if (menu_consultar == 1)
            {
                printf("DIGITE O NUMERO DO VOO: ");
                scanf("%d", &voo_consulta);

                flag = 0;
                for (i = 0; i < NUMAVIAO; i++)
                {
                    if (voo_consulta == voo[i])
                    {
                        if (lugares[i] == 0)
                        {
                            printf("---------------------------------------------\n");
                            printf("O VOO %d NÃO ESTA DISPONIVEL, SEM ASSENTOS DISPOSNIVEIS!\n", voo[i]);
                            printf("ORIGEM: %s  || DESTINO: %s\n", origem[i], destino[i]);
                            printf("QUANTIDADE DE ASSENTOS DISPONIVEIS: %d\n", lugares[i]);
                            flag = 1;
                        }
                        else
                        {
                            printf("---------------------------------------------\n");
                            printf("O VOO %d ESTA DISPONIVEL !\n", voo[i]);
                            printf("ORIGEM: %s  || DESTINO: %s\n", origem[i], destino[i]);
                            printf("QUANTIDADE DE ASSENTOS DISPONIVEIS: %d\n", lugares[i]);
                            flag = 1;
                        }
                    }
                }
                if (flag == 0)
                {
                    printf("---------------------------------------------\n");
                    printf("ESTE VOO NAO ESTA DISPONIVEL\n");
                }
                
            }
            else if (menu_consultar == 2)
            {
                printf("DIGITE A ORIGEM: ");
                scanf("%s", consulta_origem);

                // for para colocar todas as letras em caixa alta
                for (i = 0; i < COLUNA; i++)
                {
                    consulta_origem[i] = toupper(consulta_origem[i]);
                }

                flag = 0;
                for (i = 0; i < NUMAVIAO; i++)
                {
                    if (strcmp(consulta_origem, origem[i]) == 0)
                    {
                        if (lugares[i] == 0)
                        {
                            printf("---------------------------------------------\n");
                            printf("O VOO %d NÃO ESTA DISPONIVEL, SEM ASSENTOS DISPOSNIVEIS!\n", voo[i]);
                            printf("ORIGEM: %s  || DESTINO: %s\n", origem[i], destino[i]);
                            printf("QUANTIDADE DE ASSENTOS DISPONIVEIS: %d\n", lugares[i]);
                            flag = 1;
                        }
                        else
                        {
                            printf("---------------------------------------------\n");
                            printf("O VOO %d ESTA DISPONIVEL !\n", voo[i]);
                            printf("ORIGEM: %s  || DESTINO: %s\n", origem[i], destino[i]);
                            printf("QUANTIDADE DE ASSENTOS DISPONIVEIS: %d\n", lugares[i]);
                            flag = 1;
                        }
                    } 
                }
                if (flag == 0)
                {
                    printf("---------------------------------------------\n");
                    printf("ESTE VOO NAO ESTA DISPONIVEL\n");
                }
            }
            else if (menu_consultar == 3)
            {
                printf("DIGITE O DESTINO: ");
                scanf("%s", consulta_destino);

                for (i = 0; i < COLUNA; i++)
                {
                    consulta_destino[i] = toupper(consulta_destino[i]);
                }

                flag = 0;
                for (i = 0; i < NUMAVIAO; i++)
                {
                    if (strcmp(consulta_destino, destino[i]) == 0)
                    {
                        if (lugares[i] == 0)
                        {
                            printf("---------------------------------------------\n");
                            printf("O VOO %d NÃO ESTA DISPONIVEL, SEM ASSENTOS DISPOSNIVEIS!\n", voo[i]);
                            printf("ORIGEM: %s  || DESTINO: %s\n", origem[i], destino[i]);
                            printf("QUANTIDADE DE ASSENTOS DISPONIVEIS: %d\n", lugares[i]);
                            flag = 1;
                        }
                        else
                        {
                            printf("---------------------------------------------\n");
                            printf("O VOO %d ESTA DISPONIVEL !\n", voo[i]);
                            printf("ORIGEM: %s  || DESTINO: %s\n", origem[i], destino[i]);
                            printf("QUANTIDADE DE ASSENTOS DISPONIVEIS: %d\n", lugares[i]);
                            flag = 1;
                        }
                    } 
                }
                if (flag == 0)
                {
                    printf("---------------------------------------------\n");
                    printf("ESTE VOO NAO ESTA DISPONIVEL\n");
                }
            }
            break;

        case 2:
            printf("QUAL O NUMERO DO VOO QUE DESEJA REALIZAR A RESERVA: ");
            scanf("%d", &voo_consulta);
            
            flag = 0;
            for (i = 0; i < NUMAVIAO; i++)
            {
                if (voo_consulta == voo[i] && reserva_lugares <= lugares[i])
                {
                    printf("***** RESERVA CONFIRMADA *****\n");
                    lugares[i] -= reserva_lugares;
                    flag = 1;
                }
                else if (voo_consulta == voo[i] && reserva_lugares > lugares[i])
                {
                    printf("VOO LOTADO, NÃO HA MAIS LUGARES DISPONIVEIS\n");
                    flag = 1;
                }
                
            }
            if (flag == 0)
            {
                printf("---------------------------------------------\n");
                printf("VOO INEXISTENTE\n");
            }
            break;
        }

    }

    return 0;
}
