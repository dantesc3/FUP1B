#include <stdio.h>
int binario=0;
int n1;
int cociente = 1;
main() {
 printf("Ingrese el numero : ");
 scanf("%d",&n1);

 while(n1 > 0){
  binario = binario + (n1%2)*cociente;
  n1 /=2;
  cociente *= 10;
 }
 printf("Numero en Binario : %d\n",binario);
}
