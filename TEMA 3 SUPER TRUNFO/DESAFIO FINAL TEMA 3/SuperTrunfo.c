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

  int escolha;
  int escolha2;
  int primeiraEscolha, segundaEscolha;
  int resultado; // batalha final
  int resultado2; // batalha final 

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


//ESCOLHER COMPARACAO DAS CARTAS

printf("O que você quer comparar? \n");
printf("Você poderá escolher 2 atributos para comparar! \n");
printf("Escolha o primeiro Atributo: \n");
printf("1 - SUPER PODER \n");
printf("2 - POPULACAO \n");
printf("3 - PONTOS TURISTICOS \n");
printf("4 - AREA EM KMS \n");
printf("5 - PIB \n");
printf("6 - DENSIDADE POPULACIONAL \n");
printf("7 - PIB PER CAPITA \n");      
printf("Sua escolha: ");
scanf("%d", &escolha);
primeiraEscolha = escolha;

  switch(primeiraEscolha){
    case 1:
      // comparacao super poder
      printf("Você escolheu comparar o SUPER PODER! \n");
      printf("SUPER PODER %s: %.2f\n", cidade, superPoder01);
      printf("SUPER PODER %s: %.2f\n", cidade2, superPoder02);

      resultado = superPoder01 > superPoder02 ? 1 : superPoder01 == superPoder02 ? 0 : -1;
      if (resultado == 1) {
        printf("CIDADE 1 VENCEU! \n");
      } else if (resultado == 0) {
        printf("EMPATE! \n");
      } else {
        printf("CIDADE 2 VENCEU! \n");
      }
      break;

    case 2:
      // comparacao populacao
      printf("Você escolheu comparar a POPULACAO! \n");
      printf("POPULACAO %s: %d\n", cidade, populacao);
      printf("POPULACAO %s: %d\n", cidade2, populacao2);

      resultado = populacao > populacao2 ? 1 : populacao == populacao2 ? 0 : -1;
      if (resultado == 1) {
        printf("CIDADE 1 VENCEU! \n");
      } else if (resultado == 0) {
        printf("EMPATE! \n");
      } else {
        printf("CIDADE 2 VENCEU! \n");
      }
      break;
    case 3:
      // comparacao pontos turisticos
      printf("Você escolheu comparar os PONTOS TURISTICOS! \n");
      printf("PONTOS TURISTICOS %s: %d\n", cidade, Turisticos);
      printf("PONTOS TURISTICOS %s: %d\n", cidade2, Turisticos2);

      resultado = Turisticos > Turisticos2 ? 1 : Turisticos == Turisticos2 ? 0 : -1;
      if (resultado == 1) {
        printf("CIDADE 1 VENCEU! \n");
      } else if (resultado == 0) {
        printf("EMPATE! \n");
      } else {
        printf("CIDADE 2 VENCEU! \n");
      }
      break;
    case 4:
      // comparacao area em kms
      printf("Você escolheu comparar a AREA EM KMS! \n");
      printf("AREA EM KMS %s: %.2f\n", cidade, area);
      printf("AREA EM KMS %s: %.2f\n", cidade2, area2);

      resultado = area > area2 ? 1 : area == area2 ? 0 : -1;
      if (resultado == 1) {
        printf("CIDADE 1 VENCEU! \n");
      } else if (resultado == 0) {
        printf("EMPATE! \n");
      } else {
        printf("CIDADE 2 VENCEU! \n");
      }
      break;
    case 5:
      // comparacao PIB
      printf("Você escolheu comparar o PIB! \n");
      printf("PIB %s: %.2f\n", cidade, PIB);
      printf("PIB %s: %.2f\n", cidade2, PIB2);

      resultado = PIB > PIB2 ? 1 : PIB == PIB2 ? 0 : -1;
      if (resultado == 1) {
        printf("CIDADE 1 VENCEU! \n");
      } else if (resultado == 0) {
        printf("EMPATE! \n");
      } else {
        printf("CIDADE 2 VENCEU! \n");
      }
      break;
    case 6:
      // comparacao densidade populacional
      printf("Você escolheu comparar a DENSIDADE POPULACIONAL! \n");
      printf("DENSIDADE POPULACIONAL %s: %.2f\n", cidade, densidade);
      printf("DENSIDADE POPULACIONAL %s: %.2f\n", cidade2, densidade2);

      resultado = densidade < densidade2 ? 1 : densidade == densidade2 ? 0 : -1;
      if (resultado == 1) {
        printf("CIDADE 1 VENCEU! \n");
      } else if (resultado == 0) {
        printf("EMPATE! \n");
      } else {
        printf("CIDADE 2 VENCEU! \n");
      }
      break;
    case 7:
      // comparacao PIB per capita
      printf("Você escolheu comparar o PIB PER CAPITA! \n");
      printf("PIB PER CAPITA %s: %.2f\n", cidade, perCapita);
      printf("PIB PER CAPITA %s: %.2f\n", cidade2, perCapita2);

      resultado = perCapita > perCapita2 ? 1 : perCapita == perCapita2 ? 0 : -1;
      if (resultado == 1) {
        printf("CIDADE 1 VENCEU! \n");
      } else if (resultado == 0) {
        printf("EMPATE! \n");
      } else {
        printf("CIDADE 2 VENCEU! \n");
      }
      break;
    default:
      printf("OPCAO INVALIDA! \n");
      break;
  }

    printf("O que você quer comparar? \n");
    printf("Você poderá escolher 2 atributos para comparar! \n");
    printf("Escolha o Segundo Atributo: \n");
    printf("1 - SUPER PODER \n");
    printf("2 - POPULACAO \n");
    printf("3 - PONTOS TURISTICOS \n");
    printf("4 - AREA EM KMS \n");
    printf("5 - PIB \n");
    printf("6 - DENSIDADE POPULACIONAL \n");
    printf("7 - PIB PER CAPITA \n");      
    printf("Sua escolha: ");
    scanf("%d", &escolha2);
    segundaEscolha = escolha2;

    if (segundaEscolha == primeiraEscolha) {
      printf("OPCAO INVALIDA! VOCE JA ESCOLHEU ESSE ATRIBUTO PARA COMPARAR! \n");
      printf("Por favor, escolha um atributo diferente para comparar: ");
      scanf("%d", &segundaEscolha);
    }

    switch(segundaEscolha){
    case 1:
      // comparacao super poder
      printf("Você escolheu comparar o SUPER PODER! \n");
      printf("SUPER PODER %s: %.2f\n", cidade, superPoder01);
      printf("SUPER PODER %s: %.2f\n", cidade2, superPoder02);

      resultado2 = superPoder01 > superPoder02 ? 1 : superPoder01 == superPoder02 ? 0 : -1;
      if (resultado2 == 1) {
        printf("CIDADE 1 VENCEU! \n");
      } else if (resultado2 == 0) {
        printf("EMPATE! \n");
      } else {
        printf("CIDADE 2 VENCEU! \n");
      }
      break;

    case 2:
      // comparacao populacao
      printf("Você escolheu comparar a POPULACAO! \n");
      printf("POPULACAO %s: %d\n", cidade, populacao);
      printf("POPULACAO %s: %d\n", cidade2, populacao2);

      resultado2 = populacao > populacao2 ? 1 : populacao == populacao2 ? 0 : -1;
      if (resultado2 == 1) {
        printf("CIDADE 1 VENCEU! \n");
      } else if (resultado2 == 0) {
        printf("EMPATE! \n");
      } else {
        printf("CIDADE 2 VENCEU! \n");
      }
      break;
    case 3:
      // comparacao pontos turisticos
      printf("Você escolheu comparar os PONTOS TURISTICOS! \n");
      printf("PONTOS TURISTICOS %s: %d\n", cidade, Turisticos);
      printf("PONTOS TURISTICOS %s: %d\n", cidade2, Turisticos2);

      resultado2 = Turisticos > Turisticos2 ? 1 : Turisticos == Turisticos2 ? 0 : -1;
      if (resultado2 == 1) {
        printf("CIDADE 1 VENCEU! \n");
      } else if (resultado2 == 0) {
        printf("EMPATE! \n");
      } else {
        printf("CIDADE 2 VENCEU! \n");
      }
      break;
    case 4:
      // comparacao area em kms
      printf("Você escolheu comparar a AREA EM KMS! \n");
      printf("AREA EM KMS %s: %.2f\n", cidade, area);
      printf("AREA EM KMS %s: %.2f\n", cidade2, area2);

      resultado2 = area > area2 ? 1 : area == area2 ? 0 : -1;
      if (resultado2 == 1) {
        printf("CIDADE 1 VENCEU! \n");
      } else if (resultado2 == 0) {
        printf("EMPATE! \n");
      } else {
        printf("CIDADE 2 VENCEU! \n");
      }
      break;
    case 5:
      // comparacao PIB
      printf("Você escolheu comparar o PIB! \n");
      printf("PIB %s: %.2f\n", cidade, PIB);
      printf("PIB %s: %.2f\n", cidade2, PIB2);

      resultado2 = PIB > PIB2 ? 1 : PIB == PIB2 ? 0 : -1;
      if (resultado2 == 1) {
        printf("CIDADE 1 VENCEU! \n");
      } else if (resultado2 == 0) {
        printf("EMPATE! \n");
      } else {
        printf("CIDADE 2 VENCEU! \n");
      }
      break;
    case 6:
      // comparacao densidade populacional
      printf("Você escolheu comparar a DENSIDADE POPULACIONAL! \n");
      printf("DENSIDADE POPULACIONAL %s: %.2f\n", cidade, densidade);
      printf("DENSIDADE POPULACIONAL %s: %.2f\n", cidade2, densidade2);

      resultado2 = densidade < densidade2 ? 1 : densidade == densidade2 ? 0 : -1;
      if (resultado2 == 1) {
        printf("CIDADE 1 VENCEU! \n");
      } else if (resultado2 == 0) {
        printf("EMPATE! \n");
      } else {
        printf("CIDADE 2 VENCEU! \n");
      }
      break;
    case 7:
      // comparacao PIB per capita
      printf("Você escolheu comparar o PIB PER CAPITA! \n");
      printf("PIB PER CAPITA %s: %.2f\n", cidade, perCapita);
      printf("PIB PER CAPITA %s: %.2f\n", cidade2, perCapita2);

      resultado2 = perCapita > perCapita2 ? 1 : perCapita == perCapita2 ? 0 : -1;
      if (resultado2 == 1) {
        printf("CIDADE 1 VENCEU! \n");
      } else if (resultado2 == 0) {
        printf("EMPATE! \n");
      } else {
        printf("CIDADE 2 VENCEU! \n");
      }
      break;
    default:
      printf("OPCAO INVALIDA! \n");
      break;
  }
}