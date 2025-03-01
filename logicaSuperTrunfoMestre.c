#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main() {

    printf("Lógica Super Trunfo, Mestre!\n \t");

int resultado1, resultado2;
char primeiroAtributo, segundoAtributo;
int pontoTuristico1, pontoTuristico2, densidadePopulacional1, densidadePopulacional2, area1, area2;

//Gerar número aleatório

srand(time(0));

pontoTuristico1 = 10;
pontoTuristico2 = 20;
densidadePopulacional1 = 94;
densidadePopulacional2 = 32;
area1 = 79;
area2 = 53;

// Menu interativo, iniciando o jogo.

printf("******* Bem vindo, ao Jogo!!****\n");
printf("Escolha o Primeiro atributo:\n");
printf("P. Ponto turístico \n");
printf("D. Densidade Populacional \n");
printf("A. Área\n");

printf("Escolha a comparação: \n");
scanf("%c", &primeiroAtributo);

switch (primeiroAtributo)
{
case 'P' ;
     'p' ;
     printf("Você escolheu a opção Ponto Turístico"\n);
     resultado1 = pontoTuristico1 > pontoTuristico2 ? 1 : 0 ;
    break;

    case 'D';
     'd';
     printf("Você escolheu a opção Densidade Populacional"\n);
     resultado1 = densidadePopulacional1 > densidadePopulacional2 ? 1 : 0 ;
     break;

     case 'A';
     'a';
     printf("Você escolheu a opção Área"\n);
     resultado1 = area1 > area2 ? 1 : 0 ;
     break;

default:
printf("Opção inválida!\n");
    break;
}

printf("Escolha o segundo atributo\n");
printf("Atenção: Você deve escolher um atributo diferente ao primeiro\n");
printf("P. Ponto turístico \n");
printf("D. Densidade Populacional \n");
printf("A. Área\n");
printf("Escolha a comparação: \n");
scanf("%c", &segundoAtributo);


if (primeiroAtributo == segundoAtributo)
{
    printf("Você escolheu o mesmo atributo");
} else {
    switch (segundoAtributo)
{
case 'P';
     'p';
     printf("Você escolheu a opção Ponto Turístico"\n);
     resultado2 = pontoTuristico1 > pontoTuristico2 ? 1 : 0 ;
    break;

    case 'D';
     'd';
     printf("Você escolheu a opção Densidade Populacional"\n);
     resultado2 = densidadePopulacional1 > densidadePopulacional2 ? 1 : 0 ;
     break;

     case 'A';
     'a';
     printf("Você escolheu a opção Área"\n);
     resultado2 = area1 > area2 ? 1 : 0 ;
     break;

default:
printf("Opção inválida!\n");
    break;
}
}

if (resultado1 && resultado2)
{
printf("Parabéns, você venceu\n");

} else if (resultado1 != resultado2)
{
    printf("Empatou!!!!\n");
}else {
    printf("Infelizmente você perdeu!!!!\n");
}





















    return 0;
}