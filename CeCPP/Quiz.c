#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<ctype.h>
#include<locale.h>
#include<conio.h>
int main(){
	setlocale(LC_ALL,"ptb");
	
char resp;
int c, d, certo=0, errou=0;
int e=0;
char lua1[50]="", lua2[50]="";
  
system("color 1");

 
    printf("\n\t\t-----------------------------------------------------------------------------------\n");
    printf("\t\t|                                                                                 |\n");
    printf("\t\t|                               BEM VINDO                                         |\n");
    printf("\t\t|                                  ao                                             |\n");
    printf("\t\t|                                ¿QUIZ?                                           |\n");
    printf("\t\t|                                                                                 |\n");
    printf("\t\t|made by: Antonio                                                                 |\n");
    printf("\t\t-----------------------------------------------------------------------------------\n");
 
 

system("pause");

system("cls");
strcpy(lua1,".");
while(e<=100){
	
	printf("\n");
	printf("\nLoading...\t\n");

	printf("%s", lua2);
	strcat(lua2,lua1);
	printf("%d%%",e);
	printf("\n\nPRESS ANY BUTTON TO START\n");
	if(e==66){
		Sleep(2000);
	}
	if(e==99){
		system("color 0A");
		getch();
		
	}
	system("cls");
	e+=3;
	
}

system("cls");

printf("\xDB");
printf("\t\tAs quest%ces a seguir s%co sobre conte%cdos gerais de HIST%cRIA\n\n\t\tVoce tem 30 segundos para responder cada quest%co \n\n\t\tBOA SORTE:)\n");
system("pause");
system("cls");




printf("\n \t\t\t\t ACERTOS: %d \t ERROS: %d", certo, errou);

printf("\n\n 1- Quem proclamou a Independencia da república do Brasil?");
printf("\n\n  (A) Professor Sérgio Roberto\n");
printf("\n\n  (B) Dom Pedro II\n");
printf("\n\n  (C) Dom Pedro I\n");
printf("\n\n  (D) Pero Vaz de Caminha\n");
printf("\n\n Alternativa : \n");
scanf("%c", &resp);
c=0;
if(toupper(resp)== 'C'){
	printf("\n\nResposta Correta!!!");
	certo++;
	while(c<6){
		system("color A7");
		Sleep(500);
		system("color 07");
		c++;
	}

	system("cls");
	system("color D");
	printf("\n\t\t :) MUITO BEM!!!!!\n");
}else{
	printf("\n\n RESPOSTA ERRADA!!!");
	while(c<6){
		system("color C7");
		Sleep(500);
		system("color 07");
		c++;
	}errou++;
	system("cls");
	system("color B");
	printf("\n\t\tMAIS ATENÇÃO NA PRÓXIMA;)\n\n");
}

system("pause");
system("cls");
system("cls");
printf("\n \t\t\t\t CERTO: %d \t ERROU: %d", certo, errou);

printf("\n\n 2- Em 1960 foi inaugurada a nova capital do Brasil(Brasília). O então presidente da República era:");
printf("\n\n  (A) Castelo Branco");
printf("\n\n  (B) Juscelino Kubitschek");
printf("\n\n  (C) Jânio Quadros");
printf("\n\n  (D) Jair Bolsonaro");
printf("\n\n Alternativa: \n");
fflush(stdin);
scanf("%c", &resp);
c=0;
if(toupper(resp)== 'B'){
	printf("\n\nResposta Correta!!!");
	certo++;
	while(c<6){
		system("color A7");
		Sleep(500);
		system("color 07");
		c++;
	}

	system("cls");
	system("color D");
	printf("\n\t\t :) MUITO BEM!!!!!\n");
}else{
	printf("\n\n RESPOSTA ERRADA!!!");
	while(c<6){
		system("color C7");
		Sleep(500);
		system("color 07");
		c++;
	}errou++;
	system("cls");
	system("color B");
	printf("\n\t\tMAIS ATENÇÃO NA PRÓXIMA ;)\n\n");
}
	system("pause");

system("cls");

printf("\n \t\t\t\t CERTO: %d \t ERROU: %d", certo, errou);

printf("\n\n 3- Quem foi o primeiro presidente dos Estados Unidos:");
printf("\n\n  (A) Abraham Lincoln");
printf("\n\n  (B) Sérgio Roberto");
printf("\n\n  (C) Benjamin Franklin");
printf("\n\n  (D) George Washington");
printf("\n\n Alternativa: \n");
fflush(stdin);
scanf("%c", &resp);
c=0;
if(toupper(resp)== 'D'){
	printf("\n\nResposta Correta!!!");
	certo++;
	while(c<6){
		system("color A7");
		Sleep(500);
		system("color 07");
		c++;
	}
	
	system("cls");
	system("color D");
	printf("\n\t\t :) MUITO BEM!!!!!\n");
}else{
	printf("\n\n RESPOSTA ERRADA!!!");
	while(c<6){
		system("color C7");
		Sleep(500);
		system("color 07");
		c++;
	}errou++;
	system("cls");
	system("color B");
	printf("\n\t\tMAIS ATENÇÃO NA PRÓXIMA ;)\n\n");
	system("pause");

system("cls");
}
printf("\n \t\t\t\t CERTO: %d \t ERROU: %d", certo, errou);
printf("\n\n 4- Dentre os fatores que conduziram à Primeira Guerra Mundial (1914-1918),destacamos o(a):");
printf("\n\n  (A) Nacionalismo eslavo aliado à desagregação do Império Turco.\n");
printf("\n\n  (B) Acordo militar anglo-germânico visando à partilha da África.\n");
printf("\n\n  (C) Oposição do Imperador Francisco Ferdinando à admissão da Sérvia no Império Austro-Húngaro.\n");
printf("\n\n  (D) Descontentamento da França frente à ocupação no Marrocos.\n");
printf("\n\n Alternativa: \n");
fflush(stdin);
scanf("%c", &resp);
c=0;
if(toupper(resp)== 'A'){
	printf("\n\nResposta Correta!!!");
	certo++;
	while(c<6){
		system("color A7");
		Sleep(500);
		system("color 07");
		c++;
	}

	system("cls");
	system("color E");
	printf("\n\t\t :) MUITO BEM!!!!!\n");
}else{
	printf("\n\n RESPOSTA ERRADA!!!");
	while(c<6){
		system("color C7");
		Sleep(500);
		system("color 07");
		c++;
	}errou++;
	system("cls");
	system("color 2");
	printf("\n\t\tMAIS ATENÇÃO NA PRÓXIMA;)\n\n");


system("pause");

system("cls");

printf("\n \t\t\t\t CERTO: %d \t ERROU: %d", certo, errou);
printf("\n\n 5- A 2a Guerra Mundial durou de____ até_____. Marque a alternativa que preenche os espaços em branco");
printf("\n\n  (A) 1988-2000\n");
printf("\n\n  (B) 1939-1945\n");
printf("\n\n  (C) 1504-1572\n");
printf("\n\n  (D) 1918-1926\n");
printf("\n\n Alternativa: \n");
fflush(stdin);
scanf("%c", &resp);
c=0;
if(toupper(resp)== 'B'){
	printf("\n\nResposta Correta!!!");
	certo++;
	while(c<6){
		system("color A7");
		Sleep(500);
		system("color 07");
		c++;
	}
	
	system("cls");
	system("color E");
	printf("\n\t\t :) MUITO BEM!!!!!\n");
}else{
	printf("\n\n RESPOSTA ERRADA!!!");
	while(c<6){
		system("color C7");
		Sleep(500);
		system("color 07");
		c++;
	}errou++;
	system("cls");
	system("color 2");
	printf("\n\t\tMAIS ATENÇÃO NA PRÓXIMA;)\n\n");


system("pause");

system("cls");

printf("\n \t\t\t\t CERTO: %d \t ERROU: %d", certo, errou);
printf("\n\n 6- Para o Paraguai, portanto, essa foi uma guerra pela sobrevivência. De todo modo, uma guerra contra dois gigantes estava fadada a ser um teste debilitante e severo para uma economia de base tão estreita. Lopez precisava de uma vitória rápida e, se não conseguisse vencer rapidamente, provavelmente não venceria nunca.\nA Guerra do Paraguai teve consequências políticas importantes para o Brasil, pois:");
printf("\n\n  (A) representou a afirmação do Exército Brasileiro como um ator político de primeira ordem\n");
printf("\n\n  (B) solucionou a crise financeira, em razão das indenizações recebidas\n");
printf("\n\n  (C) concretizou a emancipação dos escravos negros.\n");
printf("\n\n  (D) confirmou a conquista da hegemonia brasileira sobre a Bacia Platina");
printf("\n\n Alternativa: \n");
fflush(stdin);
scanf("%c", &resp);
c=0;
if(toupper(resp)== 'A'){
	printf("\n\nResposta Correta!!!");
	certo++;
	while(c<6){
		system("color A7");
		Sleep(500);
		system("color 07");
		c++;
	}
	
	system("cls");
	system("color E");
	printf("\n\t\t :) MUITO BEM!!!!!\n");
}else{
	printf("\n\n RESPOSTA ERRADA!!!");
	while(c<6){
		system("color C7");
		Sleep(500);
		system("color 07");
		c++;
	}errou++;
	system("cls");
	system("color 2");
	printf("\n\t\tMAIS ATENÇÃO NA PRÓXIMA;)\n\n");


system("pause");

system("cls");


}

printf("\n\n\n\t\tATENÇÃO, a questão a seguir é a mais dificil portanto valerá 3 pontos");
system("cls");
printf("\n \t\t\t\t CERTO: %d \t ERROU: %d", certo, errou);
printf("\n\n 6- Com relação à vida social e política na Grécia clássica, assinale a alternativa correta.\n");
printf("\n\n  (A) Foram prerrogativas democráticas que não estavam limitadas aos cidadãos e que também foram estendidas aos comerciantes e estrangeiros.\n");
printf("\n\n  (B) Foram introduzidas pelos legisladores para reduzir o poder assentado em bases religiosas e para estabelecer critérios racionais de distribuição.\n");
printf("\n\n  (C) Eram princípios fundamentais da política externa, mas suspensos temporariamente após a declaração formal de guerra..\n");
printf("\n\n  (D) Tratava-se de virtudes que se traduziam na observância da lei, dos costumes e das convenções instituídas pela pólis.");
printf("\n\n Alternativa: \n");
fflush(stdin);
scanf("%c", &resp);
c=0;
if(toupper(resp)== 'D'){
	printf("\n\nResposta Correta!!!");
	certo+3;
	while(c<6){
		system("color A7");
		Sleep(500);
		system("color 07");
		c+3;
	}

	system("cls");
	system("color E");
	printf("\n\t\t :) MUITO BEM!!!!!\n");
}else{
	printf("\n\n RESPOSTA ERRADA!!!");
	while(c<6){
		system("color C7");
		Sleep(500);
		system("color 07");
		c+3;
	}errou+3;
	system("cls");
	system("color 2");
	printf("\n\t\tMAIS ATENÇÃO NA PRÓXIMA;)\n\n");


system("pause");

system("cls");


printf("\t\t|             Pontuação Total             |\n");
printf("\t\t|                     |                   |\n");
printf("\t\t|Acertos: %d          |        WOW        |\n", certo);
printf("\t\t|                     |                   |\n");
printf("\t\t|Erros: %d            |         -_-       |\n", errou);

printf("OBRIGADO PELA PARTICIPAÇÃO");



}


}
return 0;

}
}

