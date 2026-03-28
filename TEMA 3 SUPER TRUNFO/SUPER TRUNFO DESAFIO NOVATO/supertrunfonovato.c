#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // VARIAVEIS PARA A PRIMEIRA CARTA

// | PRIMEIRA CARTA |
  char Estado [20]; // Estado
  char codigoCidade [20]; // Código da cidade
  char cidade [20]; // Nome da cidade
  char resultado01 = 'A';

  unsigned int populacao; // Quantidade da populacao na cidade
  int Turisticos; // Numero de pontos turisticos!

  float area;
  float PIB;
  float densidade; // densidade populacional (populacao / area);
  float perCapita; // PIB per capita (PIB / populacao);
  float superPoder01; // Super poder 1

  // VARIAVEIS PARA A SEGUNDA CARTA

  // | SEGUNDA CARTA |
  char Estado2 [20]; // Estado
  char codigoCidade2 [20]; // Código da cidade
  char cidade2 [20]; // Nome da cidade
  char resultado02 = 'B';

  unsigned int populacao2; // Quantidade da populacao na cidade
  int Turisticos2; // Numero de pontos turisticos!

  float area2;
  float PIB2;
  float densidade2; // densidade populacional (populacao / area);
  float perCapita2; // PIB per capita (PIB / populacao);
  float superPoder02; // Super poder 2

  // Área para entrada de dados
  // AQUI IRÁ INSERIR DADOS!
  printf("---- SETOR DE CADASTRO ----\n");
  printf("--- INSIRA OS DADOS PARA AS CARTAS ---\n");
  printf("--- ALERTA! INSIRA EM LETRAS MAIUSCULAS! ---\n");
  printf("--- NAO UTILIZE VIRGULA! UTILIZA PONTO FINAL ---\n");
  printf("--- SEM ACENTUACAO ---\n");

  // -------------------- CADASTRO DA PRIMEIRA CARTA --------------------

  printf("CADASTRO DA PRIMEIRA CARTA: \n");
  // inserir nome do Estado
  printf("Nome do ESTADO: \n");
  scanf("%s", Estado);
  //  inserir nome da cidade
  printf("Nome da cidade: \n");
  scanf("%s", cidade);

  // inserir um codigo para a cidade
  printf("Digite o codigo da cidade: \n");
  scanf("%s", codigoCidade);

  // Populacao total da cidade
  printf("Qual a populacao total da cidade: \n");
  scanf("%d", &populacao);

  // inserir quantos pontos turisticos possui!
  printf("Quantos pontos turisticos possui: \n");
  scanf("%d", &Turisticos);

  // area em km² da cidade
  printf ("Qual a area em km: \n");
  scanf("%f", &area);

  // Inserir o PIB da cidade
  printf("Qual o PIB da cidade: \n");
  scanf("%f", &PIB);

