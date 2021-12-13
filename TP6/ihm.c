#include <stdio.h>

char menu()
{

	char choix;	
	printf("Entrez le choix voulu entre  calculer : v pour voyelles,l pour lettres,f pour fermer le programme\n");
	scanf(" %c",&choix);
		
	return choix;
}

void traitechoix(char choix)
{	
	switch(choix)
	{
			case 'v' : voyellesprintf
			("Entre la phrase voulu\n";
			break;
			case 'l' : lettres;
			printf("Entre la phrase voulu\n";
			break;
			case 'f' : printf("Sortie du programme .\n");
			default: printf("Choix incorrecte\n");
	}
		
}
