#include<stdio.h>
int kilos;
int tipo;
int main()
{
	printf("\nel numero de kilos a lavar es de:\n");
	scanf("%d",&kilos);
		if(kilos>21)
	{
		printf("no se  puede lavar");
		return 0;
		}
		if(kilos>=16 & kilos<=20)
 		printf(" el nivel de agua es maximo");		
		if(kilos>=11 & kilos<=15)
		{
 		printf("el nivel de agua es medio");		
		}				
		if(kilos>=0 & kilos<=10)
		{
 		printf("el nivel de agua  es minimo");		
		}			
	printf("\ningrese el numero de tipo de ropa Delicada(1) Normal(2) Sucia(3)\n");
	scanf("%d", &tipo);
	switch (tipo)
	{
		case 1:
			printf(" en 5 minutos se lavara su ropa");
		break;
		case 2:
			printf("en 10 minutos se lavara su ropa");
		break;
		case 3:
			printf("en 20 minutos se lavara su ropa");
		break;
		default:printf("no podra lavar");
	}
			
}
