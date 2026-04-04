#include <stdio.h> // PARA PRINTF E SCANF
#include <stdlib.h> // PARA RAND() E SRAND()
#include <time.h> // PARA TIME()


int main (){
    srand(time(NULL));

    // Player variaveis
    char player[50];
    char nomeAtaque01[50] = "Golpe Basico";
    
    int idade;
    int poder01;
    int level = 0;
    int vidaPlayer = 100;
    int danoPlayer; // Dano Golpe basico 
    
    
    // Itens
    int fruta;
    char frutaNome[50] = "MAÇA";
        
    
    
    // inimigos variaveis
    char goblin;
    int vidaGoblin;
    int goblinExp = 20;
    int danoGoblin = 15;
    
    // Interagindo variáveis
    int escolha;
    int batalha;
    int curar;
    
    // miscelanios
    float exp = 0;
    
    
    // -------------- Área de cadastro ----------
    
    
    printf("*** O AVENTUREIRO - GAME ***\n");
    printf("Digite o nome do seu personagem!\n");
    scanf("%s", player);
    
    printf("Digite a sua idade: \n");
    scanf("%d", &idade);
    
    printf("***** Pronto cadastro concluído ***** \n");
    printf("%s você comeca aqui! \n", player);
    printf("Logo abaixo tem o Menu \n");
    printf("escolha a opcao digitando um número! \n");
    
    danoPlayer = 25; // DANO INICIAL PLAYER
    
    escolha = -1; // DEFININDO UM VALOR INICIAL A ESCOLHA
    
    fruta = 0;
    
    while (escolha != 0){ //Menu de escolha repeticao
    
        printf("-------------------------- \n");
        printf("1 - Explorar mundo! \n");
        printf("2 - Status \n");
        printf("3 - Inventario \n");
        printf("4 - Usar um item \n");
        printf("0 - Sair \n");
        printf("-------------------------- \n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);
    
        if (escolha == 1){
            printf("----------------------------- \n");
            printf("Explorando Mundo... \n");
            printf("----------------------------- \n");
            
            // ----------------- EXPLORANDO MUNDO CHANCE ------------------
            
            
            //EVENTOS EXPLORATORIOS
            int evento = rand() % 3;
            
            
            //EVENTO 01 A BATALHA CONTRA O GOBLIN
                if(evento == 0){
                    printf("-------------------------- \n");
                    printf("Voce foi surpreendido por um Goblin!!! \n");
                    printf("O que voce quer fazer? \n");
                    printf("1 - ATAQUE BASICO \n");
                    printf("2 - ATAQUE ESPECIAL \n");
                    printf("3 - FUGIR \n");
                    printf("SUA ESCOLHA: ");
                    
                    vidaGoblin = 100;
                    
                    while(vidaGoblin > 0 && vidaPlayer > 0){
                    scanf("%d", &batalha);
                    
                    // SE O PLAYER ATACAR O GOBLIN
                        if(batalha == 1){
                            printf("-------------------------- \n");
                            printf("Voce atacou o Goblin! \n");
                            vidaGoblin = vidaGoblin - danoPlayer;
                            
                            printf("Vida Goblin:  %d\n", vidaGoblin);
                            printf("-------------------------- \n");
                            
                            
                            // SE DERROTAR O GOBLIN
                            if(vidaGoblin <= 0){
                                printf("-------------------------- \n");
                                printf("Voce derrotou o Goblin! \n");
                                printf("+ 20 Experiencia! \n");
                                printf("-------------------------- \n");
                                
                                    exp += goblinExp;
                                    
                            // SE O GOBLIN AINDA RESTAR VIDA        
                            } else {
                                printf("-------------------------- \n");
                                printf("Voce recebeu um ataque!!! \n");
                                printf("Você perdeu 15 de VIDA!! \n");
                                printf("-------------------------- \n");
                                vidaPlayer = vidaPlayer - danoGoblin;
                                
                                
                                // SE O PLAYER FICAR SEM VIDA
                                if(vidaPlayer <= 0){
                                    printf("Você Morreu!!!");
                                    
                                    return 0;
                                }
                                
                                // MENU DE ESCOLHA ENQUANTO AINDA ESTIVER BATALHANDO
                                printf("-------------------------- \n");
                                printf("Voce foi surpreendido por um Goblin!!! \n");
                                printf("O que voce quer fazer? \n");
                                printf("1 - ATAQUE BASICO \n");
                                printf("2 - ATAQUE ESPECIAL \n");
                                printf("3 - FUGIR \n");
                                printf("SUA ESCOLHA: ");
                            }
                            
                            
                        // GOLPE ESPECIAL EM CONTRUCAO AINDA, ENTAO SEMPRE LEVARA DANO    
                        } else if(batalha == 2) {
                            printf("-------------------------- \n");
                             printf("Você NAO tem ataque especial! \n");
                             printf("O goblin te ataca! \n");
                             printf("Você perdeu 10 de vida! \n");
                             printf("-------------------------- \n");
                             vidaPlayer = vidaPlayer - danoGoblin;
                        } else if(batalha == 3) {
                            printf("Você fugiu!\n");
                            vidaGoblin = 0;
                        }
                        }
                        
                // EVENTO DE ACHAR FRUTA QUE RECUPERA VIDA
                } else if (evento == 1){
                    printf("-------------------------- \n");
                    printf("Você achou uma maçã!!! \n");
                    printf("-------------------------- \n");
                    
                    fruta += 1;
                
                
                // EVENTO PACIFICO
                } else {
                    printf("Prosseguindo o caminho, aparentemente tranquilo! \n");
                
                }
                
                // ESCOLHA DE VER OS STATUS
        }
            else if(escolha == 2){
                printf("----------------------------- \n");
                printf("*** STATUS ***\n");
                printf("Vida: %d\n", vidaPlayer);
                printf("Habilidades: %s\n", nomeAtaque01);
                printf("Level: %d\n", level);
                printf("Qtd Experiencia: %.2f\n", exp);
                printf("Dano Atual: %d\n", danoPlayer);
                printf("----------------------------- \n");
                
                //ESCOLHA DE VER INVENTARIO
            } else if (escolha == 3){ 
                printf("----------------------------- \n");
                printf("*** INVENTARIO *** \n");
                printf("Itens --- Quantidade \n");
                printf("MAÇÃ:  %d\n", fruta);
                printf("----------------------------- \n");
                
            } else if (escolha == 4){  
                printf("----------------------------- \n");
                printf("Qual item deseja usar: \n");
                printf("1 - %s: %d\n", frutaNome, fruta);
                printf("2 - Inexistente até o momento! \n");
                printf("Escolha uma opção: ");
                scanf("%d", &curar);
                
                if(curar == 1){
                    if(fruta > 0){
                    printf("%s Recuperou 20 de vida!", player);
                    vidaPlayer = vidaPlayer + 20;
                    fruta--;
                    } else if(fruta == 0){
                        printf("Você não possui mais frutas! \n");
                    }
                }
            }    
                // ESCOLHA SAIR DO JOGO
            else if (escolha == 0){
                printf("----------------------------- \n");
                printf("Saindo do jogo...\n");
                printf("----------------------------- \n");
                // ESCOLHA ERRADA DO PLAYER
            }
                else {
                    printf("----------------------------- \n");
                    printf("Opção invalida!!!");
                    printf("----------------------------- \n");
                }
                
                
                
                // SISTEMA DE LEVEL
                   if(exp >= 100){
                   printf("----------------------------- \n");
                     printf("Você subiu de levem!!!");
                        level++;
                     printf("LEVEL ATUAL: %d\n", level);
                        exp = 0;
                   printf("----------------------------- \n");
                   }
                   }
                   }