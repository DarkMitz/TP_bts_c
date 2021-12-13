#include <stdio.h>
int main()
{
int l[26]; //Tableau de 6 entiers destiné a contenir les fréquences des 6 voyelles//
char lettre;
int i; //compteur de boucle//

	for(i=0;i<27;i++)
	{
	 l[i] = 0;                  //Mise à 0 de tout le tableau//	 
	}

printf("Le programme compte les lettres dans ce que vous avez saisi.\n");
printf("Entrez un texte.Finir par la touche * puis Entrée:\n");

do
{
	lettre=getchar(); //Saisie du caractère en tête de la file après l'appui sur Entrée//

		i=lettre-97;
		l[i]=l[i]+1;
		
}
while(lettre !='*');

printf("\nFréquences des lettres:\n\n");
printf("a\tb\tc\td\te\tf\tg\th\ti\tj\tk\tl\tm\tn\to\tp\tq\tr\ts\tt\tu\tv\tw\tx\ty\tx\t\n");
printf("%d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\n",l[0],l[1],l[2],l[3],l[4],l[5],l[6],l[7],l[8],l[9],l[10],l[11],l[12],l[13],l[14],l[15],l[16],l[17],l[18],l[19],l[20],l[21],l[22],l[23],l[24],l[25],l[26]);
return 0;
}
