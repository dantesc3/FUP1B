#include<stdio.h>
int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,rango;
int moda;
int i=0;
int mas_grande;
int calificaciones[10];

int main()
{
	printf("introduce las calificaciones\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	scanf("%d",&n4);
	scanf("%d",&n5);
	scanf("%d",&n6);
	scanf("%d",&n7);
	scanf("%d",&n8);
	scanf("%d",&n9);
	scanf("%d",&n10);
	for ( i = 0; i < 10; i++ ){
    if(calificaciones[i]-1)++;
}
	for(rango=0;rango<10;rango++){
		if (calificaciones[rango]>mas_grande){
			mas_grande=calificaciones[rango];
			moda=rango;
		}}
			{
			printf("la moda es: %d",moda);
			}
			
}

