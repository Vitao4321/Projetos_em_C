#include <stdio.h>

int main(){
    // Definição das variaveis
    float salario, novoSalario, imposto;
    int escolhaMenu = 0;

    // Escolhendo qual metodo usar
    printf("Imposto - DIGITE 1\n");
    printf("Novo Salario - DIGITE 2\n");
    printf("Classificacao - DIGITE 3\n");
    scanf("%i", &escolhaMenu);

    printf("Digite o seu salario: \n");
    scanf("%f", &salario);

    // Caso usuario escolha opção 1 - IMPOSTO - Case 1
    // Caso usuario escolha opção 2 - NOVO SALARIO - Case 2
    // Caso usuario escolha opção 3 - CLASSIFICAÇAO - Case 3
    switch (escolhaMenu)
    {
    case 1:
        if (salario < 500.00){
             printf("O percentual do imporsto e de 5 porcento\n");
            imposto = salario * 0.05;
            printf("O valor do imposto em cima do salario e de: %f\n", imposto);
            novoSalario = salario - imposto;
            printf("O valor do salario com o desconto do imposto e de: %f\n", novoSalario);
        }

        else if (salario > 500.00 && salario < 850.00 ){
            printf("O percentual do imporsto e de 5 porcento\n");
            imposto = salario * 0.10;
            printf("O valor do imposto em cima do salario e de: %f\n", imposto);
            novoSalario = salario - imposto;
            printf("O valor do salario com o desconto do imposto e de: %f\n", novoSalario);
            }
        else if (salario > 850.00){
             printf("O percentual do imporsto e de 15 porcento\n");
            imposto = salario * 0.15;
            printf("O valor do imposto em cima do salario e de: %f\n", imposto);
            novoSalario = salario - imposto;
            printf("O valor do salario com o desconto do imposto e de: %f\n", novoSalario);
        }
        break;

    case 2:
        if (salario > 1500)
        {
                printf("O aumento do salario vai ser de 25 reais \n");
                novoSalario = salario + 25.00 ;
        }
        else if (salario >= 750 && salario < 1500 )
        {
                printf("O aumento do salario vai ser de 50 reais \n");
                novoSalario = salario + 50.00 ;  
        }
        else if (salario >= 450.00 && salario < 750.00){
                printf("O aumento do salario vai ser de 75 reais \n");
                novoSalario = salario + 75.00 ;
            }
        else if (salario < 450 )
        {
             printf("O aumento do salario vai ser de 100 reais \n");
             novoSalario = salario + 100.00 ;
        }
            
        break;
    case 3:
        if (salario <= 700)
        {
            printf("MAL REMUNERADO\n");
        }
        else if (salario > 700)
        {
            printf("BEM REMUNERADO\n");
        }      
        break;
    default:
        break;
    }
    return 0;
}
