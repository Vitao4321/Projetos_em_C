#include <stdio.h>
#define MAXVET 100

int main()
{
    // Definição das variaveis
    int qtd[MAXVET], codigo[MAXVET], i, cod_cliente, escolha, cod_prod, cod_qtd, verifica, qtd_estoque, achou;

    //Pega a quantidade de itens que o estoque tem
    printf("--------------------------------------------------------------\n");
    printf("Digite quantos produtos o estoque tera (MAXIMO DE 100 ITENS): ");
    scanf("%d", &qtd_estoque);
    printf("--------------------------------------------------------------\n");

    // Pega o CODIGO e a QUANTIDADE
    for (i = 0; i < qtd_estoque; i++)
    {
        printf("Digite o codigo do produto %d: ", i + 1);
        scanf("%d", &codigo[i]); 

        printf("Digite a quantidade do produto %d: ", i + 1);
        scanf("%d", &qtd[i]);
    }
    
    printf("--------------------------------------------------------------\n");
    printf("Deseja fazer um pedido?  (1 - SIM || 2 - NÃO)  ");
    scanf("%d", &escolha);
    printf("--------------------------------------------------------------\n");

    // Pega o pedido e verifica se tem estoque disponivel
    while (escolha == 1)
    {
        printf("Digite o codigo do consumidor:  ");
        scanf("%d", &cod_cliente);
        printf("Digite o codigo do produto que deseja comprar:  ");
        scanf("%d", &cod_prod);
        printf("Digite a quantidade a ser comprada:  ");
        scanf("%d", &cod_qtd);

        achou = 0;
        for (i = 0; i < qtd_estoque; i++)
        {
            if (codigo[i] == cod_prod && qtd[i] >= cod_qtd)
            {
                printf("COMPRA REALIZDA COM SUCESSO\n");
                qtd[i] -= cod_qtd;
                achou = 1;
                break;
            } 
        }

        if (achou == 0)
            {
                printf("NÃO TEMOS A MERCADORIA EM ESTOQUE SUFICIENTE OU CODIGO DIGITADO NÃO EXISTE\n");
            }

        printf("--------------------------------------------------------------\n");
        printf("Deseja fazer outro pedido?  (1 - SIM || 2 - NÃO)  ");
        scanf("%d", &escolha);

    }

    // Mostra o saldo final do estoque apos os pedidos
    printf("--------------------------------------------------------------\n");
    for (i = 0; i < qtd_estoque; i++)
    {
        printf("CODIGO DO PRODUTO: %d || QUANTIDADE: %d\n", codigo[i], qtd[i]);
    }
    
    return 0;
}
