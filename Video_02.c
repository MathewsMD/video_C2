//A TÉCNICA POMODORO aplicada em C

#include<stdio.h>
#include<time.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int acertos=0, erros=0,x;
	
	printf("\t\tBem Vindo a lista de atividades cronometrada !\t\t\n\n");
	printf("\t\tVocê terá 5 perguntas para responder em 1500 seg(25min) \n contando pausas de 5 seg entre cada questão\n\n");
	sleep(10);
	struct timeval stop, start;
	gettimeofday(&start, NULL);
	system("cls");
	
	printf("\t\t 1- Quanto é (8*10+30)-(34/3) ?\n\n");
	scanf("%i",&x);
	if(x==((8*10+30)-(34/3))){
		printf("\t\t RESPOSTA CERTA !\n\n");
		getch();
		system("cls");
		acertos++;
	}
	else{
		printf("\t\t RESPOSTA ERRADA !\n\n");
		printf("\t\t RESPOSTA CERTA = %.2i\n\n",((8*10+30)-(34/3)));
		getch();
		system("cls");
		erros++;
		}
	
	sleep(5);
	
	printf("\t\t 2- Qual a raiz quadrada de 3136 ?\n\n");
	scanf("%i",&x);
	if(x==sqrt(3136)){
		printf("\t\t RESPOSTA CERTA !\n\n");
		getch();
		system("cls");
		acertos++;
	}
	else{
		printf("\t\t RESPOSTA ERRADA !\n\n");
		printf("\t\t RESPOSTA CERTA = %.2lf\n\n",sqrt(3136));
		getch();
		system("cls");
		erros++;
		}
	
	sleep(5);
	
		printf("\t\t 3- Qual o log de 8000 ?\n\n");
	scanf("%i",&x);
	if(x==log(8000)){
		printf("\t\t RESPOSTA CERTA !\n\n");
		getch();
		system("cls");
		acertos++;
	}
	else{
		printf("\t\t RESPOSTA ERRADA !\n\n");
		printf("\t\t RESPOSTA CERTA = %.2lf\n\n",log(8000));
		getch();
		system("cls");
		erros++;
		}
	
	sleep(5);
	
		printf("\t\t 4- Quanto é 3 elevado a 65 ?\n\n");
	scanf("%i",&x);
	if(x==pow(3,65)){
		printf("\t\t RESPOSTA CERTA !\n\n");
		getch();
		system("cls");
		acertos++;
	}
	else{
		printf("\t\t RESPOSTA ERRADA !\n\n");
		printf("\t\t RESPOSTA CERTA = %.2lf\n\n",pow(3,65));
		getch();
		system("cls");
		erros++;
		}
	
	sleep(5);
	
		printf("\t\t 5- Quanto é 8 bilhões x 0 ?\n\n");
	scanf("%i",&x);
	if(x==0){
		printf("\t\t RESPOSTA CERTA !\n\n");
		getch();
		system("cls");
		acertos++;
	}
	else{
		printf("\t\t RESPOSTA ERRADA !\n\n");
		printf("\t\t RESPOSTA CERTA = %.2lf\n\n",0);
		getch();
		system("cls");
		erros++;
		}
	
	sleep(5);
	
	
	gettimeofday(&stop, NULL);
	
	if((stop.tv_sec - start.tv_sec)>1500)
		printf("\t\t Você estorou o tempo limite do teste !\n\n");
	
	else if((stop.tv_sec - start.tv_sec)>=1 && (stop.tv_sec - start.tv_sec)<=1500){
	printf("\t\t Você concluiu o teste !\n\n Acertos: %i \n Erros: %i \n",acertos,erros);
	}
	
	getch();
	return 0;
}
