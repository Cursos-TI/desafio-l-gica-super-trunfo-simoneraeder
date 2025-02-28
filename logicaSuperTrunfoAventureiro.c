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
int pontos_turisticos_2 = 20 ;
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

//Comparação com atributos, de estrutudas com decisão aninhadas



printf("O Ponto Turístico, qual que vence? Cidade 1 ou Cidade 2?\n");

if (pontos_turisticos > pontos_turisticos_2) {
  printf("A Cidade 1 venceu!!!!\n");
}
else if (pontos_turisticos< pontos_turisticos_2){
  printf("A Cidade 2 venceu!!!\n");
}
else{
  printf("Houve um empate!!\n");
}

printf("Na área km², qual que vence? Cidade 1 ou Cidade 2?\n");

if (area > area_2) {
  printf("A Cidade 1 venceu!!!!\n");
}
else if (area < area_2){
  printf("A Cidade 2 venceu!!!\n");
}
else{
  printf("Houve um empate!!\n");
}

printf("Na população, qual que vence? Cidade 1 ou Cidade 2?\n");

if (populacao > populacao_2) {
  printf("A Cidade 1 venceu!!!!\n");
}
else if (populacao < populacao_2){
  printf("A Cidade 2 venceu!!!\n");
}
else{
  printf("Houve um empate!!\n");
}

printf("No PIB Per Capita, qual que vence? Cidade 1 ou Cidade 2?\n");

if (pib_per_capita > pib_per_capita_2) {
  printf("A Cidade 1 venceu!!!!\n");
}
else if (pib_per_capita < pib_per_capita_2){
  printf("A Cidade 2 venceu!!!\n");
}
else{
  printf("Houve um empate!!\n");
}

printf("Na Densidade Popuacional, qual que vence? Cidade 1 ou Cidade 2?\n");

if (densidade_populacional > densidade_populacional_2) {
  printf("A Cidade 1 venceu!!!!\n");
}
else if (densidade_populacional < densidade_populacional_2){
  printf("A Cidade 2 venceu!!!\n");
}
else{
  printf("Houve um empate!!\n");
}

printf("Parabéns a Cidade 1 Venceu!!!!!\n");

printf("Nas ambas cidades, temos mais ou menos de 50 lugares para visitar?\n");

if ( pontos_turisticos > 50 && pontos_turisticos_2 > 50)
{printf("Ambos os pontos turísticos tem mais que 50 lugares para visitar\n");  
}
  else if (pontos_turisticos <  50 && pontos_turisticos_2 < 50) {
    printf(" Ambos os pontos turísticos tem menos que 50 lugares para visitar\n");
  }
  else {
    printf("são diferentes \n");
  }





return 0;

}