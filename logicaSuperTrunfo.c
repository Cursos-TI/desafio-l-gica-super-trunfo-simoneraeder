#include <stdio.h>
 
int main() {

    printf("Lógica Super Trunfo, Novato!\n \t");
    printf("****Carta 1 ****\n");

// Seguem as variáveis da Carta 1

    char pais[50] = "Brasil" ;
    char estado[50] = "Bahia" ;
    char cidade[30] = "Salvador" ;
    int populacao = 294983 ;
    int pontos_turisticos = 20 ;
    float area = 791.1 ; 
    float pib = 15.6 ;
    char codigo = "B_01" ;

    // printf, mostrando suas variáveis o que são.

   printf("País = %s \n",pais);

    printf("Estado = %s \n",estado);

    printf("Cidade = %s \n",cidade);

    printf("Populacão = %dmilhões \n",populacao);
    
    printf("Pontos turísticos = %d \n", pontos_turisticos);

    printf("Área = %.1fkm² \n",area);

    printf("PIB = %.1fbilhões \n",pib);
    
    printf("Código = [%^\n] ", codigo);

// Seguem as variáveis da Carta 2
   
    printf("****Carta 2****:\n");

    char pais_2[50] = "Brasil" ;
    char estado_2[50] = "Distrito Federal" ;
    char cidade_2[30] = "Brasília";
    int populacao_2 = 1325968 ;
    int pontos_turisticos_2 = 10 ;
    float area_2 = 530.1 ; 
    float pib_2 = 45.6 ;
    char codigo_2 = "D_02" ;

       // printf, mostrando suas variáveis o que são.

    printf("País = %s \n",pais_2);

    printf("Estado = %s \n",estado_2);

    printf("Cidade = %s \n",cidade_2);

    printf("Populacão = %dmilhões \n",populacao_2);
    
    printf("Pontos turísticos = %d \n", pontos_turisticos_2);

    printf("Área = %.1fkm² \n",area_2);

    printf("PIB = %.1fbilhões \n",pib_2);
    
    printf("Código = [%^\n]", codigo_2);    

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

    printf("A população:%dBilhões\n", populacao);

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
  
    scanf("[%^]", &codigo);

    printf("O código da sua carta:%d\n\t", codigo);

printf("Vamos para as Comparações das Cidades: \n Qual delas ganham?  Bahia ou Brasília "\n);
    
    if (populacao > populacao_2) {
           printf("Cidade 1 tem maior população.\n");
         } else {
             printf("Cidade 2 tem maior população.\n");
         }
   
        
    return 0;

}