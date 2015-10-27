#include<stdio.h>
int n;
int m;
int a;
int x;
int main()
{
	printf("Ordena numeros\n\n");
	printf("ingrese el primer numero\n");
	scanf("%d",&n);
	printf("ingrese el segundo numero\n");
	scanf("%d",&m);
	printf("ingrese el tercer numero\n");
	scanf("%d",&a);
	if (n<m)
	{
	x=n;
	n=m;
	m=x;
	}
	if (m<a)
	{
		x=m;
		m=a;
		a=x;
	}
		if (n<m)
	{
	x=n;
	n=m;
	m=x;
	}
	if (m<a)
	{
		x=m;
		m=a;
		a=x;
	}
	printf("\n\nnumero mayor:%d || numero medio:%d || numero menor:%d",n,m,a);
	return 0;
	}
   
    


