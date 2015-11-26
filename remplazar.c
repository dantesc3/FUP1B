#include<stdio.h>
char cadena[50];
int buscar,remplazar;
int i=0;
int main()
{
	scanf("%s",cadena);
	scanf(" %c",&buscar);
	scanf(" %C",&remplazar);
	for(i=0;i<50;i++)
	{
		if(cadena[i]==buscar)
		{
			cadena[i]=remplazar;
		}
	}
	printf(cadena);
}

