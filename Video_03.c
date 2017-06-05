// A importância do hábito aplicado a C
// A importância de programar

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	int *x;
	x=(int*)malloc(5000*sizeof(int));
	
setlocale(LC_ALL,"Portuguese");

printf("\t\t O Hábito de programar ! \t\t\n\n");

for(;;){
	system("cls");

printf("\t\t Quantas vezes você programou hoje ? \t\t\n\n");
scanf("%i",&x);

if(x==0){
printf("\n O hábito de programar é uma prática muito importante na vida de um programador !\n Não deixe de programar !");
getch();
}

else if(x>0){
	system("cls");
	if(x>=1 && x<=10){
		printf("\n Você programou pouco \n Sua recompensa é um copo de café para acordar! \n Programe mais para que programar vire uma rotina em sua vida!\n");
		getch();
	}
	
	else if(x>10 && x<=20){
		printf("\n Você programou um número considerável mas isso pode melhorar! \n Sua recompensa é um lanche para te animar! \nSe esforce mais um pouco para que programar vire uma rotina em sua vida!\n");
		getch();
	}
	
	else if(x>20 && x<=50){
		printf("\n Progamar é um hábito para você !\n parabéns continue assim! \n sua recompensa é uma pizza tamanho família para recompensar seu trabalho!\n");
		getch();
	}
	
	else if(x>50 && x<=100){
		printf("\n Você chegou ao nível João! \n programar é viver! \n sua recompensa é ir pra casa e jogar ps4 a noite toda!\n");
		getch();
	}
	
	else if(x>100 && x<=5000){
		printf("\nVocê é um Deus da programação!\n programar é seu sobrenome! \nsua recompensa é o novo processador da intel o i9 ! \n");
		getch();
	}	
}

else{
printf("\n valor inválido, digite somente números >=0 E <=5000 !\n");
getch();
}
	

}

getch();
return 0;
}
