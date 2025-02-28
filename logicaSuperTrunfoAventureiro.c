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


int opcao;
int regras;

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

 
  switch (opcao) {
    case 1:
      printf("Iniciando o jogo...\n");
      break;

      case 2:
      printf("Seguem as Explicações das regras\n");
      printf("Digite a opção da regra do jogo que deseja: 1 ou 2. \n");
      scanf("%d", &regras);



      switch (regras) {
      case 1:
      printf("Regra 1\n");
      break;

      case 2:
      printf("Regra 2\n");
      break;}

default:    
   
    

      case 3:
      printf("Você saiu do Jogo\n");
      break;



      }





return 0;

}