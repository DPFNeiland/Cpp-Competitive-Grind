#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include<conio.c>
#define MAX 100

struct agenda{
	char telefone[20];
	char nome [100];
	
}contato[MAX];

int main (){
	
	int flag=1, T=0, i, respedi, c, respex, D, C, Tam, K=0, f;
	char proc[100];
	
while(flag==1){
	
	printf(" ---------");
	printf(" Digite o respectivo numero para: \n");
	printf(" 1 - Criar novo contato \n");
	printf(" 2 - Editar contato \n");
	printf(" 3 - Excluir contato \n");
	printf(" 4 - Listar contados \n");
	printf(" 5 - Consultar contato \n");
	printf(" 6 - Sair \n");
	fflush(stdin);
	scanf("%d", &C);
	system("cls");
	
	switch(C){
	
	    case 1:
	        printf("\n Nome do contato: ");
	        fflush(stdin);
	        gets(contato[T].nome);
	        for(c=0; c<T; c++){
	        	
	        		while(strcmp(contato[T].nome,contato[c].nome)==0){
	        		printf(" \n Contato com nome j%c existente!", 160);
	        		printf(" Digite um nome de contato v%clido \n ",160);
	        		gets(contato[T].nome);		
				}
			}
			
			Tam=strlen(contato[T].nome);			
			for(c=0; c<Tam; c++){
				if(contato[T].nome[c]==' '){
					K++;
			}	}			
			while(K==Tam){
				K=0;
				printf(" \nDigite um nome v%clido!\n",160);
				gets(contato[T].nome);
				Tam=strlen(contato[T].nome);			
					for(c=0; c<Tam; c++){
						if(contato[T].nome[c]==' '){
							K++;
					}	}			
			}
					
	        printf(" Telefone do contato: ");
	        fflush(stdin);
	        gets(contato[T].telefone);
	        for(c=0; c<T; c++){
	        		while(strcmp(contato[T].telefone,contato[c].telefone)==0){
	        		printf(" \n Contato com telefone j%c existente!", 160);
	        		printf(" Digite um nome de contato v%clido \n ",160);
	        		gets(contato[T].telefone);		
				}
			}

			Tam=strlen(contato[T].telefone);			
			for(c=0; c<Tam; c++){
				if(contato[T].telefone[c]==' '){
					K++;
			}	}			
			while(K==Tam){
				K=0;
				printf(" \nDigite um telefone v%clido!\n",160);
				gets(contato[T].telefone);
				Tam=strlen(contato[T].telefone);			
					for(c=0; c<Tam; c++){
						if(contato[T].telefone[c]==' '){
							K++;
					}	}			
			}
	
	        printf("\n Contato Salvo com sucesso!");
    	    T++;
	        Sleep(2000);
	        system("cls");
	        break;
	    
		case 2:
		    printf("EDITAR CONTATO \n");
	        if (T == 0){
		        printf(" Voce nao registrou nenhum contato ainda!\n");
		        Sleep(2300);
		        system("cls");
		        break;
	                 
	        }else{
	            printf(" Digite como deseja procurar o contato: \n");
	            printf(" 1 - Nome\n");
	            printf(" 2 - Telefone\n");
	            printf(" 3 - cancelar\n");
	            fflush(stdin);
	            scanf("%d",&i);
	        
			    switch(i){
	
		            case 1:
		    	        printf("Nome do Contato: ");
		    	        fflush(stdin);
		                gets(proc);
		                for( c = 0; c<T; c++){
				            if(strcmp(proc,contato[c].nome)==0){
				            	break;
				            }
				        }
				        if(c==T){
				        	printf(" Contato não encontrado, verifique se digitou o nome corretamente!\n");
				        	Sleep(2500);
							getch();
				        	break;
						}
				            	system("cls");
				                printf(" Esse contato foi encontrado: ");
				                printf("\n Nome: %s\n", contato[c].nome);
				                printf(" Telefone: %s\n", contato[c].telefone);
				
				                printf("\n Digite um numero:\n");
				                printf(" 1 - Para alterar nome\n");
				                printf(" 2 - Para alterar telefone\n");
				                printf(" 3 - Sair\n");
				                fflush(stdin);
				                scanf("%d", &respedi);
					                	D=c;				
				                switch(respedi){
					                case 1:
		                                printf(" Nome antigo: %s\n",contato[c].nome);
		                                printf(" Novo nome: ");
									    fflush(stdin);	
		                                gets(proc);
	  									    for(c=0; c<T; c++){
	        									while(strcmp(proc,contato[c].nome)==0){
	        										printf(" \n Troque o nome para um nome diferente do atual \n", 160);
	        										printf(" \n Ou há contatos com nome já existente");
	        										printf("  ",160);
	        										gets(proc);		
												}
					
													Tam=strlen(proc);			
														for(f=0; f<Tam; f++){
															if(proc[f]==' '){
																K++;
														}	}			
														while(K==Tam){
															K=0;
															printf(" \nDigite um nome v%clido!\n",160);
															gets(proc);
															Tam=strlen(proc);			
																for(f=0; f<Tam; f++){
																	if(proc[f]==' '){
																		K++;
																}	}			
														}	}											
											
										strcpy(contato[D].nome,proc);
		                                printf("Mudanca feita com sucesso!");
		                                Sleep(2000);
		                                system("cls");
					                    break;
									case 2:
	             	                    printf(" Telefone antigo: %s\n",contato[c].telefone);
		                                printf(" Novo telefone: ");
		                                fflush(stdin);
		                                gets(proc); 
	  									    for(c=0; c<T; c++){
	        									while(strcmp(proc,contato[c].telefone)==0){
	        										printf(" \n Troque o telefoje para um nome diferente do atual \n", 160);
	        										printf(" \n Ou há contatos com telefone já existente");
	        										printf("  ",160);
	        										gets(proc);		
												}
											}
										strcpy(contato[D].telefone,proc);											
		                                printf("Mudanca feita com sucesso!");
		                                Sleep(2000);
		                                system("cls");
										break;
					                case 3:
					                	printf("\n operacao cancelada...");
					                	Sleep(2000);
					                    break;
					                default :
		                                printf("Digite um valor valido!\n"); 
		                                Sleep(2000);
										break;
            	                }        
	 	                    
	                    system ("cls"); break;
	                case 2 :
	                	printf("\nTelefone do Contato: ");
		    	        fflush(stdin);
		                gets(proc);
		                for(c = 0; c<T; c++){
				            if(strcmp(proc,contato[c].telefone)==0){
				            	break;
				            }
				        }
				            	system("cls");
				                printf(" Esse contato foi encontrado: ");
				                printf("\n Nome: %s\n", contato[c].nome);
				                printf(" Telefone: %s\n", contato[c].telefone);
				
				                printf("\n Digite o numero:\n");
				                printf(" 1 - Para alterar nome\n");
				                printf(" 2 - Para alterar telefone\n");
				                printf(" 3 - Sair\n");
				                fflush(stdin);
				                scanf("%d", &respedi);
				                switch(respedi){
					                case 1: 
		                                printf(" Nome antigo: %s\n",contato[c].nome);
		                                printf(" Novo nome: ");
									    fflush(stdin);
		                                gets(proc);
	  									    for(c=0; c<T; c++){
	        									while(strcmp(proc,contato[c].nome)==0){
	        										printf(" \n Troque o nome para um nome diferente do atual \n", 160);
	        										printf(" \n Ou há contatos com nome já existente");
	        										printf("  ",160);
	        										gets(proc);		
												}
											}
										strcpy(contato[D].nome,proc);
		                                printf("Mudanca feita com sucesso!");
		                                Sleep(2000);
		                                system("cls");
					                    break;
									case 2:
	             	                    printf(" Telefone antigo: %s\n",contato[c].telefone);
		                                printf(" Novo telefone: ");
		                                fflush(stdin);
		                                gets(proc);
	  									    for(c=0; c<T; c++){
	        									while(strcmp(proc,contato[c].telefone)==0){
	        										printf(" \n Troque o telefoje para um nome diferente do atual \n", 160);
	        										printf(" \n Ou há contatos com telefone já existente");
	        										printf("  ",160);
	        										gets(proc);		
												}
											}
										strcpy(contato[D].telefone,proc);
		                                printf("Mudanca feita com sucesso!");
		                                Sleep(2000);
		                                system("cls");
										break;
					                case 3:
					                	printf("\n operacao cancelada...");
					                	Sleep(2000);
					                    break;
					                default :
					                	Sleep(2000);
		                                printf("Digite um valor valido!\n"); 
										break;
				                }
				            
				        system("cls"); break;
				    case 3:
				    	printf(" operacao cancelada...\n");
				    	Sleep(2000);
				    	break;
				       
				    default :
				    	printf("Digite um valor valido!");
				    	Sleep(2000);
				    	break;
				}
            }system("cls"); break;

        case 3 :
		    printf("EXCLUIR CONTATO \n");
	        if (T == 0){
		        printf(" Voce nao registrou nenhum contato ainda!\n");
		        break;
	        }else{
	            printf(" Digite como deseja procurar o contato: \n");
	            printf(" 1 - Nome\n");
	            printf(" 2 - Telefone\n");
	            printf(" 3 - cancelar\n");
	            fflush(stdin);
	            scanf("%d",&i);
	        
		     	switch(i){
			       
				    case 1 : 
			            printf(" Nome do contato:");
			            fflush(stdin);
			            gets(proc);	
			            for(c = 0; c<T; c++) {
				            if(strcmp(proc,contato[c].nome)==0){
				            	break;
				            } }
				        if(c==T){
				        	printf(" Contato não encontrado, verifique se digitou o nome corretamente!\n");
				        	Sleep(2500);
							getch();
				        	break;
						}				            
				            	system("cls");
				                printf(" Esse contato foi encontrado: \n");
				                printf(" Nome: %s\n", contato[c].nome);
				                printf(" Telefone: %s\n\n", contato[c].telefone);
				                Sleep(2000);
				                printf("\n Voce tem certeza que deseja excluir esse contato?\n 1-Sim\n 2-Nao\n");
				                fflush(stdin);
				                scanf("%d", &respex);			            
							    switch(respex){
				                    case 1 :
				                    	
				    	                strcpy(contato[c].nome , "");
				    	                strcpy(contato[c].telefone, "");
				    	                
				    	                for(D=c; D<=T;D++){
				    	                	strcpy(contato[c].nome,contato[c+1].nome);
				    	                	strcpy(contato[c].telefone,contato[c+1].telefone);
										}
				    	                T--;
				    	                printf("\nContato excluido com sucesso!");
				    	                Sleep(2000);
				    	                system("cls");
										break;
				                    case 2 :
				        	            printf("\n operacao cancelada...");
				        	            Sleep(2000);
				        	            system("cls");
				    	                break;
				                    default : 
								        printf("Voce nao digitou um numero valido"); 
								        Sleep(2000);
									    break;
				                }
                        system("cls"); break;
                    
					case 2:
            	        printf(" Telefone do contato:");
			            fflush(stdin);
			            gets(proc);	
			            for(c = 0; c<T; c++) {
				            if(strcmp(proc,contato[c].telefone)==0){
				            	break;
				            } }
				        if(c==T){
				        	printf(" Contato não encontrado, verifique se digitou o nome corretamente!\n");
				        	Sleep(2500);
							getch();
				        	break;
						}				            
				            	system("cls");
						        
				                printf(" Esse contato foi encontrado: \n");
				                printf(" Nome: %s\n", contato[c].nome);
				                printf(" Telefone: %s\n\n", contato[c].telefone);
				                Sleep(2000);
				                printf("\n Voce tem certeza que deseja excluir esse contato?\n 1-Sim\n 2-Nao\n");
				                fflush(stdin);
				                scanf("%d", &respex);
				            
							    switch(respex){
				                    case 1 :
				    	                strcpy(contato[c].nome , "");
				    	                strcpy(contato[c].telefone, "");
				    	                printf("\nContato excluido com sucesso.");
				    	                Sleep(2000);
				    	                system("cls");
										break;
				                    case 2 :
				        	            printf("\n operacao cancelada...");
				        	            Sleep(2000);
				        	            system("cls");
				    	                break;
				                    default : 
								        printf("Voce nao digitou um numero valido"); 
								        Sleep(2000);
									    break;
				                }
	                        
                       system("cls"); break;
                       
                    case 3:
					    printf("\n operacao cancelada...");
					    Sleep(2000);
					    break;
					
					default :
						printf("Digite um valor valido!");
				    	Sleep(2000);
				    	break;
				}
                
            }system("cls"); break;
    
	    case 4 :
		    if (T == 0){
		        printf(" Voce nao registrou nenhum contato ainda!\n");
		    break;
            }else{
        	    printf("\n ---------------------------- \n\n");
        	    for(c = 0; c<T; c++){
        		    printf(" Nome: %s\n Telefone: %s\n", contato[c].nome, contato[c].telefone);
        		    printf("\n ---------------------------- \n\n");
		        }
		        getch();
		    }system("cls");break;	
		
		case 5 :
		    if (T == 0){
		        printf(" Voce nao registrou nenhum contato ainda!\n");
		        Sleep(2300);
		        system("cls");
		        break;
	                 
	        }else{
	            printf(" Digite como deseja procurar o contato: \n");
	            printf(" 1 - Nome\n");
	            printf(" 2 - Telefone\n");
	            printf(" 3 - cancelar\n");
	            fflush(stdin);
	            scanf("%d",&i);
				
				switch(i){
	
		            case 1 :
		    	        printf("Nome do Contato: ");
		    	        fflush(stdin);
		                gets(proc);
		                for(c = 0; c<T; c++){
				            if(strcmp(proc,contato[c].nome)==0){
				            	break;
				            }	}
				        if(c==T){
				        	printf(" Contato não encontrado, verifique se digitou o nome corretamente!\n");
				        	Sleep(2500);
							getch();
				        	break;
						}				            
				            	system("cls");
				                printf(" Esse contato foi encontrado: ");
				                printf("\n Nome: %s\n", contato[c].nome);
				                printf(" Telefone: %s\n", contato[c].telefone);	 
			                    getch();
				            
				        system("cls"); break;
				        
				    case 2 :
					    printf("\nTelefone do Contato: ");
		    	        fflush(stdin);
		                gets(proc);
		                for(c = 0; c<T; c++){
				            if(strcmp(proc,contato[c].telefone)==0){
				            	break;
				            }	}
				        if(c==T){
				        	printf(" Contato não encontrado, verifique se digitou o nome corretamente!\n");
				        	Sleep(2500);
							getch();
				        	break;
						}
				            	system("cls");
				                printf(" Esse contato foi encontrado: ");
				                printf("\n Nome: %s\n", contato[c].nome);
				                printf(" Telefone: %s\n", contato[c].telefone); 
								getch();
				            
				        system("cls"); break;
					
					case 3 :
				    	printf(" operacao cacelada...\n");
				    	Sleep(2000);
				    	break;
				       
				    default :
				    	printf("Digite um valor valido!");
				    	Sleep(2000);
				    	break;
				}
            }system("cls"); break;
		
		case 6 :
         	printf(" Obrido por utilizar a Agenda\n\n ");	
	        printf(" Finalizando programa...");
	        Sleep(2500);
	        return 0; 
	    
	    default :
	    	printf("Digite um valor valido!");
			Sleep(2000);
			break;
	    }
                                     
}
 return 0;                      
}                      
