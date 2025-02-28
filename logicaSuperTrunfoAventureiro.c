#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main() {

    printf("Lógica Super Trunfo, Aventureiro!\n \t");
    printf("****Carta 1 ****\n");

// Seguem as variáveis da Carta 1

char pais[50] = "Brasil" ;
char estado[50] = "Bahia" ;
char cidade[30] = "Salvador" ;
unsigned long int populacao = 294000 ;
int pontos_turisticos = 20 ;
float area = 791.0 ; 
float pib = 15.0 ;
float pib_per_capita = 0.0510;
float densidade_populacional = 0.372;
char codigo[50] = "BOI" ;
int super_poder_da_carta =  13000;    


// printf, mostrando suas variáveis o que são.

printf("País = %s \n",pais);

printf("Estado = %s \n",estado);

printf("Cidade = %s \n",cidade);

printf("Populacão = %u milhões \n",populacao);

printf("Pontos turísticos = %d \n", pontos_turisticos);

printf("Área = %.1f km² \n",area);

printf("PIB = %.1f bilhões \n",pib);

printf("PIB Per Capita = %.1f bilhões \n",pib_per_capita);

printf("Densidade Populacional = %.1f bilhões \n",densidade_populacional);

printf("Código = %s \n ", codigo);

printf("Super Poder da Carta 1 = %d \n", super_poder_da_carta);

// Seguem as variáveis da Carta 2

printf("****Carta 2****:\n");

char pais_2[50] = "Brasil" ;
char estado_2[50] = "Distrito Federal" ;
char cidade_2[30] = "Brasília";
unsigned long int populacao_2 = 132000 ;
int pontos_turisticos_2 = 10 ;
float area_2 = 530.0; 
float pib_2 = 45.0 ;
float pib_per_capita_2 = 0.3409;
float densidade_populacional_2 = 0.24905; 
char codigo_2[50] = "DOII" ;
int super_poder_da_carta_2 = 33000 ;


   // printf, mostrando suas variáveis o que são.

printf("País = %s \n",pais_2);

printf("Estado = %s \n",estado_2);

printf("Cidade = %s \n",cidade_2);

printf("Populacão = %u milhões \n",populacao_2);

printf("Pontos turísticos = %d \n", pontos_turisticos_2);

printf("Área = %.1f km² \n",area_2);

printf("PIB = %.1f bilhões \n",pib_2);

printf("PIB Per Capita = %.1f bilhões \n",pib_per_capita_2);

printf("Densidade Populacional = %.1f bilhões \n",densidade_populacional_2);

printf("Código = %s\n", codigo_2);    

printf("Super Poder da Carta 2 = %d \n", super_poder_da_carta_2);

// Menu interativo 

int opcao;
int regras;

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Regras do Jogo\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

 
  switch (opcao) {
    case 1:
      printf("Iniciando...... \n");
      break;
    
      case 2:
      printf("Seguem as regras:\n");
      printf("Digite a opção da regra do jogo que deseja: 1 ou 2. \n");
      scanf("%d", &regras);

      switch (regras)
      {
      case 1: printf("Regra 1: Chame os amigos!\n");
      break;

      case 2: printf("Regra 2: Divirta-se!\n");
      
      default:
       break;
}
break;

case 3:
printf("Você saiu do jogo.\n");

default:
break;
    
 }

//

int EscolhadoJogador, EscolhaComputador;
int Cidade;
 srand(time(0));

 printf("Pronto para jogar? Vamos começar...\n");
 printf("1. Escolha qual a cidade você quer jogar.\n");
 printf("Escolha uma opção: \n");
 scanf("%d", &EscolhadoJogador);


EscolhaComputador = rand() % 2 + 1;

switch (EscolhadoJogador)
{
case 1: printf("Cidade 1 Salvador - Cidade 2 Brasília\n");
scanf("%d", &Cidade);

 switch (Cidade)

    {
    case 1:   printf("Jogador: Salvador foi a escolhida por você\n");
    break;
    case 2:   printf("Jogador: Brasília foi a escolhida por você\n");
    break;
    
    default:
      break;
    }

}


switch (EscolhaComputador)
{
case 1: printf("Cidade 1 Salvador - Cidade 2 Brasília\n");
scanf("%d", &Cidade);

 switch (Cidade)

    {
    case 1:   printf("Computador: Salvador foi a escolhida por você\n");
    break;
    case 2:   printf("Computador: Brasília foi a escolhida por você\n");
    break;
    
    default:
      break;
    }

}

printf("Escolha um atributo da cidade \n");
printf("1. Ponto Turístico.\n");
printf("2.População");
printf("3.Área km²");
printf("Escolha uma opção: \n");
scanf("%d", &EscolhadoJogador);

switch (EscolhadoJogador)
{
case 1:
  printf("Jogador: Ponto Turístico -\n ");
  break;
  case 2:
  printf("Jogador: População -\n ");
  break;
  case 3:
  printf("Jogador:Área km² -\n ");
  break;
default:
printf("Opção inválida!\n");
  break;
}

switch (EscolhaComputador)
{
case 1:
  printf("Computador: Ponto Turístico -\n ");
  break;
  case 2:
  printf("Computador: População -\n ");
  break;
  case 3:
  printf("Computador:Área km² - \n");
  break;
}

if(EscolhadoJogador == EscolhaComputador)
{
  printf("O jogo empatou!!!!\n");

}  else if ((EscolhadoJogador == 1) && ( EscolhaComputador==3) ||
(EscolhadoJogador == 2) && (EscolhaComputador==1) ) ||
 (EscolhadoJogador == 3 ) && (EscolhaComputador == 2) 

  printf("Parabéns você ganhou!!!!!\n");
  else {
    printf("Você perdeu!!!\n");
  }


return 0;

}