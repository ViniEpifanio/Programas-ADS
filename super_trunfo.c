#include <stdio.h>
int main(){
  //Tipos de caracteres//
  char estado[50];
  char codigo[50];
  char nome[50];
  int populacao, pontos;
  float area, pib;

  //Visualização na tela e leitura de informações//
  printf("Preencha o Estado (apenas uma palavra): ");
  scanf("%s", &estado);

  prinf("Preencha o código da carta com uma letra(A-H) seguido de número um (01-04): ");
  scanf("%s", &codigo);

  printf("Preencha o nome da cidade: ");
  scanf("%s", &nome);

  printf("Preencha a população da cidade: ");
  scanf("%d", &populacao);

  printf("Preencha a área total da cidade em Km² (apenas números): ");
  scanf("%f", &area);

  printf("Preencha o PIB da cidade: ");
  scanf("%f", &pib);

  printf("Prencha o número de pontos turísticos da cidade: ");
  scanf("%f", &pontos);

  
  
  

}
