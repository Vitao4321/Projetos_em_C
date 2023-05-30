#include <stdio.h>

int main()
{
    float rendimentoMensal, agua, luz, telefone, supermercado, combustivel, lazer, educacao, outros, total_despesas = 0;

    // Entrada de Dados 
    printf("Informe o rendimento mensal: ");
    scanf("%f", &rendimentoMensal);

    printf("Informe o as despesas mensais: \n");
    printf("Agua: ");
    scanf("%f", &agua);
    printf("Luz: ");
    scanf("%f", &luz);
    printf("Telefone: ");
    scanf("%f", &telefone);
    printf("Supermercado: ");
    scanf("%f", &supermercado);
    printf("Combustivel: ");
    scanf("%f", &combustivel);
    printf("Lazer: ");
    scanf("%f", &lazer);
    printf("Educação: ");
    scanf("%f", &educacao);
    printf("Outros: ");
    scanf("%f", &outros);
    printf("\n");

    // Calculo dos 25% referente ao Rendimento Total
    if (agua > rendimentoMensal * 0.25) {
        printf("A despesa de agua ultrapassou o limite dos 25%% do redimento total. \n\n");
    }
    if (luz > rendimentoMensal * 0.25) {
        printf("A despesa de luz ultrapassou o limite dos 25%% do redimento total. \n\n");
    }
    if (telefone > rendimentoMensal * 0.25) {
        printf("A despesa de telefone ultrapassou o limite dos 25%% do redimento total. \n\n");
    }
    if (supermercado > rendimentoMensal * 0.25) {
        printf("A despesa de supermercado ultrapassou o limite dos 25%% do redimento total. \n\n");
    }
    if (combustivel > rendimentoMensal * 0.25) {
        printf("A despesa de combustivel ultrapassou o limite dos 25%% do redimento total. \n\n");
    }
    if (lazer > rendimentoMensal * 0.25) {
        printf("A despesa de lazer ultrapassou o limite dos 25%% do redimento total. \n\n");
    }
    if (educacao > rendimentoMensal * 0.25) {
        printf("A despesa de educação ultrapassou o limite dos 25%% do redimento total. \n\n");
    }
    if (outros > rendimentoMensal * 0.25) {
        printf("A despesa de outros ultrapassou o limite dos 25%% do redimento total. \n\n");
    }

    //Calculo do total das despesas
    total_despesas = agua + luz + telefone + supermercado + combustivel + lazer + educacao + outros;

    // Resultados com as porcentagens referente a Rendimento Mensal
    printf("O gasto com agua equivale a %.2f%% do rendimento total. \n", agua/rendimentoMensal*100);
    printf("O gasto com luz equivale a %.2f%% do rendimento total. \n", luz/rendimentoMensal*100);
    printf("O gasto com telefone equivale a %.2f%% do rendimento total. \n", telefone/rendimentoMensal*100);
    printf("O gasto com supermercado equivale a %.2f%% do rendimento total. \n", supermercado/rendimentoMensal*100);
    printf("O gasto com combustivel a %.2f%% do rendimento total. \n", combustivel/rendimentoMensal*100);
    printf("O gasto com lazer equivale a %.2f%% do rendimento total. \n", lazer/rendimentoMensal*100);
    printf("O gasto com educação equivale a %.2f%% do rendimento total. \n", educacao/rendimentoMensal*100);
    printf("O gasto com outros equivale a %.2f%% do rendimento total. \n\n", outros/rendimentoMensal*100);
    printf("O valor que sobrou do rendimento mensal é de: %.2f, o que equivale a %.2f%% do rendimento mensal", rendimentoMensal - total_despesas, (rendimentoMensal - total_despesas)/rendimentoMensal*100);
}
