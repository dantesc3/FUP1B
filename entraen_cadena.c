#include<stdio.h>
char cadena[50];
char sub[50];
int i=0;
int a=0;
int main()
{
	printf("dame la palabra\n");
	scanf("%s",cadena);
	scanf("%s",sub);
	while(cadena[i]!='\0'){
		
		while(cadena[i]==sub[a]){
		i++;
		a++;
		if(sub[a]==0){
			printf("\n\nexiste\n\n");			
        }		
       }
      i++;
	 a=0;
	 if(0== cadena[i]){
	 	printf("no existe");
	 }
	  }
	 
}

