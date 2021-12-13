#include <stdio.h>
#include <math.h>

int main (void)

{
	float somme=0; //Contient la Somme
        float prix;
	char rep;

do
{
	
	printf("Ecrire le prix de l'article\n");
	scanf ("%f",&prix);
	
	somme=somme+prix;

	printf ( "Voulez vous continuez ? ecrire o/n ");
	scanf (" %c",&rep);
}
while(rep=='o');


printf ("Voici le total %f\n",somme);

return 0;
}
