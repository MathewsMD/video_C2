#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


//t�cnica FEYNMAN aplicada a C


int menu(void){
		int opcao;
		
		printf("\t\t menu de Assuntos \t\t\n\n");
		printf("\t 1 - Fila \n");
		printf("\t 2 - Pilha \n");
		printf("\t 3 - M�todos de Ordena��o \n");
		printf("\t Outro Valor para encerrar o programa. \n");
		
		
		
		
		printf("\n\tQual assunto voc� domina ? \n");
		scanf("%d",&opcao);
		return opcao;
		
}

int main(void){
	
	int x=1,i;
	char explique[50];
	

	
	setlocale(LC_ALL, "Portuguese");
	
	while(x==1){
		system("cls");
	printf("\n\t\tT�cnica FEYNMAN aplicada em C\t\t\n\n");
	
	Reentender:
	switch(menu()){
		
		case 1: 	printf("\n\t Explique o que � Fila:\n");
					fflush(stdin);
					gets(explique);
					printf("\n Agora leia em voz alta o que voc� escreveu:\n");
					printf("\t%s\n",explique);
					
					for(;;){
					printf("\n\t De acordo com o que voc� escreveu, voc� domina o assunto ?(1 - SIM OU 2 - N�O)\n ");
					scanf("  %d",&i);
						if(i==1){	
							printf("\n\t�timo ! agora simplifique tudo que voc� sabe e voc� realmente dominar� o assunto por completo !");
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
							printf("\n Digite somente 1 para sim ou 2 para n�o");
						}
					}	
					getch();
					break;
	
		case 2: 	
					printf("\n\t Explique o que � Pilha:\n");
					fflush(stdin);
					gets(explique);
					printf("\n Agora leia em voz alta o que voc� escreveu:\n");
					printf("\t%s\n",explique);
					for(;;){
					printf("\n\t De acordo com o que voc� escreveu, voc� domina o assunto ?(1 - SIM OU 2 - N�O)\n ");
					scanf("  %d",&i);
						if(i==1){	
							printf("\n\t�timo ! agora simplifique tudo que voc� sabe e voc� realmente dominar� o assunto por completo !");
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
							printf("\n Digite somente 1 para sim ou 2 para n�o");
						}
					}	
					getch();
					break;
		
		case 3: 	printf("\n\t Explique o que � M�todos de Ordena��o:\n");
					fflush(stdin);
					gets(explique);
					printf("\n Agora leia em voz alta o que voc� escreveu:\n");
					printf("\t%s\n",explique);
					for(;;){
					printf("\n\t De acordo com o que voc� escreveu, voc� domina o assunto ?(1 - SIM OU 2 - N�O)\n ");
					scanf("  %d",&i);
						if(i==1){	
							printf("\n\t�timo ! agora simplifique tudo que voc� sabe e voc� realmente dominar� o assunto por completo !");
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
							printf("\n Digite somente 1 para sim ou 2 para n�o");
						}
					}	
					getch();
					break;
			
		default: 	
					printf("\nVoc� n�o domina nenhum assunto.\n\n FIM DO PROGRAMA");
					return 0;
					break;
		
	}
}
	
	getch();

	return 0;
}
