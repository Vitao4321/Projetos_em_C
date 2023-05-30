#include <stdio.h>

int main()
{
    // Declaração de variáveis
    int idade = 0, sim_masc = 0, nao_masc = 0, contador_masc = 0, sim_fem = 0, nao_fem = 0, contador_fem = 0, sexo = 0, continua = 1, escolha = 0;
    int idade_masc_sim = 0, idade_masc_nao = 0, idade_fem_sim = 0, idade_fem_nao = 0;

    //Introdução ao codigo - CABEÇALHO
    printf("----------------------------------------------\n");
    printf("Pesquisa referente a aprovação do nono produto\n");
    printf("----------------------------------------------\n");

    //Estrutura de repetição - pegar informações 
    while (continua == 1)
    {
        //Definição do sexo
        printf("Para o sexo MASCULINO digite 1\n");
        printf("Para o sexo FEMININO digite 2\n");
        printf("Digite o sexo: ");
        scanf("%d", &sexo);
        printf("----------------------------------------------\n");
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        printf("----------------------------------------------\n");
        printf("Para SIM digite 1\n");
        printf("Para NAO digite 2\n");
        printf("Voce gostou do produto ? ");
        scanf("%d", &escolha);
        printf("----------------------------------------------\n");

        //Sexo MASCULINO
        if (sexo == 1) 
        {
            contador_masc ++;
            //Estrutura - gostou ou não do produto
            if (escolha == 1) 
            {
                idade_masc_sim += idade;
                sim_masc ++;
            }
            else if (escolha == 2)
            {
                idade_masc_nao += idade;
                nao_masc ++;
            }
            else
            {
                printf("Opcao invalida!\n");
                continue;
            }
        }
        //Sexo FEMININO
        else if (sexo == 2) 
        {
            contador_fem ++;
            //Estrutura - gostou ou não do produto
            if (escolha == 1) 
            {
                idade_fem_sim += idade;
                sim_fem ++;
            }
            else if (escolha == 2)
            {
                idade_fem_nao += idade; 
                nao_fem ++;
            }
            else
            {
                printf("Opcao invalida!\n");
                continue;
            }
        }
        else
        {
            printf("Opcao invalida!\n");
            continue;
        }
        //Variavel - continua ou NAO o loop
        printf("Para SIM digite 1\n");
        printf("Para NAO digite 2\n");
        printf("Deseja continuar ? ");
        scanf("%d", &continua);
        printf("----------------------------------------------\n");

    //Apresentação dos dados obtidos
    }
    if (sim_masc != 0)
    {
        printf("O total de pessoas do sexo MASCULINO que responderam SIM foi de: %d, e a sua media de idade foi de: %d\n", sim_masc, idade_masc_sim / sim_masc);
    }
    else
    {
         printf("O total de pessoas do sexo MASCULINO que responderam SIM foi de: 0\n");
    }

    if (nao_masc != 0)
    {
        printf("O total de pessoas do sexo MASCULINO que responderam NAO foi de: %d, e a sua media de idade foi de: %d\n", nao_masc, idade_masc_nao / nao_masc);
    }
    else 
    {
         printf("O total de pessoas do sexo MASCULINO que responderam NAO foi de: 0\n");
    }

    if (sim_fem != 0) 
    {
        printf("O total de pessoas do sexo FEMININO que responderam SIM foi de: %d, e a sua media de idade foi de: %d\n", sim_fem, idade_fem_sim / sim_fem);
    }
    else 
    {
         printf("O total de pessoas do sexo FEMININO que responderam SIM foi de: 0\n");
    }
    
    if (nao_fem != 0)
    {
        printf("O total de pessoas do sexo FEMININO que responderam NAO foi de: %d, e a sua media de idade foi de: %d\n", nao_fem, idade_fem_nao / nao_fem);
    }
    else
    {
        printf("O total de pessoas do sexo FEMININO que responderam NAO foi de: 0\n");
    }
    return 0;
}
