#include <stdio.h>
#include <stdlib.h>


int main()
{
	int num,x, valor, ext1,ext2, perdido=0;
	char r;
	float total;
	printf(" desea jugar S/N??" );
	r=tolower(getch());
	
	  
 do{
       printf("\n ingrese el primer extremo izquierdo: ");
 	   scanf("%d",&ext1);
 	   printf("\n ingrese el primer extremo derecho: ");
 	   scanf("%d",&ext2);
 	   
 	   x=(ext1+ext2)/2;
 
    	printf("\n ingrese un numero: ");
	    scanf("%d",&num);
	    
	    valor=x+num;
	    if(valor>ext1 && valor<ext2)
	    {
	    	printf("\n**GANO**");
		}
		 else
		 {
		 	printf("\n ha perdido, esta fuera de rango");
		 	perdido=perdido+1;
		 }
		 
		 	printf(" \n desea volver a jugar S/N??" );
        	r=tolower(getch());
    } while(r=='s');
    
     total=(perdido*100)/(x);
	 printf("\n el porcentaje de perdidas es: %.2f %%",total);
	 

	return 0;
}
