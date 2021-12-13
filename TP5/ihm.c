#include <stdio.h>
#include "ihm.h"
#include "traitement.h"

void SaisieNom ( char Nom[][21])
{
	int i;
	printf("Entrez les noms \n");
	for(i=0;i<3;i++)
	{
	
		scanf("%s",Nom[i]);
		
	}
}
void SaisieNote ( char Nom[][21],float Note[])
{
	int i;
	printf("Entrez les notes \n");
	for(i=0;i<3;i++)
	{
		
		printf("de %s :",Nom[i]);
		scanf("%f",&Note[i]);
	}
}
void Afficher ( char Nom[][21],float Note[],float Moy)
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("\n %s : %.2f\n",Nom[i],Note[i]);
	}
		printf("\n moyenne total des eleves %f :\n",Moy);
		Moy = moyenne(Note);           //Appelle fonction
}

