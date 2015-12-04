#include <stdio.h>
int af, ac, bf, bc, i, j, k;
 
int main()
{

  printf("Numero de filas de A: ");
  scanf("%d", &af);
  printf("Numero de columnas A: ");
  scanf("%d", &ac);
  printf("Numero de filas de B: ");
  scanf("%d", &bf);
  printf("Numero de columnas B: ");
  scanf("%d", &bc);
  if(ac!=bf){
             printf("no es posible hacer la multiplicación\n");
             system("pause");
             return 0;
  }
  int A[af][ac], B[bf][bc], C[af][bc];
  for(i=0;i<af;i++){
      for(j=0;j<ac;j++){
          printf("el valor de matriz 1: ");
          scanf("%d", &A[i][j]);
      }
  }
  printf("\n\n");
  for(i=0;i<bf;i++){
      for(j=0;j<bc;j++){
          printf("el valor de la matriz 2: ");
          scanf("%d", &B[i][j]);
      }
  }
 
  for(i=0;i<af;i++){
      for(j=0;j<bc;j++){
          C[i][j]=0;
          for(k=0;k<ac;k++){
              C[i][j]=(C[i][j]+(A[i][k]*B[k][j]));
          }
      }
  }
 
  printf("\n\n Matriz A");
  printf("\n");
  for(i=0;i<af;i++){
      printf("\n");
      for(j=0;j<ac;j++){
          printf("  %d  ", A[i][j]);
      }
  }
  printf("\n\n Matriz B");
  printf("\n");
  for(i=0;i<bf;i++){
      printf("\n");
      for(j=0;j<bc;j++){
          printf("  %d  ", B[i][j]);
      }
  }
 
  printf("\n\n Matriz C");
  printf("\n");
  for(i=0;i<af;i++){
      printf("\n");
      for(j=0;j<bc;j++){
          printf("  %d  ", C[i][j]);
      }
  }
  printf("\n");
}
