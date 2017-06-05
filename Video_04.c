// Como parar de procastinar aplicado em C
// Parando de jogar lol e começando a programar

#include<stdio.h>
#include<time.h>
#include<locale.h>


int main(void){
	int horas,x;
	setlocale(LC_ALL,"Portuguese");
	
printf("\t\t Método infalivel para parar de jogar lol ! \t\t\n\n");
for(;;){
printf("\t\t Quantas horas por dia você joga lol ?\t\t\n\n");

scanf("%i",&horas);

if(horas >=0 && horas <=24)
break;

else{
printf("\n Horário invalido !");
sleep(3);
system("cls");
}

}
	
	if(horas>=0 && horas <=2){
		printf("\n %i Horas por dia é um horário aceitavel !",horas);
		printf("\n Porém cuidado, tente jogar lol somente quando cumprir todas as suas obrigações !\n");
		sleep(15);
	}
	
	if(horas>2 && horas <=5){
		printf("\n %i Horas por dia ?! Você está ficando viciado!",horas);
		printf("\n Colocar o lol como prioridade no lugar dos estudos é um erro grave !");
		printf("\n Pois lembre-se PDLS e ELO não valem de nada na vida real !\n");
		sleep(15);
	}
	
	if(horas>5 && horas <=10){
		printf("\n %i Horas por dia ?! EOQ! ",horas);
		printf("\n A menos que você seja um jogador profissional de lol, isso é exagero!");
		printf("\n Desinsta-la esse jogo agora e faz o URI !\n");
		sleep(15);
	}
	
	if(horas>10 && horas <=24){
		printf("\n %i Horas por dia ?! Tá trollando ?",horas);
		printf("\n Continua jogando lol assim que vai ser GG aos 15 na sua vida !");
		printf("\n LOL não vai te dar salário,nem comida,nem vida social fora do jogo!");
		printf("\n Hora de Estudar mais ao invés de só jogar !\n");
		sleep(15);
	}
	
	system("cls");
	for(;;){
	printf("\n Depois de utilizar o metódo anti-lolzinho, você deseja desinstalar o jogo ? \n1-Sim ou 2-Não.\n");
	scanf("%i",&x);
	
	if(x==1){
		system("cls");
		printf("\t\t\n\n VITÓRIA \t\t\n\n");
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
		printf("\t\t\n\n Digite somente 1 para sim ou 2 para não ! Para de trollar ou vou te reportar!\t\t\n\n");
		sleep(6);
	}
	
	}
	
	
	getch();
	return 0;
}
