#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Aventureiro {
    int vida, dano, magia, defesa;
} aventureiro = {10, 2, 3, 2,};

struct Guerreiro {
    int vida, dano, magia, defesa;
} guerreiro = {10, 2, 3, 2};

struct Ladino {
    int vida, dano, magia, defesa;
} ladino = {10, 2, 3, 2};

struct Feiticeiro {
    int vida, dano, magia, defesa;
} feiticeiro = {10, 2, 3, 2};

struct Arqueiro {
    int vida, dano, magia, defesa;
} arqueiro = {10, 2, 3, 2};

int rolarDado(int lados) {
    return rand() % lados + 1;
}

void combate() {
    printf("\n--- A LUTA COMEÇA! ---\n");
    int danoCriatura = rolarDado(6);
    printf("A criatura causa %d de dano!\n", danoCriatura);
    aventureiro.vida -= danoCriatura;
    printf("Você tem %d de vida agora.\n", aventureiro.vida);
    
    printf("Agora é a sua vez de atacar! Faça a rolagem de dados para ver o dano que você causa.\n");
    int danoJogador = rolarDado(6) + aventureiro.dano;
    printf("Você causa %d de dano na criatura!\n", danoJogador);
    
    if (danoJogador >= 5) {
        printf("Você derrotou a criatura!\n");
    } else {
        printf("A criatura ainda está de pé! Prepare-se para o próximo ataque!\n");
        combate();
    }
}

void torneio1() {
    printf("\n--- Classificatoria 1 Gladiador Selvagem! ---\n");
    int danoOponente = rolarDado(6);
    printf("O oponente causa %d de dano!\n", danoOponente);
    aventureiro.vida -= danoOponente;
    printf("Você tem %d de vida agora.\n", aventureiro.vida);
    
    printf("Agora é a sua vez de atacar! Faça a rolagem de dados para ver o dano que você causa.\n");
    int danoJogador = rolarDado(6) + aventureiro.dano;
    printf("Você causa %d de dano no oponente!\n", danoJogador);
    
    if (danoJogador >= 5) {
        printf("Você derrotou Gladiador Selvagem!\n");
    } else {
        printf("O Gladiador Selvagem ainda está de pé! Prepare-se para o próximo ataque!\n");
        torneio1();
    }
}

void torneio2() {
    printf("\n--- Classificatoria 2 Mago Sombrio! ---\n");
    int danoOponente = rolarDado(6);
    printf("O oponente causa %d de dano!\n", danoOponente);
    aventureiro.vida -= danoOponente;
    printf("Você tem %d de vida agora.\n", aventureiro.vida);
    
    printf("Agora é a sua vez de atacar! Faça a rolagem de dados para ver o dano que você causa.\n");
    int danoJogador = rolarDado(6) + aventureiro.dano;
    printf("Você causa %d de dano no oponente!\n", danoJogador);
    
    if (danoJogador >= 5) {
        printf("Você derrotou Mago Sombrio!\n");
    } else {
        printf("O Mago Sombrio não está supreso! Prepare-se para o próximo ataque!\n");
        torneio2();
    }
}

void torneio3() {
    printf("\n--- Semi Final Assassino Silencioso! ---\n");
    int danoOponente = rolarDado(6);
    printf("O oponente causa %d de dano!\n", danoOponente);
    aventureiro.vida -= danoOponente;
    printf("Você tem %d de vida agora.\n", aventureiro.vida);
    
    printf("Agora é a sua vez de atacar! Faça a rolagem de dados para ver o dano que você causa.\n");
    int danoJogador = rolarDado(6) + aventureiro.dano;
    printf("Você causa %d de dano no oponente!\n", danoJogador);
    
    if (danoJogador >= 5) {
        printf("Você derrotou Assassino Silencioso!\n");
    } else {
        printf("O Assassino Silencioso parece não sentir dor! Prepare-se para o próximo ataque!\n");
        torneio3();
    }
}

