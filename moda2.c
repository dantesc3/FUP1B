#include <stdio.h>
#include <string.h>

int FREC (char *vector, char letra, int pri, int ult)
{
   int i, suma;
   
   if (pri > ult)
      return 0;
      
   suma = 0;
   for (i = pri; i <= ult; i++)
   {
      if (vector[i] == letra)
         suma++;
   }
   printf ("\n %c está %d veces", letra, suma); 
   return suma;
}

int main ()
{
   char vector[30];
   int i, frecuencia, maxfrecuencia, moda, tam;
   
   printf ("Cadena: ");
   scanf ("%[^\n]", vector);
   
   tam = strlen (vector);
   if (tam == 0)
   {
      printf ("La moda es: %c\n", vector[0]);
      return 0;
   } 
    
   moda = vector[0]; 
   maxfrecuencia = FREC (vector, moda, 0, tam);
   
   for (i = 1; i < tam; i++)
   {
      if (vector[i] == ' ')
         continue; 
      frecuencia = FREC (vector, vector[i], i, tam);
      if (frecuencia > maxfrecuencia)
      {
         maxfrecuencia = frecuencia;
         moda = vector[i];               
      }    
   }
   printf ("\nLa moda es: %c\n", moda);
   system ("pause"); 
   return 0;   
}
