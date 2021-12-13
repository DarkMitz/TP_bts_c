#include <stdio.h>
#include "application.h"
#include "application.c"

int main(void)

{
	int x;
	int y;
	int somme;

	printf("Entrez la valeur de x\n");
	scanf("%d",&x);
	
	printf("Entrez la valeur de y\n");
	scanf("%d",&y);
	
 	somme = reste (x,y);          //Appelle fonction
 
	printf("Le reste est de %d\n",somme);
	
return 0;
}
