#include <stdio.h>

int main()
{
// Declaração de variáveis
int comodo = 0, continua = 1, valor_classe = 0;
float tot_lampadas = 0, tot_potencia = 0, classe_1 = 15.0, classe_2 = 18.0, classe_3 = 20.0;
float comprimento = 0, largura = 0, metro_quadrado = 0, potencia = 0, lampadas = 0;

printf("----------------------------------------------------------\n");
printf("Determinar o numero de minimo de lampadas para cada comodo\n");
printf("----------------------------------------------------------\n");

while (continua == 1)
{
    // Seleciona o comodo
    printf("-----------------------------------\n");
    printf("Selecione o comodo que deseja\n");
    printf("1 - QUARTO \n");
    printf("2 - SALA DE TV \n");
    printf("3 - SALAS \n");
    printf("4 - COZINHA \n");
    printf("5 - VARANDA \n");
    printf("6 - BANHEIRO \n");
    printf("Digite o comodo: ");
    scanf("%d", &comodo);

    // Medidas e Calculo do m2
    printf("-----------------------------------\n");
    printf("Digite o comprimento do comodo: ");
    scanf("%f", &comprimento);
    printf("Digite a largura do comodo: ");
    scanf("%f", &largura);
    printf("-----------------------------------\n");
    metro_quadrado = comprimento * largura;

    // Escolha para cada comodo
    switch (comodo)
    {
    case 1:
        potencia = metro_quadrado * classe_1;
        printf("Comodo -> QUARTO\n");
        break;
    case 2:
        potencia = metro_quadrado * classe_1;
        printf("Comodo -> SALA DE TV\n");
        break;
    case 3:
        potencia = metro_quadrado * classe_2;
        printf("Comodo -> SALAS\n");
        break;
    case 4:
        potencia = metro_quadrado * classe_2;
        printf("Comodo -> COZINHA\n");
        break;
    case 5:
        potencia = metro_quadrado * classe_2;
        printf("Comodo -> VARANDA\n");
        break;
    case 6:
        potencia = metro_quadrado * classe_3;
        printf("Comodo -> BANHEIRO\n");
        break;
    default:
        printf("Comodo invalido.\n");
        break;
    }

    // Calculo das informações 
    tot_potencia += potencia;
    lampadas = potencia / 60;
    tot_lampadas += lampadas;

    // Apresenta os dados
    printf("Metro quadrado: %.2f\n", metro_quadrado);
    printf("Potencia de iluminação: %.2f\n", potencia);
    printf("Numero de lampadas necessarias: %.2f\n", lampadas);
    printf("--------------------------------\n");
    printf("Deseja adicionar mais 1 comodo? \n");
    printf("Para SIM digite 1 \n");
    printf("Para NAO digite outro numero \n");
    scanf("%d", &continua);

}

printf("-------------------------------------------\n");
printf("O total de potencia sera de: %.2f\n", tot_potencia);
printf("O total de lampadas sera de: %.2f\n", tot_lampadas);

}
