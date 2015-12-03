#include<stdio.h>
int identidad[3][3];
int matriz[3][3];
int j=0;
int i=0;
int operacion,escalar;
int main()
{
	identidad[0][0]=1;
	identidad[0][1]=0;
	identidad[0][2]=0;
	identidad[1][0]=0;
	identidad[1][1]=1;
	identidad[1][2]=0;
	identidad[2][0]=0;
	identidad[2][1]=0;
	identidad[2][2]=1;
	printf("introduce el numero a multiplicar:\n");
	scanf("%d",&escalar);
	
	printf("la matriz es:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			operacion=escalar*identidad[i][j];
			printf("%d ",operacion);
	    }
	}
	printf("\n");
}
