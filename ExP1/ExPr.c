#include <stdio.h>
int main(){
	int opcao;

	 printf("Era uma noite de lua cheia,o quartel estava em paz e todos os guerreiros repousavam em seus aposentos,até que um inesperado ataque começou."
			"Os cruéis Trolls planejaram um ataque surpresa ao nosso quartel,o ataque funcionou brilhantemente, pois a maioria de meus companheiros havia falecido.\n"
			"Meu Capitão,Amrrique,me mandou fugir para buscar informações sobre o porquê desse ataque e sobre os outros planos dos Trolls,para acabar de uma vez por todas com a hegemonia que os Trolls haviam ganho em tão pouco tempo.\n"
			"Nosso quartel foi atacado em Lothlórien e meu objetivo no momento é saber o porque desse ataque, após o ataque eu caminho para fora de lothlórien e encontro um troll ferido\n");
		printf("Consegui arrancar algumas informações do troll,prometendo poupar sua vida, ele me falou que o objetivo deles é atacar com força total Mordon(aonde seria a reunião dos três reinos,que reuniria os três reis e seus sucessores)\n");
		printf("Terei que ir para mordon o mais rápido possivel para avisa-los, para que não recebam um ataque surpresa e assim terem alguma chance\n");
		printf("Eu conheço Três caminhos para chegar a Mordon, ir pelo pântano dos mortos, que é um caminho mais rapido,ir pelo rio anduin,que é o mais seguro,e o último caminho é ir pela Floresta de Fangorn,que é o caminho mais perigoso, qual devo escolher?\n");
		printf(" 1 - Ir pelo Pântano dos Mortos\n");
		printf(" 2 - Ir pelo Rio Anduin\n");
		printf(" 3 - Ir pela Floresta de Fangorn\n");
		printf("Digite sua escolha ->\n");
		scanf("%d", &opcao);

	if(opcao==2 || opcao==3){
	    printf("Vou pelo Rio Anduin pois é o mais seguro e estou com pouco tempo,tenho apenas 5 dias para chegar em em Mordon.\n\n");
	    printf("Precisava de um barco para atravessar o rio.\n");
	    printf("Eu poderia construir mas o tempo não daria.Avisto uma balsa.\n\n");
		printf("1- Construo o barco.\n");
	    printf("2- Vou pela balsa.\n");
	    printf("Digite sua escolha ->\n");
	    scanf("%d",&opcao);
	    if(opcao == 1){
	    printf("O barco demorou muito para terminar de construir.\n");
	   	printf(" Você não consegue mas chegar a Mordon antes do ataque.\n\n");
	    printf("FIM DO JOGO\n");
	    return 0;
		}
		if(opcao == 2 ){
	   	printf("Usando a balsa consegui chegar a outra margem, seguindo rapidamente em direção ao Abismo de Helm.\n");
	    printf("Porém tenho que passar em Edoras antes.\n");
   	    printf("Chegando a Edoras fui procurar alimentos que estava sem.\n\n");
	    printf("Mas quando estava perto da loja dois trolls apareceram.\n");
	    printf("O que fazer?.\n\n");
	    printf("1- Lutar.\n");
	    printf("2- Pegar alimentos em outro lugar e sair da cidade o mais rápido possível.\n");
	    printf("Digite sua escolha ->\n");
	    scanf("%d",&opcao);
	    if(opcao == 1){
		   	printf("Decidi lutar, mas eles eram fortes de mais.\n");
		    printf("Agora estou preso em uma cela, sem possibilidades de chegar em Mordon.\n");
	        printf("FIM DO JOGO\n");
	        return 0;
			    }
	    if(opcao == 2){
    	    printf("Fui para outra loja.\n");
	        printf("Consegui tudo que precisava rapidamente e parti para o Abismo de Helm.\n");
   	        printf("Não sei por qual lado da cidade eu saio.\n");
	        printf("1- Pela entrada da cidade.\n");
	        printf("2- Pela saida lateral.\n");
	        printf("Digite sua escolha ->\n");
	        scanf("%d",&opcao);
	        if(opcao == 1){
	        	printf("Haviam muitos guardas na cidade principal.\n");
	            printf("Não foi possível sair por lá.\n");
	            printf("FIM DO JOGO\n");
	            return 0;
			        }
		        if(opcao == 2){
		        	printf("Chegando ao Abismo de Helm fui abordado por um grupo de Gobblins.\n");
		            printf("Eles ofereceram ajuda para passar pelo abismo.\n");
		            printf("Mas não sei se deveria confiar.\n");
		            printf("1- Não aceito a ajuda, e sigo sozinho.\n");
		            printf("2- Aceito a ajuda.\n");
		            printf("Digite sua escolha ->\n");
		            scanf("%d", &opcao);
		            if(opcao == 1){
			           	printf("Não aceitando a ajuda fui seguindo pela trilha do abismo.\n");
			            printf("Um dia de viajem e já foi possível ver a cidade de Isengard, que era a cidade que leva a cidade de Mordon.\n");
			            }
			            if(opcao == 2){
			           	printf("Aceitei ajuda, mas creio que não tenha sido a melhor opção.\n");
			            printf("Eles me levaram para as profundezas do abismo, não consegui chegar a Mordon a tempo.\n");
		                printf("FIM DO JOGO!\n");
		                return 0;
			            }
			        }
			    }
	        }
	    }   	
	        if(opcao==3)
	        printf("Decidi ir para a Floresta Fangorn,lugar onde os Trolls viviam,pois lá eu poderia descobrir os planos dos Trolls e informar os três reis,para bolar um plano para derrotá-los de uma vez por todas.\n");
	        printf("Avistei dois Trolls,aparentemente fracos,mas as únicas coisas que tenho em mãos são uma corda e uma faca,não muito afiada,talvez sirva para afiar algo,não tenho armas nem equipamentos para me defender ou para atacar.\n");
	        printf("Devo atacá-los mesmo assim?\n");
	        printf("1 - Procurar por recursos na floresta\n");
	        printf("2 - Atacá-los,pois são fracos\n");
	        printf("Digite sua escolha ->\n");
	        scanf("%d", &opcao);
	        if(opcao == 1){
	        	printf("Enquanto procurava alguns recursos na floresta encontrei uma pegada,familiar, mas não lembrava do que era.\n");
       	        printf("Quando me lembrei era tarde de mais, um urso me atacou e eu não consegui continuar dessa maneira.\n");
     	        printf("FIM DO JOGO!\n");
     	        return 0;
     	    }
     	    if(opcao == 2){
     	    	printf("Decidi atacá-los sem nenhum equipamento.Parti para cima do primeiro,e para minha surpresa estava armado,ele tinha um Tomahawk,e infelizmente ele me acertou alguns golpes, me deixando ferido.\n");
		        printf("Consegui derrotar o primeiro e pegar o Tomahwk,com ele em mãos o segundo não foi tão difícil assim.Somente dei um golpe forte no torso e ele morreu.Após a luta percebi que estava muito machucado,mas eu precisava chegar em Mordon a qualquer custo para avisar os reis sobre os Trolls.\n");
		        printf("Preciso sair dessa floresta o mais rápido possível,mas com esses ferimentos eu posso andar muito devagar.Mas eu também posso recorrer a floresta mais uma vez para achar umas ervas para passar nos ferimentos.O que devo fazer?\n");
                printf("1 - Ir para Isengard\n");
                printf("2 - Procurar por ervas na floresta\n");
                printf("Digite a sua escolha ->\n");
                scanf("%d", &opcao); 
                if(opcao == 1){
                	printf("Vou para Isengard,pois não tenho muito tempo.\n");
                    printf("Nesse meio tempo,os ferimentos ficaram piores,e,como eu não tinha as ervas necessárias,fiquei impossibilitado de fugir de outros Trolls que haviam me seguido para fora da floresta.Não foi uma boa ideia ter ido direto.\n");
                    printf("FIM DO JOGO\n");
                    return 0;
                }
                if(opcao == 2){
                	printf("Vou procurar na floresta alguma erva capaz de me ajudar a tratar desses ferimentos.Após algumas horas consegui achar algumas ervas,assim eu consegui melhorar a situação dos ferimentos,com isso minha viagem ficaria mais rápida.\n");	
     	            printf("Aproveitei para procurar recursos na floresta,talvez eu consiga achar um galho para fazer uma lança.\n");
	                printf("Consegui achar um galho forte o suficiente para construir uma lança.Peguei a faca comecei a endireitá-la,após isso a faca tamém me ajudou na hora de fazer a ponta da lança.\n");
	                printf("A parte do armamento está resolvida,pelo menos por enquanto,retornando ao local de antes,encontrei os mesmos Trolls.Qual devo atacar primeiro?\n");
                    printf("Com a lança em mãos decidi atacá-los.Derrotei o primeiro facilmente,somente um golpe da lança foi necessário para matá-lo.O segundo tentou fugir,mas consegui acertá-lo antes que o perdesse de vista.\n");
                    printf("Decidi sair da floresta sem investigar os Trolls.Saindo da floresta fui para minha próxima parada:Isengard.\n");
                if(opcao==2 || opcao==1){//Isengard
     	            printf("Fui para Isengard na expectativa de sair de lá no mesmo instante que cheguei,mas um pensamento veio em minha cabeça:Eu poderia ir até a torre e procurar por equipamentos,armamentos,entre outros,ou eu poderia simplesmente sair de lá rapidamente,economizando um tempo de viajem,chegando assim na Mina Tirith.O que faço?\n");
                    printf("1 - Partir para a torre em busca de equipamentos\n");
                    printf("2 - Ir embora de Isengard\n");
                    printf("Digite a sua escolha ->\n");
                    scanf("%d", &opcao);
                }    
                    if(opcao == 1){
                    	printf("Decidi ir para torre.Chegando nela percebi que ela era extremamente alta,e que eu poderia perder algum tempo nela.O que eu não contava era que os guardas estavam dentro dela não deixando ninguém entrar nem sair.\n");
     	                printf("Consegui entrar por uma janela,mas logo percebi que não foi uma das minhas melhores ideias.Rapidamente os guardas me viram e me acertaram,sem que eu conseguisse pegar a lança e me defender.\n");
     	                printf("FIM DO JOGO\n");
     	                return 0;
     	            }
     	            if(opcao == 2){
                   	    printf("Fui embora de Isengard sem me preocupar com os equipamentos que poderia ter deixado para trás.Nesse caminho até Tirith,por sorte acabei encontrando alguns equipamentos no meio do caminho: encontrei um elmo,e uma armadura,o que me deu mais certeza que eu havia feito a escolha correta.\n");
                        printf("Cheguei na Mina Tirith,com a mesma expectativa de Isengard,passar por lá direto.Eu estava perto do meu objetivo,Mordon.Mas para o meu azar os guardas estavam protegendo a Mina contra a entrada de qualquer pessoa.\n");
                        printf("Consegui conversar com os dois guardas que protegiam a entrada principal.Eles chamaram o seu Capitão,e eu expliquei minha missão.Eles deixaram-me passar e rapidamente eu me vi pela primeira vez perto de Mordon.\n");
                        printf("No caminho até Mordon encntrei uma casa onde,aparentemente,estava vazia.Estava muito cansado,e me restavam 2 dias dos 5 para chegar em Mordon e falar com os reis.O que faço?\n");
                        printf("1 - Entrar na casa\n");
                        printf("2 - Continuar o caminho até Mordon\n");
                        printf("Digite a sua escolha ->\n");
                        scanf("%d", &opcao);
                    }        
                }
            }
        }
    }
 return 0;
}