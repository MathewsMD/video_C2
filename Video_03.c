// A import�ncia do h�bito aplicado a C
// A import�ncia de programar

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	int *x;
	x=(int*)malloc(5000*sizeof(int));
	
setlocale(LC_ALL,"Portuguese");

printf("\t\t O H�bito de programar ! \t\t\n\n");

for(;;){
	system("cls");

printf("\t\t Quantas vezes voc� programou hoje ? \t\t\n\n");
scanf("%i",&x);

if(x==0){
printf("\n O h�bito de programar � uma pr�tica muito importante na vida de um programador !\n N�o deixe de programar !");
getch();
}

else if(x>0){
	system("cls");
	if(x>=1 && x<=10){
		printf("\n Voc� programou pouco \n Sua recompensa � um copo de caf� para acordar! \n Programe mais para que programar vire uma rotina em sua vida!\n");
		getch();
	}
	
	else if(x>10 && x<=20){
		printf("\n Voc� programou um n�mero consider�vel mas isso pode melhorar! \n Sua recompensa � um lanche para te animar! \nSe esforce mais um pouco para que programar vire uma rotina em sua vida!\n");
		getch();
	}
	
	else if(x>20 && x<=50){
		printf("\n Progamar � um h�bito para voc� !\n parab�ns continue assim! \n sua recompensa � uma pizza tamanho fam�lia para recompensar seu trabalho!\n");
		getch();
	}
	
	else if(x>50 && x<=100){
		printf("\n Voc� chegou ao n�vel Jo�o! \n programar � viver! \n sua recompensa � ir pra casa e jogar ps4 a noite toda!\n");
		getch();
	}
	
	else if(x>100 && x<=5000){
		printf("\nVoc� � um Deus da programa��o!\n programar � seu sobrenome! \nsua recompensa � o novo processador da intel o i9 ! \n");
		getch();
	}	
}

else{
printf("\n valor inv�lido, digite somente n�meros >=0 E <=5000 !\n");
getch();
}
	

}

getch();
return 0;
}
