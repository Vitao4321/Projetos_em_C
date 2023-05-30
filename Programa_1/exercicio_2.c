#include <stdio.h>

int main() {
// Declaração das variaveis
float custoCasamento = 45.00, custoFoto = 35.00,guardaMes = 800.00, vestidoNoiva, fotografos, destinoViagem, valorVestido, valorViagem, valorTot = 0, valorFesta, valorFoto,valorMes;
int qtdPessoas, qtdFotos, viagem, desejaFesta, desejaFoto, desejaViagem;

//PERGUNTA deseja fazer casamento
printf("deseja fazer festa de casamento: (1 - PARA SIM \\ 2 - PARA NAO) ");
scanf("%d", &desejaFesta);

if (desejaFesta == 1){
    printf("Qual a quantidade de convidados: ");
    scanf("%d", &qtdPessoas);
    valorFesta = qtdPessoas * custoCasamento;

    printf("O valor da festa e de: %.2f \n", valorFesta);
    valorTot = valorFesta;
    
}

else {
    printf("Voce escolheu nao fazer festa:  ");
}

//PERGUNTA deseja tirar fotos
printf("deseja tirar foto: (1 - PARA SIM \\ 2 - PARA NAO) ");
scanf("%d", &desejaFoto);

if (desejaFoto == 1){
    printf("Qual a quantidade de fotos: ");
    scanf("%d", &qtdFotos);
    valorFoto = qtdFotos * custoFoto;

    printf("O valor das fotos ficou em: %.2f \n", valorFoto);
    valorTot = valorTot + valorFoto;
}

else {
    printf("Voce escolheu nao tirar foto:  ");
}

//PERGUNTA deseja viajar
printf("deseja viajar: (1 - PARA SIM \\ 2 - PARA NAO) \n");
scanf("%d", &desejaViagem);

if (desejaFesta == 1){
    printf("NATAL , R$6500(DIGITE 1)\n");
    printf("FORTALEZA , R$8000(DIGITE 2)\n");
    printf("SERRA GAUCHA , R$5600(DIGITE 3)\n");

    printf("Para qual lugar voce deseja viajar: \n");
    scanf("%d", &viagem);
    
    switch (viagem)
    {
    case 1:
        valorTot += 6500.00;
        break;
    case 2:
        valorTot += 8000.00;
        break;
    case 3:
        valorTot += 5600.00;    
    default:
        break;
    }
}

else {
    printf("Voce escolheu nao tirar foto:  ");
}

//PERGUNTA valor do vestido
printf("Qual e o valor do vestido: \n");
scanf("%f", &valorVestido);

printf("O VALOR TOTAL GASTO NO CASAMENTO E DE: %.2f\n", &valorTot);

//CONTA meses com variavel meses que tera que guardar o dinheiro
valorMes = valorTot / guardaMes;

printf("SERAO NECESSARIOS %.2f PARA FAZER O CASAMENTO \n", &valorMes);
}
