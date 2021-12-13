# include<stdio.h>

int main(void)

{
	int dividende,diviseur,quotient,reste; 	//Nombre a diviser,nombre qui divise, resultat de la 							//division entiere,reste de la division entiere.

	printf("Saisir le dividende puis le diviseur\n");
	scanf("%d %d",&dividende,&diviseur);
	quotient=dividende/diviseur;
	reste=dividende%diviseur;
	printf("Le quotient est %d et le reste %d\n" ,quotient,reste);
	return 0;
}
