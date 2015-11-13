#include<stdio.h>
	int i,promedio;
	int calificaciones[10];
	int suma = 0;
int main()
{
    
	printf("\nIntrodusca las calificaciones de 10 alunos:\n");
    
	for (i=0;i<10;i++)
    {
    scanf("%d",&calificaciones[i]);
    suma+=calificaciones[i];
    }
    printf("\nLa suma de las calificaciones es %d",suma);
    promedio=suma/10;
    printf("\nEl promedio de las calificaciones es %d",promedio);
    
}
