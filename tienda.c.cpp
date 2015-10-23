#include<stdio.h>
/*Tienda*/
int N1;
int total;
int main()
{// inicio
printf("Tienda\n");
printf("(1)papas $10\n(2)aguas $8\n(3)paletas $3\n(4)chicles $1\n(5)refrescos $12\n(6)tortas $15\n(7)galletas $8\n(8)gomitas $5\n(9)power ade $14\n(10)maruchan $30\n");
printf("Escribe el numero del producto que desea\n");
scanf("%d",&N1);

switch (N1)
{

	case 1: {
		printf("¿cuantas papas quieres?\n");
		scanf("%d",&N1);
		total=N1*10;
		printf("total:%d",total);
		break;
	}
	case 2: {
		printf("¿cuantas aguas quieres?\n");
		scanf("%d",&N1);
		total=N1*8;
		printf("total:%d",total);
		break;
	}
	case 3: {
		printf ("¿cuantas paletas quiere?\n");
		scanf("%d",&N1);
		total=N1*3;
		printf ("total:%d",total);
		break;
	}
	case 4:{
		printf ("¿cuantos chicles quiere?\n");
		scanf("%d",&N1);
		total=N1*1;
		printf("total:%d",total);
		break;
	}
	case 5:{
		printf("¿cuantos refrescos quiere?\n");
		scanf("%d",&N1);
		total=N1*12;
		printf ("total:%d",total);
		break;
	}
	case 6:{
		printf("cuantas tortas quiere\n");
		scanf("%d",&N1);
		total=N1*15;
		printf("total:%d",total);
		break;
	}
	case 7:{
		printf("¿cuantas galletas quiere?\n");
		scanf("%d",&N1);
		total=N1*8;
		printf("total:%d",total);
		break;
	}
	case 8:{
		printf("¿cuantas gomitas quiere?\n");
		scanf("%d",&N1);
		total=N1*5;
		printf("total:%d",total);
		break;
	}
	case 9:{
		printf("¿cuantos power ade quiere?\n");
		scanf("%d",&N1);
		total=N1*14;
		printf("total:%d",total);
		break;
	}
	case 10:{
		printf("¿cuantas maruchan quiere?\n");
		scanf("%d",&N1);
		total=N1*30;
		printf("total:%d",total);
		break;
	}
	defaul:{
	printf("no hay");
		break;	
}
}
}//fin

