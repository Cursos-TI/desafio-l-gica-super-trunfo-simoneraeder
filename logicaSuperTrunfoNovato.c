#include <stdio.h>
 
int main() {

    printf("Lógica Super Trunfo, Novato!\n \t");
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


  // usando o if e o else suas comparações

printf("Vamos para as comparações das cidades: Salvador X Brasília \n" );

    
    if (populacao > populacao_2) {
           printf("Cidade 1 tem maior população.\n");
         } else {
             printf("Cidade 2 tem maior população.\n");
         }
   
         if (pontos_turisticos > pontos_turisticos_2) {
            printf("Cidade 1 tem mais Pontos Turísticos.\n");
          } else {
           printf("Cidade 2 tem mais Pontos Turísticos.\n");
          }
               
    if (area > area_2) {
        printf("Cidade 1 tem maior área km².\n");
      } else {
          printf("Cidade 2 tem maior área km².\n");
      }

      if (pib > pib_2) {
        printf("Cidade 1 tem maior PIB.\n");
      } else {
          printf("Cidade 2 tem maior PIB.\n");
      }

      if ( pib_per_capita < pib_per_capita_2 ) {
        printf("Cidade 1 tem menor PIB Per Capita.\n");
      } else {
          printf("Cidade 2 tem menor PIB Per Capita.\n");
      }

      if ( densidade_populacional < densidade_populacional_2 ) {
        printf("Cidade 1 tem menor Densidade Populacional.\n");
      } else {
          printf("Cidade 2 tem menor Densidade Populacional.\n");
      }


      if ( super_poder_da_carta > super_poder_da_carta_2 ) {
        printf("Cidade 1 tem o maior número do Super Poder da Carta.\n");
      } else {
          printf("Cidade 2 tem o maior número do Super Poder da Carta.\n");
      }
      
printf("*** A Cidade 1 Ganhou no Super Trunfo :o ***\n");

       // interação com o usuário

    printf("Qual é a sua carta?\n\t");

    printf("Digite o nome do seu país:");
    
    scanf("%s", &pais);

    printf("Seu país é: %s\n", pais);

    printf("Digite o nome do seu estado:");
    
    scanf("%s", &estado);

    printf("Seu estado é: %s\n", estado);

    printf("Digite o nome da sua cidade:");

    scanf("%s", &cidade);

    printf("O nome da cidade:%s\n", cidade);

    printf("Digite a populacao da sua cidade:");

    scanf("%d", &populacao);

    printf("A população:%u Bilhões\n", populacao);

    printf("Digite os pontos turisticos da sua cidade:");

    scanf("%d",&pontos_turisticos);

    printf("O número total de pontos turísticos:%d\n",pontos_turisticos);

    printf("Digite a área da sua cidade:");

    scanf("%f", &area);

    printf("Sua área em KM²:%f\n", area);

    printf("digite o PIB da sua cidade:");

    scanf("%fBilhões", &pib);

    printf("o PIB da sua cidade:%f\n",pib);

    printf("Digite o código da carta:");
  
    scanf("%s", &codigo);

    printf("O código da sua carta:%s\n\t", codigo);
        
    printf("Obrigada, por apresentar a sua carta!\n");

    return 0;

}