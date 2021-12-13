#include <stdio.h>
#include <string.h>

int main(void)
{
	char eleve[3][21];
	float note[3];
	float moyenne;
	float somme = 0;
	int diviseur = 0;
	int i;
	
	printf("Entrez les noms \n");
	for(i=0;i<3;i++)
	{
		
		scanf("%s",eleve[i]);
		diviseur = diviseur + 1 ;
	}
	
	printf("Entrez les notes \n");
	for(i=0;i<3;i++)
	{
		printf("de %s :",eleve[i]);
		scanf("%f",&note[i]);
		somme = somme + note[i] ;
	}
	for(i=0;i<3;i++)
	{
		printf("\n %s : %.2f\n",eleve[i],note[i]);
	}
		for(i=0;i<1;i++)
		{
		moyenne = (somme / diviseur);
		printf("\n moyenne total des eleves %f :\n",moyenne);
		}

	return 0;
}
