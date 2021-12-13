#include <stdio.h>
#include <math.h>

int main (void)

{
	float somme=0; //Contient la Somme
	int nombre; //Nombre de notes
	int compteur;
        float note;
        float moyenne; 
	
	printf ( "ecrire le nombre de notes voulu\n");
        scanf ("%d",&nombre);

for (compteur=1;compteur<=nombre;compteur++)
{
printf("Ecrire la note\n");
scanf ("%f",&note);
somme=somme+note;
}

moyenne=somme/nombre;
printf ("Voici la moyenne %f\n", moyenne);

return 0;
}
