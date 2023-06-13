#include <stdio.h>
#include <math.h>
#define MAXVET 50

int main()
{
    int num_clientes, i;
    float horas, valor, valor_final[MAXVET], adicional;

    printf("|---------- BEM VINDO ---------|\n");

    printf("|------------------------------|\n");
    printf("|  TAXA MIN         - R$ 2,00  |\n");
    printf("|------------------------------|\n");
    printf("|  HORA ADICIONAL   - R$ 0,50  |\n");
    printf("|------------------------------|\n");  
    printf("|  24 HORAS         - R$ 10,00 |\n");
    printf("|------------------------------|\n\n");
    
    printf("Digite a quartidadde de clietnes: ");
    scanf("%d", &num_clientes);
    printf("\n");
    
    for (i = 0; i < num_clientes; i++)
    {
        valor = 0;
        printf("-------- CLIENTE %d --------\n", i + 1);
        printf("INFORME A QUANTIDADE DE HORAS: ");
        scanf("%f", &horas);
        printf("\n");

        horas = ceil(horas);

        if (horas < 3)
        {
            valor = 2;
            valor_final[i] = valor;
        }
        else if (horas < 10)
        {
            valor = horas - 3;
            valor_final[i] = (valor * 0.50) + 2;
        }
        else if (horas > 10)
        {
            valor = 10;
            valor_final[i] = valor;
        }
    }

    for (i = 0; i < num_clientes; i++)
    {
        printf("|------------------------------|\n");
        printf("|  CLIENTE %d  |  VALOR R$ %.2f |\n", i + 1, valor_final[i]);
    }
    return 0;
}
