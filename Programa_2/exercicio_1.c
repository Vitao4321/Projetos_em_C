#include <stdio.h>
#include <float.h>

int main() 
{
    //Declaração das variaveis 
    float preco_Kw_hora = 0, qtd_Kw_consumo = 0, total_pagar = 0, tot_residencia = 0, tot_comercial = 0, tot_industrial = 0, media = 0, maior_consumo = 0, menor_consumo = FLT_MAX;
    int numero_consumi = 0, codigo_consumidor = 0, contador = 0;

    // Introdução ao codigo
    printf("----------------------------------------------\n");
    printf("Pesquisa de cunsumo mensal de energia eletrica\n");
    printf("----------------------------------------------\n");

    printf("Informe o preço do KW/h: ");
    scanf("%f", &preco_Kw_hora);   
    printf("----------------------------------------------\n");
    printf("Informe o numero do consumidor: ");
    scanf("%d", &codigo_consumidor);     

    // Looping para poder esolhor qual o tipo de consumidor
    while (codigo_consumidor != 0)
    {
        contador += 1;
        printf("----------------------------------------------\n");
        printf("Preencha os campos abaixo para uma pesquisa referente ao consumo de energia mensal \n");
        printf("Para RESIDENCIA digite - 1\n");
        printf("Para COMERCIAL digite - 2\n");
        printf("Para INDUSTRIAL digite - 3\n");
        printf("Digite o tipo de consumidor: ");
        scanf("%d", &numero_consumi);
        printf("----------------------------------------------\n");

        printf("Informe a quantidade de Kw/h que foi consumida no mes: ");
        scanf("%f", &qtd_Kw_consumo);
        printf("----------------------------------------------\n");

        //Guarda maior e menor consumo
        if (maior_consumo < qtd_Kw_consumo) {
            maior_consumo = qtd_Kw_consumo;
        } 
        else if (menor_consumo > qtd_Kw_consumo){
            menor_consumo = qtd_Kw_consumo;
        }

        //Valor a pagar - Referente ao tipo de consumidor
        switch (numero_consumi)
        {
        case 1:
            total_pagar = preco_Kw_hora * qtd_Kw_consumo;
            tot_residencia += total_pagar;
            printf("O total a pagar é de: %.f\n", total_pagar);
            break;
        case 2:
            total_pagar = preco_Kw_hora * qtd_Kw_consumo;
            tot_comercial += total_pagar;
            printf("O total a pagar é de: %.f\n", total_pagar);
            break;
        case 3:
            total_pagar = preco_Kw_hora * qtd_Kw_consumo;
            tot_industrial += total_pagar;
            printf("O total a pagar é de: %.f\n", total_pagar);
            break;
        default:
            break;
        } 

    //Pegar codigo do consumidor (0 condição de saida)
    printf("----------------------------------------------\n");
    printf("Para sair digite 0 no numero do consumidor \n");
    printf("Informe o numero do consumidor: ");
    scanf("%d", &codigo_consumidor);
    printf("----------------------------------------------\n");
    }

    //Exibição de dados
    printf("O total de consumo para RESIDENCIA foi de: %.2f\n", tot_residencia);
    printf("O total de consumo para COMERCIAL foi de: %.2f\n", tot_comercial);
    printf("O total de consumo para INDUSTRIAL foi de: %.2f\n", tot_industrial);
    printf("----------------------------------------------\n");
    media = (tot_comercial + tot_industrial + tot_residencia) / contador;
    printf("A media geral do consumo é de: %.2f\n", media);
    printf("----------------------------------------------\n");
    printf("O maior consumidor verificado foi de: %.f\n", maior_consumo);

    printf("O menor consumidor verificado foi de: %.f\n", menor_consumo);
    printf()
    printf()

} 
