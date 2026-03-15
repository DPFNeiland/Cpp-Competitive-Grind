#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<string.h>
#include<iso646.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
struct contatos{
	char nome[35];
	int telefone;
}agenda[15];

int main () {
	setlocale(LC_ALL,"ptb");

	int op, i=0, x, alt;	
	do{
		system("cls");
		printf("\nMenu de Opcoes");
		printf("\n1 - Cadastrar um num");
		printf("\n2 - Visualizar");
		printf("\n3 - Alterar");
		printf("\n4 - Sair");
		printf("\nDigite sua opcao: ");
		scanf("%d",&op);
			
		switch(op){
			case 1:
				
				if(i<15){
					printf("\n Informe nome: ");		
					fflush(stdin);
					gets(agenda[i].nome);
					printf("\n Informe telefone: ");
					scanf("%d",&agenda[i].telefone);
					printf("\n Cadastrado com Sucesso!!!");
					Sleep(2000); i++;
						} else {
							printf("\n Lista de Contatos de Cheia!!!");
							Sleep(2000); break;
						}
					break;
					
			case 2:
				for(int x=0;x<i;x++){
					printf("\n Nome: %s",agenda[x].nome);
					printf("\n Telefone> %d",agenda[x].telefone);
					printf("\n------------------------\n");
				}
				getch();
				break;
				
			case 3:
				printf("\nInforme codigo que deseja alterar: ");
				scanf("%d",&alt);
				printf("\nNome: %s",agenda[alt].nome);
				printf("\nInforme NOVO nome: ");
				scanf("%s",agenda[alt].nome);
				printf("\n Telefone: %d",agenda[alt].telefone);
				printf("\nInforme NOVO telefone: ");
				scanf("%d",&agenda[alt].telefone);
				break;
			
			case 4:	printf("\n Programa Encerrado. \n");
					break;
			default:
				printf("\nOpcao invalida\n");
				Sleep(2000); break;
			}
		
		}while(op!=4);
	return 0;
}

