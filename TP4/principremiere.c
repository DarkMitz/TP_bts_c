#include <stdio.h>
#include "OpeBase.h"

int main(void)

{
	float x;
	float y;
	float somme;


	printf("Entrez les valeurs de x\n");
	scanf("%f",&x);
	
	printf("Entrez les valeurs de y\n");
	scanf("%f",&y);
	
 	somme = division(x,y);          //Appelle fonction
 
	printf("La somme est de %f\n",somme);
	
return 0;
}