void torneio4() {
    printf("\n--- Final Gigante Blindado ---\n");
    int danoOponente = rolarDado(6);
    printf("O oponente causa %d de dano!\n", danoOponente);
    aventureiro.vida -= danoOponente;
    printf("Você tem %d de vida agora.\n", aventureiro.vida);
    
    printf("Agora é a sua vez de atacar! Faça a rolagem de dados para ver o dano que você causa.\n");
    int danoJogador = rolarDado(6) + aventureiro.dano;
    printf("Você causa %d de dano no oponente!\n", danoJogador);
    
    if (danoJogador >= 5) {
        printf("Você derrotou Gigante Blindado!\n");
    } else {
        printf("O Gigante Blindado parece invencivel! Prepare-se para o próximo ataque!\n");
        torneio4();
    }
}


void selecaoPersonagem() {
    int classe;
    char nome[50];
    printf("Escolha sua classe:\n\n");
    printf("\t1 - AVENTUREIRO\t\t2 - GUERREIRO\t\t3 - LADINO\t\t4 - FEITICEIRO\t\t5 - ARQUEIRO\n\n");
    printf("VIDA\t\t 10\t\t\t10\t\t\t10\t\t\t10\t\t\t10\n");
    printf("DANO\t\t 2\t\t\t2\t\t\t2\t\t\t2\t\t\t2\n");
    printf("MAGIA\t\t 3\t\t\t3\t\t\t3\t\t\t3\t\t\t3\n");
    printf("DEFESA\t\t 2\t\t\t2\t\t\t2\t\t\t2\t\t\t2\n");
    scanf("%d", &classe);

    switch (classe) {
        case 1:
            printf("Voce escolheu o Aventureiro\n");
            break;
        case 2:
            printf("Voce escolheu o Guerreiro\n");
            break;
        case 3:
            printf("Voce escolheu o Ladino\n");
            break;
        case 4:
            printf("Voce escolheu o Feiticeiro\n");
            break;
        case 5:
            printf("Voce escolheu o Arqueiro\n");
            break;
        default:
            printf("Opcao invalida!\n");
            selecaoPersonagem();
            break;
    }

}

void combateGuardiao(){
    printf("\n--- A LUTA FINAL COMEÇA! ---\n");
     int danoGuardiao = rolarDado(6);
     printf("O Guardião causa %d de dano!\n", danoGuardiao);
     aventureiro.vida -= danoGuardiao;
     printf("Você tem %d de vida agora.\n", aventureiro.vida);
    
     printf("Agora é a sua vez de atacar! Faça a rolagem de dados para ver o dano que você causa.\n");
     int danoJogador = rolarDado(6) + aventureiro.dano;
     printf("Você causa %d de dano no Guardião!\n", danoJogador);
    
     if (danoJogador >= 5) {
         printf("Você derrotou o Guardião!\n");
     } else {
         printf("A criatura ainda está de pé! Prepare-se para o próximo ataque!\n");
         combateGuardiao();
     }
     if (aventureiro.vida == 0){
         printf("\nVoce morreu!\n");
         printf("\nGame Over");
         exit;
     }
}

