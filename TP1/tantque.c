#include <stdio.h>
#include <math.h>

int main (void)

{
	float somme=0; //Contient la Somme
	int nombre=0; //Nombre de notes
	
        float note;
        float moyenne; 
	char rep;
do
{
	
	printf("Ecrire la note\n");
	scanf ("%f",&note);
	somme=somme+note;
	nombre=nombre+1;
	printf ( "Voulez vous continuez ? ecrire o/n ");
	scanf (" %c",&rep);
}
while(rep=='o');


moyenne=somme/nombre;
printf ("Voici la moyenne %f\n", moyenne);

return 0;
}
