#include <stdio.h>
#include "OpeBase.h"



char menu()
{

	char choix;	
	printf("Entrez le choix voulu entre a pour addition,s pour soustraction,m pour multiplication,d pour division,f fermera le programme\n");
	scanf(" %c",&choix);
		
	return choix;
}

void traitechoix(char choix)
{
	float x,y;
	float resultat;
	
	printf("Entrez les valeurs de x\n");
	scanf("%f",&x);
	
	printf("Entrez les valeurs de y\n");
	scanf("%f",&y);
	
	switch(choix)
	{
			case 'a' : resultat=addition(x,y);
			printf("La somme est de %.2f\n",resultat);
			break;
			case 's' : resultat=soustraction(x,y);
			printf("La somme est de %.2f\n",resultat);
			break;
			case 'm' : resultat=multiplication(x,y);
			printf("La somme est de %.2f\n",resultat);
			break;
			case 'd' : resultat=division(x,y);
			printf("Le quotient est de %.2f\n",resultat);
			break;
			case 'f' : printf("Sortie du programme .\n");
			default: printf("Valeur incorrecte\n");
	}
			

}