void mundoCavaleiros() {
    
    printf("----- BEM VINDOS AO MUNDO DOS CAVALEIROS -----\n\n");
    selecaoPersonagem();

printf("\n--- Cenario ---\n\n");

    printf("Em uma bela manhã você é acordado com uma comoção fora da pousada que você resolveu passar a noite depois de retornar de uma aventura.\n");
    printf("'PRESTEM ATENÇÃO E OUÇAM TODOS' Exclama um oficial do exercito 'COM  A APROXIMAÇÃO DO FESTIVAL DE VERÃO O REI DECIDIU HOSPEDAR UM TORNEIO QUE ACONTECERA EM 3 DIAS'.\n");
    printf("'O VENCEDOR DO TORNEIO SERÁ RECOMPENSADO GENEROSAMENTE NÃO SÓ COM RIQUEZAS MAS TAMBEM COM O TITULO DE CAMPEÃO DO REINO'\n");
    printf("Riquezas e um titulo ainda por cima? Voce não pensa duas vezes e decide se inscrever.\n\n");
    
    
    printf("O Coliseu onde o torneio irá acontecer esta lotado.\n");
    printf("O torneio sera composto de 4 combates - Primeira classificatoria, segunda classificatoria, semi finais e Finais.\n");
    printf("Voce se inscreve no torneio e decide se preparar para competição.\n\n");


    printf("--- Historia com NPCs ---\n");
    printf("Na sua procura de como treinar até o dia do torneio, voce se lembra de 4 pessoas que podem te ajudar:\n");
    printf("1. Jhonny alquimista: Um alquimista que te supria com poções para suas aventuras,talvez voce consiga alguma poção que te ajude no torneio.\n");
    printf("2. *Jakson treinador da guilda de aventureiros *: responsavel por deixar novos aventureiros em forma para suas aventuras, talvez ele possa te ajudar no preparo fisico para o torneio.\n");
    printf("3. Joe Cavaleiro do castelo: Por terem servido juntos no exercito do Rei na guerra contra os goblins e por sua experiencia de combate contra outros cavaleiros, voce decide convida lo para taverna para relembrar os velhos tempos e tentar conseguir informações sobre os outros cavaleiros.\n");
    printf("4. Jonathan goblin, o humano: Um humano que parece um goblin mas definitivamente é um humano haha, voce não sabe porque ele veio na sua mente mas talvez ele possa te ajudar.\n");

    int npcEscolha;
    printf("Escolha um NPC para pedir ajuda antes de entrar na caverna:\n");
    printf("1. Jhonny alquimista.\n 2. Jakson treinador.\n 3. Joe cavaleiro do castelo.\n 4. Jonathan goblin, o humano.\nEscolha: ");
    scanf("%d", &npcEscolha);

    switch (npcEscolha) {
        case 1:
            printf("\nO Alquimista diz que suas poções de força são muito fortes para voce mas ele pode te conceder uma poção de crescimento capilar.%%.\n");
            break;
        case 2:
            printf("\nO Jakson te ajuda com um treino que ele promete que vai te ajudar, seus atributos aumentam em 10%% para cada dia treinado.\n");
            aventureiro.vida = aventureiro.vida + 1;
            
            break;
        case 3:
            printf("\nO Joe aceita o convite para taverna e enquanto voces jogam conversa fora ele te fala um pouco sobre os outros cavaleiros, sabendo as fraquezas e pontos fortes dos cavaleiros, agora que você conhece a fraqueza dos cavaleiros, você tem mais ataque.\n");
            aventureiro.dano = aventureiro.dano + 2;
            break;
        case 4:
            printf("\nJonathan goblin, diz que pode te ajudar por um preço, ele não te diz o que é mas voce decide pagar mesmo assim - voce é envenenado e perde 2 de vida\n");
            break;aventureiro.vida = aventureiro.vida - 2;
        default:
            printf("\nVocê confia na sua capacidade e escolhe não se preparar.\n");
            break;
    }

    
    printf("\nChega o dia do torneio e voce vai para o coliseu, antes de entrar e esperar sua vez uma pessoa misteriosa te chama para o canto e te diz :\n");
    printf("\"Voce parece que precisa de ajuda, voce gostaria de comprar essa poção de força?.\"\n");

   
    int escolha;
    printf("1. Comprar a poção\n");
    printf("2. voce não aceita a poção\n");
    printf("Escolha: ");
    scanf("%d", &escolha);
    
    if(escolha == 1){
        printf("você não se sente muito bem, você perdeu 2 de vida\n\n");
        aventureiro.vida = aventureiro.vida - 2;
    }

    else {
        printf("\nVoce acredita nas suas chances sem a poção, a pessoa misteriosa fica brava mas deixa voce ir .\"\n");
    }

   
    printf("\nAo entrar no coliseu, você se depara com um vendedor de comida em uma barraca recheada de varios tipos de comida. Ele oferece:\n");
    printf("1. um sanduiche de carne gigante - +2 de dano e +3 de vida \n");
    printf("2. Sorvete de chocolate +3 de vida e +1 de dano \n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("\nVocê compra o sanduiche.\n");
        aventureiro.vida = aventureiro.vida + 3;
        aventureiro.dano = aventureiro.dano + 2;
    } else if (escolha == 2) {
        printf("\nVocê compra o sorvete de cholocate.\n");
        aventureiro.vida = aventureiro.vida + 3;
        aventureiro.dano = aventureiro.dano + 1;
    }


    printf("\nFinalmente chega sua vez para o combate\n");
    
    torneio1();
    
    printf("Por sua vitoria valorosa, você recebeu um sorvete, recuperando seu HP.\n\n");
    aventureiro.vida=10;
    printf("você está com 10 pontos de vida\n\n");
    
    torneio2();
    
    printf("Por algum milagre voce vence essa rodada, você recebeu um sanduiche de pastrami, recuperando seu HP.\n\n");
    aventureiro.vida=10;
    printf("você está com 10 pontos de vida\n\n");
    
    torneio3();
    
    printf("O publico não acredita mas voce vence novamente, você recebeu uma macarronada carbonara, recuperando seu HP.\n\n");
    aventureiro.vida=10;
    printf("você está com 10 pontos de vida\n\n");
    
    torneio4();
    
    printf("Nem o Rei acreditou dessa vez mas você sai vitorios.\n\n");
    printf("Apesar de tudo você vence todos desafios, se tornando o campeão do reino e sendo reconhecido por todo lugar.\n\n");
    
    printf("\n -------fim do Mundo dos cavaleiros---------");
    
    
    
    

}

