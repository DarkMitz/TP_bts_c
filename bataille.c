/* Une bataille navale minimum */

#include <stdio.h>
#include <stdlib.h>

int hasard ()
{

	double n ;
	
	n = (double) rand () ;
	n = n * 10 ;
	n = n / (1 << 15) ;
	return (int) n ;
}

int main ()
{
	char mer [10][10] ;
	char car ;
	int nbateaux ;
	int i, j ;
	int ncoups ;
/* Placer des bateaux dans la mer */
	for (i = 0 ; i < 10 ; i++)
		for (j = 0 ; j < 10 ; j++)
			mer [i][j] = ' ' ;
nbateaux = 10 ;
while (nbateaux > 0)
{
	i = hasard () % 10 ;
	j = hasard () % 10 ;
	if (mer [i][j] == ' ')
	{
		mer [i][j] = 'B' ;
		nbateaux -= 1 ;
	}
}
nbateaux = 10 ;

/* Boucle principale */

ncoups = 0 ;
while (nbateaux > 0)

{

/* Afficher la mer */

printf (" 0 1 2 3 4 5 6 7 8 9\n") ;
for (i = 0 ; i < 10 ; i++)
{
		printf ("%d ", i) ;
		for (j = 0 ; j < 10 ; j++)
			{
		if (mer [i][j] == 'B')
			car = ' ' ;
			else car = mer [i][j] ;
			printf ("%c ", car) ;
	}
	printf ("%d\n", i) ;
}
printf (" 0 1 2 3 4 5 6 7 8 9\n") ;
/* Attendre le coup de l'utilisateur */

printf ("Entrez les coordonnees (lignes colonne) : ") ;
if (scanf ("%d %d", &i, &j) != 2)
	exit (0) ;
/* Tester la reponse */

ncoups += 1 ;
switch (mer [i][j])
{
	case ' ' :
		printf ("Dans l'eau\n") ;
		mer [i][j] = '*' ;
		break ;
	case 'B' :
		printf ("Coule !\n") ;
		mer [i][j] = 'X' ;
		nbateaux -= 1 ;
		break ;
	case '*' :
	case 'X' :
	printf ("Case deja jouee\n") ;
	break ;
	}
}
/* Afficher le resultat et sortir */

printf ("Vous avez gagne en %d coups. Bravo\n", ncoups) ;
exit (0) ;
}
