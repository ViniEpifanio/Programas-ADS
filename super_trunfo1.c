#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  
  //Tipos de caracteres

  char nome1[50];
  char nome2[50];
  unsigned long int populacao1, populacao2; 
  int pontos1, pontos2;
  int opcao1, opcao2;
  int resultado1, resultado2;
  float area1, area2;
  float pib1, pib2;

  //Visualização na tela e leitura de informações

   
  printf("Preencha o nome do país (apenas uma palavra): ");
  scanf("%s", nome1);

  printf("Preencha a população do país: ");
  scanf("%lu", &populacao1);

  printf("Preencha a área total do país em Km² (apenas números): ");
  scanf("%f", &area1);

  printf("Preencha o PIB do país: ");
  scanf("%f", &pib1);

  printf("Prencha o número de pontos turísticos do país: ");
  scanf("%d", &pontos1);

  printf("\nPreencha o nome do país (apenas uma palavra): ");
  scanf("%s", nome2);

  printf("Preencha a população do país: ");
  scanf("%lu", &populacao2);

  printf("Preencha a área total do país em Km² (apenas números): ");
  scanf("%f", &area2);

  printf("Preencha o PIB do país: ");
  scanf("%f", &pib2);

  printf("Prencha o número de pontos turísticos do país: ");
  scanf("%d", &pontos2);

  //Cálculo densidade populacional
  
  double densidade1 = populacao1 / area1;
  double densidade2 = populacao2 / area2;

  //Cálculo PIB per capita

  float pib_per_capita1 = pib1 / populacao1;
  float pib_per_capita2 = pib2 / populacao2;

  //Cálculo Super Poder

  float super_poder1 = ( populacao1 + pontos1 + area1 + pib1 + (densidade1 / 1) + pib_per_capita1 );
  float super_poder2 = ( populacao2 + pontos2 + area2 + pib2 + (densidade2 / 1) + pib_per_capita2 );

  //Mostragem das cartas

  printf("\nCarta 1\n");
  printf(" Nome do país: %s\n", nome1);
  printf(" População do país: %lu\n Área do país: %.2f KM²\n PIB do país: %.2f\n Número de pontos turísticos: %d\n", populacao1, area1, pib1, pontos1);
  printf(" Densidade populacional: %.2f habitantes por Km²\n", densidade1);
  printf(" PIB per capita: %.2f\n", pib_per_capita1);
  printf(" Super Poder: %.2f\n\n", super_poder1);

  printf("Carta 2\n");
  printf(" Nome do país: %s\n", nome2);
  printf(" População do país: %lu\n Área do país: %.2f KM²\n PIB do país: %.2f\n Número de pontos turísticos: %d\n", populacao2, area2, pib2, pontos2);
  printf(" Densidade populacional: %.2f habitantes por Km²\n", densidade2);
  printf(" PIB per capita: %.2f\n", pib_per_capita2);
  printf(" Super Poder: %.2f\n\n", super_poder2);

  
  //Mostragem dos resultados

  printf("### Comparação entre as cartas ###\n\n");
  
    printf("Escolha duas categorias de comparação:\n\n");

    printf("Escolha a primeira categoria:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite a opção desejada (1-7): ");
    scanf("%d", &opcao1);

   // Primeira comparação
  switch (opcao1){
  case 1:
  printf("\nVocê escolheu o atributo População!\n");
  resultado1 = populacao1 > populacao2 ? 1 : 0;
  break;

  case 2:
  printf("\nVocê escolheu o atributo Área!\n");
  resultado1 = area1 > area2 ? 1 : 0;
  break;

  case 3:
  printf("\nVocê escolheu o atributo PIB!\n");
  resultado1 = pib1 > pib2 ? 1 : 0;
  break;

  case 4:
  printf("\nVocê escolheu o atributo Pontos turísticos!\n");
  resultado1 = pontos1 > pontos2 ? 1 : 0;
  break;

  case 5:
  printf("\nVocê escolheu o atributo Densidade populacional!\n");
  resultado1 = ( densidade1 / 1 ) > ( densidade2 / 1 ) ? 1 : 0;
  break;
  
  case 6:
  printf("\nVocê escolheu o atributo PIB per capita!\n");
  resultado1 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
  break;

  case 7:
  printf("\nVocê escolheu o atributo Super Poder!\n");
  resultado1 = super_poder1 > super_poder2 ? 1 : 0;
  break;

  default:
    printf("\nOpção inválida!\n");
    break;
  } 
 
  //

  printf("\nEscolha a segunda categoria (Não pode ser igual a primeira):\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite a opção desejada (1-7): ");
    scanf("%d", &opcao2);

  // Segunda comparação

    if (opcao1 == opcao2) {
    printf("\nOpção inválida! A primeira opção não pode ser escolhida novamente.\n");
    } else {
      switch (opcao2) { 
        case 1:
          printf("\nVocê escolheu o atributo População!\n");
          resultado2 = populacao1 > populacao2 ? 1 : 0;
          break;
          
        case 2:
          printf("\nVocê escolheu o atributo Área!\n");
          resultado2 = area1 > area2 ? 1 : 0;
          break;

        case 3:
          printf("\nVocê escolheu o atributo PIB!\n");
          resultado2 = pib1 > pib2 ? 1 : 0;
          break;

        case 4:
          printf("\nVocê escolheu o atributo Pontos turísticos!\n");
          resultado2 = pontos1 > pontos2 ? 1 : 0;
          break;

        case 5:
          printf("\nVocê escolheu o atributo Densidade populacional!\n");
          resultado2 = ( densidade1 / 1 ) > ( densidade2 / 1 ) ? 1 : 0;
          break;
        
        case 6:
          printf("\nVocê escolheu o atributo PIB per capita!\n");
          resultado2 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
          break;
        
        case 7:
          printf("\nVocê escolheu o atributo Super Poder!\n");
          resultado2 = super_poder1 > super_poder2 ? 1 : 0;
          break;
        
        default:
        printf("\nOpção inválida!\n");
        break;
      }
    } 

  //Resultado final

  if (resultado1 && resultado2 == 1) {
    printf("\nO %s venceu a partida!\n", nome1);
  } else if (resultado1 =! resultado2) {
    printf("\nO jogo empatou!\n");
  } else { (resultado1 && resultado2 == 0);
    printf("\nO %s venceu a partida!\n", nome2);
  }
    
  return 0;
  
}
