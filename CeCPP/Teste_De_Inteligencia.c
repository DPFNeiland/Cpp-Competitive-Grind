#include<stdio.h>
#include<locale.h>
#include<conio.c>
int main () {
	
	int N, T=1, flag=1, Pont=0, F=0;
	char resp[50];
	
	printf("\n Bem vindo ao... \n");
	printf(" Teste de Inteligência");
	printf("\n\n\n\n\n\n\n Também conhecido como T.I... ");
	getch();
	
	system("cls");
	
	printf(" Irei explciar um pouco sobre o teste de inteligência\n ");
	printf(" As regras são as seguintes: \n");
	printf(" Aparecerar uma sequência de palavras conforme no exemplo a abaixo e deverá advinha o que significa\n ");
	printf(" For example: \n\n Os 15 a de R \n Resposta: Os 15 anos de Rodrigo \n");
	printf(" Claro que as frases tem mais sentido, existem 7 frase por nível, advinhe-as e então... Boa sorte!!! \n");
	system("pause");
	system("cls");
	
	while(flag==1){
	
	
	printf(" Níveis ------- Pontuação: %d\n", Pont);
	printf(" 1 - Para o primeiro nível\n");
	printf(" 2 - Para o primeiro nível\n");
	printf(" 3 - Para o primeiro nível\n");
	printf(" 4 - Para o primeiro nível\n");
	printf(" 5 - Para o primeiro nível\n");
	printf(" 6 - Para o primeiro nível\n");
	printf(" 7 - Para o primeiro nível\n");
	printf(" 8 - Sair do jogo\n");
	fflush(stdin);
	scanf("%d",&N);
	
	switch(N){
		case 1: // Primeira fase do Teste de Inteligência
			while(F!=4){ // Um while para rodar até que o usuário acerte as questões
			system("cls");
			printf(" Digite: \n");
			printf(" 1 - Para digitar a respota \n");
			printf(" 2 - Para mover para cima\n");
			printf(" 3 - Para mover para baixo\n");
			printf(" Digite sua resposta: \n");
			printf(" 26 L No A: \n");
			printf(" 7 D na S : \n");
			printf(" 7 M do M : \n");
			printf(" 12 S do Z: \n");
			fflush(stdin);
			gets(resp);
		
			if(strcmp(resp,"26 letras no alfabeto")==1){
				printf(" Resposta certa!!!");
				Sleep(5000);
				system("cls");
				F++;
			} //Resposta certa da 1º frase
			if(strcmp(resp,"7 dias na semana")==1){
				printf(" Resposta certa!!!");
				Sleep(5000);
				system("cls");
				F++;
			} //Resposta certa da 2º frase		
			if(strcmp(resp,"7 maravilhas do mundo")==1){
				printf(" Resposta certa!!!");
				Sleep(5000);
				system("cls");
				F++;
			} //Resposta certa da 3º frase
			if(strcmp(resp,"12 signos do zodíaco")==1){
				printf(" Resposta certa!!!");
				Sleep(5000);
				system("cls");
				F++;
			} //Resposta certa da 4º frase		
			} // Finaliza o while 
		
		case 8:
			system("cls");
			printf(" Obrigado por jogar!!! \n");
			printf(" Pontuação final: %d", Pont);
			if(Pont>=0 && Pont<=5)
				printf(" Resultado: Predicado!!!! Um pouco mais de esforço e conseguirá uma pontuação melhor! Acredito em vc");
			if(Pont>=6 && Pont<=11)
				printf(" Resultado: Tá na média, mas com um pouco de esforço, consegue melhorá ainda mais sua pontuação!! ");
			if(Pont>=12 && Pont<=18)
				printf(" Resultado: Espertinho, melhor que maior parte dos jogadores desse teste de ingeligência ");
			if(Pont>=19 && Pont<=24)
				printf(" Resultado: Inteligente pacas! Tens um magnífico futuro pela frente!!! \n");
			if(Pont>=25)
				printf(" Resultado: Omg, you're Albert Einsten");
			Sleep(5000);
			return 0;
		default :
			printf(" Digite um valor válido!!! ");
	}	}
	
	
	
	
	return 0;
}