void tesouroDragao() {
       printf("----- BEM VINDOS AO TESOURO DO DRAGAO -----\n\n");
    selecaoPersonagem();

    printf("Você se encontra em uma antiga floresta onde a luz do sol mal penetra entre as copas das árvores gigantescas.\n");
    printf("Um caminho tortuoso de pedras conduz até a entrada de uma imensa caverna escondida entre montanhas.\n");
    printf("Na entrada, cristais brilhantes em tons de azul e verde iluminam o interior sombrio da caverna, refletindo\n");
    printf("nas paredes de pedra como se fossem estrelas presas na rocha. Uma aura de magia antiga e poder sombrio\n");
    printf("paira no ar, enchendo seu coração de medo e curiosidade.\n\n");
    
    printf("No fundo da caverna, uma silhueta colossal emerge: o Guardião do Tesouro, um dragão de escamas negras\n");
    printf("como a noite, com olhos de um vermelho intenso que brilham com o fogo de eras passadas.\n");
    printf("Ele está adormecido em meio a uma montanha de tesouros — ouro cintilante, joias preciosas, espadas encantadas\n");
    printf("e relíquias ancestrais. O rugido suave de sua respiração ecoa como trovões, lembrando-lhe do perigo imenso\n");
    printf("dessa empreitada.\n\n");

    printf("Na sua jornada até aqui, você cruzou o caminho de vários personagens únicos, cada um oferecendo algo especial:\n");
    printf("1. Velho Sábio: Um mago que lhe deu um amuleto de proteção contra o fogo, conhecendo o poder do dragão.\n");
    printf("3. Caçador de Dragões: Um guerreiro que deseja enfrentar o dragão para ganhar glória, oferecendo seu auxílio.\n");
    printf("4. Feiticeira: Uma poderosa maga que lhe deu poções para melhorar suas habilidades.\n");

    int npcEscolha;
    printf("Escolha um NPC para pedir ajuda antes de entrar na caverna:\n");
    printf("1. Velho Sábio\n2. Ladino Misterioso\n3. Caçador de Dragões\n4. Feiticeira \nEscolha: ");
    scanf("%d", &npcEscolha);

    switch (npcEscolha) {
        case 1:
            printf("\nO Velho Sábio lhe dá um amuleto que reduz o dano de fogo em 50%%.\n");
    printf("2. Ladino Misterioso: Um antigo ladrão que falhou em roubar o tesouro, mas revelou segredos sobre o local.\n");
            break;
        case 2:
            printf("\nO Ladino Misterioso lhe ensina uma técnica de furtividade, aumentando sua chance de pegar o tesouro sem ser visto.\n");
            break;
        case 3:
            printf("\nO Caçador de Dragões se junta a você, pronto para enfrentar o dragão com força total.\n");
            break;
        case 4:
            printf("\nA Feiticeira lhe dá uma poção que aumenta temporariamente sua magia e força.\n");
            break;
        default:
            printf("\nVocê escolhe seguir sozinho e recusa ajuda.\n");
            break;
    }

    printf("\nAntes de entrar na caverna, um Guardião Espiritual aparece, advertindo-o sobre os perigos à frente:\n");
    printf("\"Se você busca o tesouro, lembre-se: não é apenas a força que vence o dragão, mas a astúcia.\"\n");

    
    int escolha;
    printf("1. Ignorar o aviso e prosseguir\n");
    printf("2. Pedir mais conselhos ao Guardião\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    if (escolha == 2) {
        printf("\nO Guardião lhe fala sobre uma fraqueza no dragão: \"Sua própria chama não pode feri-lo, mas espelhos de água o enganam.\"\n");
    }

    
    printf("\nAo entrar na caverna, você encontra um Mercador Viajante com uma carroça carregada de itens raros. Ele oferece:\n");
    printf("1. Poção de Invisibilidade\n");
    printf("2. Elixir de Força\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("\nVocê compra a Poção de Invisibilidade, que pode ajudar a se esconder do dragão.\n");
    } else if (escolha == 2) {
        printf("\nVocê compra o Elixir de Força, aumentando seu poder de ataque.\n");
    }

    printf("\nVocê finalmente chega ao coração da caverna, onde o dragão dorme entre pilhas de tesouros.\n");

    printf("\nUm Espírito Ancestral aparece, dizendo: \"Se você quer o tesouro, mostre respeito ao Guardião.\"\n");
    printf("1. Agradecer e fazer uma reverência\n");
    printf("2. Ignorar o espírito e se aproximar do tesouro\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("\nO espírito sorri e lhe abençoa, garantindo que o dragão não será hostil ao primeiro contato.\n");
    } else {
        printf("\nO espírito desaprova sua atitude e desaparece em silêncio.\n");
    }
    
    printf("\n--- Escolha final ---\n");
    printf("1. Tentar pegar o tesouro furtivamente\n");
    printf("2. Enfrentar o dragão diretamente\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("\nVocê se aproxima do tesouro tentando não fazer barulho...\n");
        printf("Consegue pegar algumas peças de ouro e sai da caverna em segurança, com o dragão ainda dormindo.\n");
    } else {
        printf("\nVocê enfrenta o dragão e, com a ajuda dos itens e conselhos dos NPCs, derrota-o, levando o tesouro com honra!\n");
    }

    printf("\n--- Fim do Cenário do Tesouro do Dragão ---\n\n");

}

