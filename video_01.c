#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


//técnica FEYNMAN aplicada a C


int menu(void){
		int opcao;
		
		printf("\t\t menu de Assuntos \t\t\n\n");
		printf("\t 1 - Fila \n");
		printf("\t 2 - Pilha \n");
		printf("\t 3 - Métodos de Ordenação \n");
		printf("\t Outro Valor para encerrar o programa. \n");
		
		
		
		
		printf("\n\tQual assunto você domina ? \n");
		scanf("%d",&opcao);
		return opcao;
		
}

int main(void){
	
	int x=1,i;
	char explique[50];
	

	
	setlocale(LC_ALL, "Portuguese");
	
	while(x==1){
		system("cls");
	printf("\n\t\tTécnica FEYNMAN aplicada em C\t\t\n\n");
	
	Reentender:
	switch(menu()){
		
		case 1: 	printf("\n\t Explique o que é Fila:\n");
					fflush(stdin);
					gets(explique);
					printf("\n Agora leia em voz alta o que você escreveu:\n");
					printf("\t%s\n",explique);
					
					for(;;){
					printf("\n\t De acordo com o que você escreveu, você domina o assunto ?(1 - SIM OU 2 - NÃO)\n ");
					scanf("  %d",&i);
						if(i==1){	
							printf("\n\tÓtimo ! agora simplifique tudo que você sabe e você realmente dominará o assunto por completo !");
							getch();
							return 0;
							break;
							
						}
						else if(i==2){
							system("cls");
							printf("\n\n\tRepita o programa para melhor entendimento do assunto !\n\n");
							sleep(3);
							system("cls");
							
							goto Reentender;
						}
						
						else{
							printf("\n Digite somente 1 para sim ou 2 para não");
						}
					}	
					getch();
					break;
	
		case 2: 	
					printf("\n\t Explique o que é Pilha:\n");
					fflush(stdin);
					gets(explique);
					printf("\n Agora leia em voz alta o que você escreveu:\n");
					printf("\t%s\n",explique);
					for(;;){
					printf("\n\t De acordo com o que você escreveu, você domina o assunto ?(1 - SIM OU 2 - NÃO)\n ");
					scanf("  %d",&i);
						if(i==1){	
							printf("\n\tÓtimo ! agora simplifique tudo que você sabe e você realmente dominará o assunto por completo !");
							getch();
							return 0;
							break;
							
						}
						else if(i==2){
							system("cls");
							printf("\n\n\tRepita o programa para melhor entendimento do assunto !\n\n");
							sleep(3);
							system("cls");
							
							goto Reentender;
						}
						
						else{
							printf("\n Digite somente 1 para sim ou 2 para não");
						}
					}	
					getch();
					break;
		
		case 3: 	printf("\n\t Explique o que é Métodos de Ordenação:\n");
					fflush(stdin);
					gets(explique);
					printf("\n Agora leia em voz alta o que você escreveu:\n");
					printf("\t%s\n",explique);
					for(;;){
					printf("\n\t De acordo com o que você escreveu, você domina o assunto ?(1 - SIM OU 2 - NÃO)\n ");
					scanf("  %d",&i);
						if(i==1){	
							printf("\n\tÓtimo ! agora simplifique tudo que você sabe e você realmente dominará o assunto por completo !");
							getch();
							return 0;
							break;
							
						}
						else if(i==2){
							system("cls");
							printf("\n\n\tRepita o programa para melhor entendimento do assunto !\n\n");
							sleep(3);
							system("cls");
							
							goto Reentender;
						}
						
						else{
							printf("\n Digite somente 1 para sim ou 2 para não");
						}
					}	
					getch();
					break;
			
		default: 	
					printf("\nVocê não domina nenhum assunto.\n\n FIM DO PROGRAMA");
					return 0;
					break;
		
	}
}
	
	getch();

	return 0;
}
