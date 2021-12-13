#include <stdio.h>
#include "traitement.h"
#include "ihm.h"
#define NBELEVES 12

int main(void)
{
	char Nom[3][21];
	float Note[3];
	float Moy;
	float somme = 0;
	
	SaisieNom(Nom);
	SaisieNote(Nom,Note);
	Moy = somme / 3;
	Afficher(Nom,Note,Moy);
	
	return 0;
}
