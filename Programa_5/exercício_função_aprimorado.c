#include <stdio.h>
#include <math.h>
#define MAXVET 50
#define TAXA_MIN 2.00
#define TAXA_HORA_ADICIONAL 0.50
#define TAXA_24_HORAS 10.00

float calcula_taxas(float);

int main()
{
    int num_clientes, i;
    float horas, valor, valor_final[MAXVET], valor_tot = 0;

    // Tabela de apresetacao de valores 
    printf("|---------- BEM VINDO ---------|\n");

    printf("|------------------------------|\n");
    printf("|  TAXA MIN ATE 3   - R$ %.2f  |\n", TAXA_MIN);
    printf("|------------------------------|\n");
    printf("|  HORA ADICIONAL   - R$ %.2f  |\n", TAXA_HORA_ADICIONAL);
    printf("|------------------------------|\n");  
    printf("|  24 HORAS         - R$ %.2f |\n", TAXA_24_HORAS);
    printf("|------------------------------|\n\n");
    
    printf("Digite a quartidadde de clietnes: ");
    scanf("%d", &num_clientes);
    printf("\n");

    // Verifica a quantidade de clientes 
    if (num_clientes <= 0 || num_clientes > MAXVET)
    {
        printf("Quantidade de cliente invalida\n");
        return 1;
    }
    
    for (i = 0; i < num_clientes; i++)
    {
        valor = 0;
        printf("-------- CLIENTE %d --------\n", i + 1);
        printf("INFORME A QUANTIDADE DE HORAS: ");
        scanf("%f", &horas);
        printf("\n");

        if (horas <= 0)
        {
            printf("Quantidade de horas invalida\n");
            return 1;
        }
        
        horas = ceil(horas);

        valor_final[i] = calcula_taxas(horas);
        valor_tot += valor_final[i];
    }

    printf("|---------- VALORES -----------|\n");

    for (i = 0; i < num_clientes; i++)
    {
        printf("|------------------------------|\n");
        printf("|  CLIENTE %d  |  VALOR R$ %.2f |\n", i + 1, valor_final[i]);
    }
    printf("|------------------------------|\n");
    printf("|    TOTAL    |  VALOR R$ %.2f |\n", valor_tot);
    printf("|------------------------------|\n\n");

    return 0;
}

float calcula_taxas(float horas)
{
    float valor;

    if (horas < 3)
        {
            valor = TAXA_MIN;
        }
        else if (horas <= 18)
        {
            valor = ((horas - 3) * TAXA_HORA_ADICIONAL) + TAXA_MIN;
        }
        else if (horas >= 19)
        {
            valor = TAXA_24_HORAS;
        }
    return valor;
}