// ---------------------- OPERADORES CARTA 01 ---------------------- 

  densidade = populacao / area;
  perCapita = PIB / populacao; 
  superPoder01 = populacao + Turisticos + area + PIB + perCapita + (1.0 / densidade);

  // -------------------- CADASTRO DA SEGUNDA CARTA --------------------

   printf("CADASTRO DA SEGUNDA CARTA: \n");

  // inserir nome do Estado
  printf("Nome do ESTADO: \n");
  scanf("%s", Estado2);

  //  inserir nome da cidade
  printf("Nome da cidade: \n");
  scanf("%s", cidade2);

  // inserir um codigo para a cidade
  printf("Digite o codigo da cidade: \n");
  scanf("%s", codigoCidade2);

  // Populacao total da cidade
  printf("Qual a populacao total da cidade: \n");
  scanf("%d", &populacao2);

  // inserir quantos pontos turisticos possui!
  printf("Quantos pontos turisticos possui: \n");
  scanf("%d", &Turisticos2);

  // area em km² da cidade
  printf ("Qual a area em km: \n");
  scanf("%f", &area2);

  // Inserir o PIB da cidade
  printf("Qual o PIB da cidade: \n");
  scanf("%f", &PIB2);

  // ---------------------- OPERADORES CARTA 02 ---------------------- 

  densidade2 = populacao2 / area2;
  perCapita2 = PIB2 / populacao2;
  superPoder02 = populacao2 + Turisticos2 + area2 + PIB2 + perCapita2 + (1.0 / densidade2);


  // Área para exibição dos dados da cidadE

  // ---------------------- DADOS DA PRIMEIRA CARTA ---------------------- 
  printf("----- DADOS CADASTRADOS ----- \n");
  printf("----- DADOS PRIMEIRA CARTA ----- \n");
  printf("Estado: %s\n", Estado);
  printf("Cidade: %s\n", cidade);
  printf("Codigo: %s\n", codigoCidade);
  printf("Populacao: %d\n", populacao);
  printf("Quantidade de pontos Turisticos: %d\n", Turisticos);
  printf("Area em kms: %.2f\n", area);
  printf("PIB: %.2f\n", PIB);
  printf("Densidade Populacional: %.2f\n", densidade);
  printf("PIB per capita: %.2f\n", perCapita);

  // ---------------------- DADOS DA SEGUNDA CARTA ---------------------- 

  printf("----- DADOS SEGUNDA CARTA ----- \n");
  printf("Estado: %s\n", Estado2);
  printf("Cidade: %s\n", cidade2);
  printf("Codigo: %s\n", codigoCidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Quantidade de pontos Turisticos: %d\n", Turisticos2);
  printf("Area em kms: %.2f\n", area2);
  printf("PIB: %.2f\n", PIB2);
  printf("densidade Populacional: %.2f\n", densidade2);
  printf("PIB per capita: %.2f\n", perCapita2);


// ---------------------- BATALHA DAS CARTAS ----------------------
printf("----- BATALHA DAS CARTAS ----- \n");
printf("----- VENCE A CARTA QUE TIVER O VALOR MAIOR ----- \n");
printf("\n");
printf("----------------------------------SUPER PODER COMPARACAO---------------------------------- \n");

// IF SUPER PODER E DEMONSTRACAO DE QUAL CIDADE VENCEU

printf("CIDADE 1: %s\n  | CIDADE 2: %s\n", cidade, cidade2);
printf("SUPER PODER CIDADE 1: %.2f\n", superPoder01);
printf("SUPER PODER CIDADE 2: %.2f\n", superPoder02);
if(superPoder01 > superPoder02) {
  printf("CIDADE 1 VENCEU! \n");
} else if (superPoder02 > superPoder01) {
  printf("CIDADE 2 VENCEU! \n");
}

printf("----------------------------------POPULACAO COMPARACAO---------------------------------- \n");

// IF POPULACAO

printf("POPULACAO CIDADE 1: %d  | POPULACAO CIDADE 2: %d\n", populacao, populacao2);
if(populacao > populacao2) {
  printf("CIDADE 1 VENCEU! \n");
} else {
  printf("CIDADE 2 VENCEU! \n");
}

printf("----------------------------------PONTOS TURISTICOS COMPARACAO---------------------------------- \n");

// PONTOS TURISTICOS

printf("PONTOS TURISTICOS CIDADE 1: %d  | PONTOS TURISTICOS CIDADE 2: %d\n", Turisticos, Turisticos2);
if(Turisticos > Turisticos2){
  printf("CIDADE 1 VENCEU! \n");
} else {
  printf("CIDADE 2 VENCEU! \n");
}

printf("----------------------------------AREA EM KMS COMPARACAO---------------------------------- \n");

// AREA EM KMS

printf("AREA EM KMS CIDADE 1: %.2f  | AREA EM KMS CIDADE 2: %.2f\n", area, area2);
if(area > area2) {
  printf("CIDADE 1 VENCEU! \n");
} else {
  printf("CIDADE 2 VENCEU! \n");
}

printf("----------------------------------PIB COMPARACAO---------------------------------- \n");


// PIB

printf("PIB CIDADE 1: %.2f  | PIB CIDADE 2: %.2f\n", PIB, PIB2);
if(PIB > PIB2) {
  printf("CIDADE 1 VENCEU! \n");
} else {
  printf("CIDADE 2 VENCEU! \n");
}


printf("----------------------------------DENSIDADE POPULACIONAL COMPARACAO---------------------------------- \n");

// DENSIDADE POPULACIONAL

printf("DENSIDADE POPULACIONAL CIDADE 1: %.2f  | DENSIDADE POPULACIONAL CIDADE 2: %.2f\n", densidade, densidade2);
if(densidade < densidade2) {
  printf("CIDADE 1 VENCEU! \n");
} else {
  printf("CIDADE 2 VENCEU! \n");
}


printf("----------------------------------PIB PER CAPITA COMPARACAO---------------------------------- \n");

// PIB PER CAPITA

printf("PIB PER CAPITA CIDADE 1: %.2f  | PIB PER CAPITA CIDADE 2: %.2f\n", perCapita, perCapita2);
if(perCapita > perCapita2) {
  printf("CIDADE 1 VENCEU! \n");
} else {
  printf("CIDADE 2 VENCEU! \n");
}
}