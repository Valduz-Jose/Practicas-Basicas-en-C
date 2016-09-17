#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int Numero1,Numero2,Resultado,Opcion;
	
	do{
		do{
		system("color F0");
		system("cls");
		printf("\t\tEscoja una Opcion:");
		printf("\n\n\t 1.Sumas ");
		printf("\n\t 2.Restas ");
		printf("\n\t 3.Multiplicaciones ");
		printf("\n\t 4.Divisiones \t\t\n\n");
		scanf("%d",&Opcion);
		}
		while(Opcion<1 || Opcion>4);
		switch(Opcion){
			case 1:printf("\n\n Sumas:");
			printf("\n\tIntroduce un Numero: ");
			scanf("%d",&Numero1);
			printf("\n\tIntroduce otro Numero: ");
			scanf("%d",&Numero2);
			Resultado=Numero1+Numero2;
			printf("\n\tTu resultado es: %d ",Resultado);
			printf("\t\t\n");
			break;
		
			case 2:printf("\n\n Restas:");
			printf("\n\tIntroduce un Numero: ");
			scanf("%d",&Numero1);
			printf("\n\tIntroduce otro Numero: ");
			scanf("%d",&Numero2);
			Resultado=Numero1-Numero2;
			printf("\n\tTu resultado es: %d ",Resultado);
			printf("\t\t\n");
			break;
		
			case 3:printf("\n\n Multiplicaciones:");
			printf("\n\tIntroduce un Numero: ");
			scanf("%d",&Numero1);
			printf("\n\tIntroduce otro Numero: ");
			scanf("%d",&Numero2);
			Resultado=Numero1*Numero2;
			printf("\n\tTu resultado es: %d ",Resultado);
			printf("\t\t\n");
			break;
		
			case 4:printf("\n\n Divisiones:");
			printf("\n\tIntroduce un Numero: ");
			scanf("%d",&Numero1);
			printf("\n\tIntroduce otro Numero: ");
			scanf("%d",&Numero2);
			Resultado=Numero1/Numero2;
			printf("\n\tTu resultado es: %d ",Resultado);
			printf("\t\t\n");
			break;
		}
		system("pause");
	}while(Opcion!=4);
	return 0;
}
