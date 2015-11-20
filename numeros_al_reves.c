#include<stdio.h>
int n;
int m=0;
int main()
{
	printf("numeros:");
	scanf("%d",&n);
	while (n > 0){
		m=m * 10 + n % 10;
		n=n / 10;
		}
	printf("\nnumeros al reves: %d",m);
}
