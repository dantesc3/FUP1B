#include <stdio.h>
int n;
int m;
int main()
{
	int i, n=1, m=0;
	printf("Ingresa un numero: ");
	scanf("%d",&i);
	do{
		m=n+m;
		n=n+1;
	}while(n<=i);
	printf("%d", m);
}