void florestaPerdida() {
    printf("----- BEM VINDOS A FLORESTA PERDIDA -----\n\n");
    selecaoPersonagem();
    printf("\n----------------------- ENREDO ---------------------\n");
    printf("\n A Floresta Perdida é uma vasta e enigmática selva que ninguém ousa explorar. Situada em uma região remota, cercada por lendas e superstições, ela desapareceu dos mapas há séculos. Dizem que aqueles que entram nela nunca mais retornam ou voltam transformados, com memórias fragmentadas e terríveis pesadelos. Ninguém sabe ao certo o que acontece lá dentro, mas há algo de profundo e sombrio que atrai os aventureiros: um antigo artefato mágico, capaz de mudar o destino do mundo.\n\n");
    printf("\n");
    printf("\n Os personagens estão em uma pequena aldeia à beira de uma montanha, ao sul da Floresta Perdida. A aldeia vive em um estado de constante medo, pois suas plantações começam a murchar e o clima se torna cada vez mais imprevisível. Rumores de criaturas misteriosas rondando a região alimentam ainda mais o pânico entre os moradores. Durante uma reunião com o ancião, um grupo de corajoso recebe um mapa antigo e a missão de descobrir o que está acontecendo na floresta e, se possível, trazer de volta o artefato perdido.\n");
    printf("\n");
    printf("\n --- VOCE RECEBEU UMA CARTA ---\n");
    printf("\n --- VOCE ABRE A CARTA ---\n");
    printf("\n------------------------ CARTA -----------------------\n");
    printf("\n Saudações jovem corajoso, voce foi escolhido para se juntar ao um grupo de guardioes, nossa missao é explorar a floresta perdida e conseguir o artefato magico para podermos salvar a aldeia.\n");
    printf("Precisamos muito de voce!\n");
    printf("\n");
    printf("\n --- VOCE ACEITA O DESAFIO E PARTE PARA A FLORESTA PERDIDA ---\n");
    printf("\nVocê está agora na entrada da Floresta Perdida.\n");
    printf("A floresta é densa e sombria, com árvores tão altas que bloqueiam a luz do sol. Você pode ouvir o som de algo se movendo entre as sombras.\n");
    printf("\nEscolha como deseja proceder:\n");
    printf("1. Entrar na floresta com cautela.\n");
    printf("2. Correr em direção à escuridão para encontrar algo mais.\n");
    printf("3. Tentar encontrar algum item útil antes de entrar.\n");
    printf("Escolha uma opção (1-3): ");
    int escolha;
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("\nVocê decide entrar na floresta com cautela, tentando ouvir qualquer som estranho antes de avançar.\n");
            if (rolarDado(6) > 3) {
                printf("\nVocê encontra um caminho seguro e avança sem problemas.\n");
            } else {
                printf("\nDe repente, uma criatura misteriosa aparece! Prepare-se para o combate!\n");
                combate();
            }
            break;
        case 2:
            printf("Você decide correr na direção da escuridão, em busca de algo desconhecido.\n");
            if (rolarDado(6) > 2) {
                printf("Você encontra uma clareira com um antigo altar. Algo brilhante está sobre ele!\n");
                printf("Você encontra um item mágico! (+2 Magia)\n");
                aventureiro.magia += 2;
            } else {
                printf("Você se perde no escuro e acaba atraído por uma armadilha!\n");
                printf("Você leva 2 de dano!\n");
                aventureiro.vida -= 2;
            }
            break;
        case 3:
            printf("Você tenta encontrar algum item útil antes de se aprofundar na floresta.\n");
            if (rolarDado(6) > 4) {
                printf("Você encontra uma mochila abandonada com alguns itens úteis: poções de cura!\n");
                printf("Você ganha 3 de vida.\n");
                aventureiro.vida += 3;
            } else {
                printf("Você não encontra nada de valor.\n");
            }
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            florestaPerdida();
            break;
    }
    
    printf("\nQuando você entra na floresta, logo se depara com Ayla, uma jovem caçadora de cabelos negros e olhos penetrantes, que se aproxima silenciosamente. Ela parece estar caçando algo, mas quando percebe você, faz uma pausa.\n");
    printf("\nAyla: Você também está aqui em busca do artefato, não é? A Floresta Perdida não perdoa os imprudentes. Se deseja sobreviver, precisará de mais do que apenas coragem. Eu conheço bem essa floresta e posso ajudá-lo, mas o preço será alto.\n");
    printf("\nEla explica que para obter sua ajuda, voce precisará caçar uma fera mística chamada Gorath, um monstro que ronda a floresta. Ela oferece um arco especial de caçador e o desafio de caçar a criatura.\n");
    int escolhaAyla;
    printf("\nEscolha como deseja proceder:\n");
    printf("1. Aceitar a missão e caçar o Gorath\n");
    printf("2. Recusar e continuar sozinho.\n");
    printf("\nEscolha uma opção (1-2): ");
    scanf("%d", &escolhaAyla);
    
    switch(escolhaAyla){
        case 1:
            printf("\nVocê decide aceitar o desafio de Ayla começa rastrear a criatura.\n");
            printf("Depois de 10 minutos voce consegue encontrar as pegadas do Gorath e as segue\n");
            printf("Voce se depara com uma caverna escura e perigosa e decide entrar\n");
            printf("Se deparando com Gorath dormindo\n");
            printf("Escolha como deseja proceder:\n");
            printf("1. Atacar Gorath furtivamente.\n");
            printf("2. Atrai-lo para fora da caverna. \n");
            printf("\nEscolha uma opção (1-2): ");
            int escolhaGorath;
            scanf("%d", &escolhaGorath);
            if(escolhaGorath == 1){
                if (rolarDado(6) > 4) {
                    printf("\nVoce se aproxima silenciosamente e com um ataque fuminante acerta o coração de Gorath.");
                    printf("\nVoce corta o chifre de Gorath e leva para Ayla.\n");
                }
                else{
                    printf("Voce se aproxima de Gorath mas ele acorda.\n");
                    combate();
                }
            }
            else if(escolhaGorath == 2){
                    printf("Voce atrai Gorath para fora da caverna.\n");
                    combate();
                }
            printf("\nAyla lhe agradesse por caçar a criatura te dá um arco forjado pelo melhor guerreiro dos Ritos\n");
            printf("Você ganhou um arco mais forte (+3 Dano)\n");
            aventureiro.dano += 3;
            break;
            
        case 2:
            printf("Ayla o avisa de que a floresta é traiçoeira e que muitos aventureiros se perderam sozinhos. Ela se despede e segue seu caminho.\n");
            break;
        
        default:
            printf("Opção inválida. Tente novamente.\n");
            florestaPerdida();
            break;
    }
    printf("\n--- VOCE SEGUE SUA JORNADA PARA ENCONTRAR O ARTEFATO ---\n");
    printf("\nMais adiante, você encontra uma pequena cabana, onde Thorne, um feiticeiro excêntrico, vive recluso. Ele é um homem magro, com uma longa capa e um bastão mágico. Ele está em um estudo profundo de antigos grimórios quando você entra.");
    printf("\nThorne: Você busca o artefato, jovem aventureiro? A magia da floresta é poderosa e está além da compreensão dos mortais. Porém, eu posso ajudá-lo a desvendar alguns dos segredos da floresta. Em troca, preciso de um favor… o Guardião do Fogo está em posse de um livro mágico. Se você puder recuperá-lo para mim, posso lhe fornecer um feitiço que o ajudará a enfrentar os desafios da floresta.");
    printf("\nEscolha como deseja proceder:\n");
    printf("1. Aceitar a missão de recuperar o livro do Guardião do Fogo.\n");
    printf("2. Recusar e seguir sozinho. \n");
    printf("\nEscolha uma opção (1-2): ");
    int escolhaThorne;
    scanf("%d", &escolhaThorne);
    
    switch(escolhaThorne){
        case 1:
            printf("\nThorne lhe passa a localicacao do Guardião do Fogo e voce segue ate la.");
            printf("\nChegando no local, voce encontra ruinas de uma antiga aldeia, logo voce se depara com uma chama ardente em um dos destrosos e se aproxima.");
            printf("\nA criatura percebe sua presenca e dispara uma magia de fogo, mas voce consegue se esquivar");
            combate();
            printf("\nVoce recupera o Livro e o feiticeiro lhe ensina uma habilidade magica\n");
            printf("Você aprendeu uma magia! (+3 Magia)\n");
            aventureiro.magia += 3;
            printf("\nThorne: Voce deve seguir para o norte em busca do artefato para salvar sua aldeia. Boa sorte!\n");
            break;
            
        case 2:
            printf("Thorne o avisa de que a floresta é traiçoeira e que muitos aventureiros se perderam sozinhos. Ele se despede e segue seu caminho.\n");
            break;
            
        default:
            printf("Opção inválida. Tente novamente.\n");
            florestaPerdida();
            break;    
    }
    printf("\n--- VOCE SEGUE SUA JORNADA EM DIRECAO AO NORTE ---\n");
    printf("\nPor fim, você encontra Lia, uma jovem curandeira que vive isolada em uma clareira tranquila da floresta. Ela é conhecida por suas habilidades curativas e oferece sua ajuda, mas primeiro, ela pede que o ajude com um problema de saúde.");
    printf("\nLia: A floresta está morrendo. As plantas e animais estão em declínio, e uma doença está se espalhando por todos os cantos. Eu preciso que você encontre uma planta rara, chamada Flor da Lua, que cresce nas regiões mais profundas da floresta.");
    printf("\nEscolha como deseja proceder:\n");
    printf("1. Buscar a Flor da Lua para Lia.\n");
    printf("2. Recusar e continuar a jornada sozinho. \n");
    printf("\nEscolha uma opção (1-2): ");
    int escolhaLia;
    scanf("%d", &escolhaLia);
    
    switch(escolhaLia){
        case 1:
            printf("\nCaminhando por muito tempo, voce encontra um jardim, onde esta tudo devastado, somente um brilho inesplicavel ao fundo.");
            printf("\nVoce se aproxima e pega a Flor da Lua.");
            printf("\nCinco criaturas no topo das arvores comecam a dispara flechas contra voce.");
            printf("\nPor sorte voce consegue se esconder e despistar as criaturas.");
            printf("\nVoce entrega a flor para Lia e ela recura toda a sua saude.");
            printf("\nVocê recuperou sua saude! (+10 vida)\n");
            aventureiro.vida += 10;
            printf("\nLia: Muito obrigada jovem corajoso, voce deve seguir em direcao ao Caminho do Eco, la é o coração da floresta e la esta o artefato magico, para salvar sua aldeia.\n");
            break;
            
        case 2:
            printf("Lia o avisa de que a floresta é traiçoeira e que muitos aventureiros se perderam sozinhos. Ele se despede e segue seu caminho.\n");
            break;
        
        default:
            printf("Opção inválida. Tente novamente.\n");
            florestaPerdida();
            break;     
    }
     printf("\n--- VOCE SEGUE EM DIRECAO AO CAMINHO DO ECO NO CENTRO DA FLORESTA PERDIDA ---\n");
     printf("\nVocê  finalmente chega ao centro da Floresta Perdida, onde o artefato mágico está escondido. No entanto, ele é confrontado pelo Guardião Supremo da floresta — uma entidade mística que representa o equilíbrio da natureza.\n");
     printf("\nGuardião Supremo: Você provou seu valor, jovem aventureiro, mas o poder que você busca não deve ser usado levianamente. O artefato tem o poder de mudar o destino do mundo, mas com grandes poderes vêm grandes responsabilidades.\n");
     printf("\nGuardião Supremo: Eu te desafio para uma luta, se voce ganhar voce fica com o artefato e pode salvar sua aldeia, e voce vai se tonar o novo Guardião Supremo.\n");
     printf("\nGuardião Supremo: Mas se voce perder deve ficará preso aqui para sempre e perderá suas memórias\n");
     combateGuardiao();
     printf("\nParabens! Voce derrotou o Guardião Supremo e salvou sua aldeia");
     printf("\nFIM DE JOGO");
     
}

void menu() {
    int opcao;

    printf("----- MENU PRINCIPAL -----\n");
    printf("1. Mundo dos Cavaleiros\n");
    printf("2. Tesouro do Dragao\n");
    printf("3. Floresta Perdida\n");
    printf("4. Sair\n");
    printf("Escolha uma opcao (1-4): ");
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao) {
        case 1:
            mundoCavaleiros();
            break;
        case 2:
            tesouroDragao();
            break;
        case 3:
            florestaPerdida();
            break;
        case 4:
            printf("Saindo do jogo...\n");
            break;
        default:
            printf("Opcao invalida. Tente novamente.\n");
            break;
    }
}

int main() {
    srand(time(NULL));
    menu();
    
    
    FILE* arquivo;
    arquivo = fopen("StatusPlayer.txt", "w");
    fputs("---ATRIBUTOS PLAYER---\n\n", arquivo);
    fprintf(arquivo, "VIDA\t %d\n", aventureiro.vida);
    fprintf(arquivo, "DANO\t %d\n", aventureiro.dano);
    fprintf(arquivo, "MAGIA\t %d\n", aventureiro.magia);
    fprintf(arquivo, "DEFESA\t %d\n", aventureiro.defesa);
    fclose(arquivo);
    
    return 0;
}