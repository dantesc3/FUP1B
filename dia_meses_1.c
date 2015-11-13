#include<stdio.h>
int n1,n2,res,total;
int mes;
int mes2;
int i=0;
int main()
{
	printf("dame un numero de dia\n");
	scanf("%d",&n1);
	printf("dame el numero del mes\n");
	scanf("%d",&mes);
	switch(mes){
	case 1:{
		printf("Es enero");
		 break;
	}
	case 2:{
		printf("Es febrero");
		 break;
	}
	case 3:{
		printf("Es marzo");
	 break;
	}
	case 4:{
		printf("Es abril");
		break;
	}
	case 5:{
		printf("Es mayo");
		 break;
	}
	case 6:{
		printf("Es junio");
		 break;
	}
	case 7:{
		printf("Es julio");
		break;
	}
	case 8:{
		printf("Es agosto");
		break;
	}
	case 9:{
		printf("Es sepiembre");
		break;
	}
	case 10:{
		printf("Es octubre");
		 break;
	}
	case 11:{
		printf("Es noviembre");
		 break;
	}
	case 12:{
		printf("Es diciembre");
		 break;
	}
	default:{
		printf("\nNo es un mes");
		 break;
		return 0;
	}}
	
	printf("\n\ndame un segundo numero de dia\n");
	scanf("%d",&n2);
	printf("dame el numero del mes\n");
	scanf("%d",&mes2);
	switch(mes2){
	case 1:{
		printf("Es enero");
		 break;
	}
	case 2:{
		printf("Es febrero");
		 break;
	}
	case 3:{
		printf("Es marzo");
	 break;
	}
	case 4:{
		printf("Es abril");
		break;
	}
	case 5:{
		printf("Es mayo");
		 break;
	}
	case 6:{
		printf("Es junio");
		 break;
	}
	case 7:{
		printf("Es julio");
		break;
	}
	case 8:{
		printf("Es agosto");
		break;
	}
	case 9:{
		printf("Es sepiembre");
		break;
	}
	case 10:{
		printf("Es octubre");
		 break;
	}
	case 11:{
		printf("Es noviembre");
		 break;
	}
	case 12:{
		printf("Es diciembre");
		 break;
	}
	default:{
		printf("\nNo es un mes");
		 break;
		  return 0;
	}}
for (i=0; i<30; i++)
for (int dias=1; dias<30; dias++)

{
	res=n1-n2;
	total=res*dias;
}
	{
	
		printf("\n\nDias: %d",total);
	}
}

