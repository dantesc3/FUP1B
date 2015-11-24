 #include<stdio.h>
 
 int i=1,n,cociente,resultado;
 int main()
{
	printf("introduce un numero:\n");
	scanf("%d",&n);
	while(n>2)

	{
		for(i=1;i<=n;)
		{
		cociente=n/2;
		n=cociente;
		resultado=cociente%2;
		printf("%d",resultado);
		}
	    
	}
	
}
