#include <stdio.h>
int main()
//inicio
{
float s,r,o,x;
inicio:
printf("\n\t\t\tCalculadora");
printf("\nprimer numero: ");
scanf("%f", &s);
printf("\nsegundo numero: ");
scanf("%f", &r);
printf("\nSumar = 1 / Restar = 2 / Multiplicar = 3 / Dividir = 4 : ");
scanf("%f", &o);
if (o==1)
{
printf("\nResultado: %f\n", s+r);
printf("\nPresiona 2 para Salir o 5 para volver a Comenzar: ");
scanf("%f", &x);
if (x==5)
{
}
if (x==2)
{
}
}
else if (o==2)
{
printf("\nResultado: %f\n", s-r);
printf("\nPresiona 2 para Salir o 5 para volver a Comenzar: ");
scanf("%f", &x);
if (x==5)
{
}
if (x==2)
{
}
}
else if (o==3)
{
printf("\nResultado: %f\n", s*r);
printf("\nPresiona 2 para Salir o 5 para volver a Comenzar: ");
scanf("%f", &x);
if (x==5)
{
}
if (x==2)
{
}
}
else if (o==4)
{
printf("\nResultado: %f\n", s/r);
printf("\nPresiona 2 para Salir o 5 para volver a Comenzar: ");
scanf("%f", &x);
if (x==5)
{
}
if (x==2)
{
}
}
else
{
}
}
//fin
