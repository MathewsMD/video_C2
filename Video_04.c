// Como parar de procastinar aplicado em C
// Parando de jogar lol e come�ando a programar

#include<stdio.h>
#include<time.h>
#include<locale.h>


int main(void){
	int horas,x;
	setlocale(LC_ALL,"Portuguese");
	
printf("\t\t M�todo infalivel para parar de jogar lol ! \t\t\n\n");
for(;;){
printf("\t\t Quantas horas por dia voc� joga lol ?\t\t\n\n");

scanf("%i",&horas);

if(horas >=0 && horas <=24)
break;

else{
printf("\n Hor�rio invalido !");
sleep(3);
system("cls");
}

}
	
	if(horas>=0 && horas <=2){
		printf("\n %i Horas por dia � um hor�rio aceitavel !",horas);
		printf("\n Por�m cuidado, tente jogar lol somente quando cumprir todas as suas obriga��es !\n");
		sleep(15);
	}
	
	if(horas>2 && horas <=5){
		printf("\n %i Horas por dia ?! Voc� est� ficando viciado!",horas);
		printf("\n Colocar o lol como prioridade no lugar dos estudos � um erro grave !");
		printf("\n Pois lembre-se PDLS e ELO n�o valem de nada na vida real !\n");
		sleep(15);
	}
	
	if(horas>5 && horas <=10){
		printf("\n %i Horas por dia ?! EOQ! ",horas);
		printf("\n A menos que voc� seja um jogador profissional de lol, isso � exagero!");
		printf("\n Desinsta-la esse jogo agora e faz o URI !\n");
		sleep(15);
	}
	
	if(horas>10 && horas <=24){
		printf("\n %i Horas por dia ?! T� trollando ?",horas);
		printf("\n Continua jogando lol assim que vai ser GG aos 15 na sua vida !");
		printf("\n LOL n�o vai te dar sal�rio,nem comida,nem vida social fora do jogo!");
		printf("\n Hora de Estudar mais ao inv�s de s� jogar !\n");
		sleep(15);
	}
	
	system("cls");
	for(;;){
	printf("\n Depois de utilizar o met�do anti-lolzinho, voc� deseja desinstalar o jogo ? \n1-Sim ou 2-N�o.\n");
	scanf("%i",&x);
	
	if(x==1){
		system("cls");
		printf("\t\t\n\n VIT�RIA \t\t\n\n");
		sleep(5);
		printf("\t\t\n\n UM ALIADO FOI DESCONECTADO \t\t\n\n");
		sleep(10);
		break;
	}
	
	else if(x==2){
		system("cls");
		printf("\t\t\n\n DERROTA \t\t\n\n");
		sleep(5);
		printf("\t\t\n\n UM ALIADO FOI RECONECTADO \t\t\n\n");
		sleep(10);
		break;
	}
	
	else{
		system("cls");
		printf("\t\t\n\n Digite somente 1 para sim ou 2 para n�o ! Para de trollar ou vou te reportar!\t\t\n\n");
		sleep(6);
	}
	
	}
	
	
	getch();
	return 0;
}
