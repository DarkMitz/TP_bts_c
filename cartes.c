#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

int main(void)
{
        int Gagne; // Nombre entier en binaires généré aléatoirement 
        int Montant; // Représente le montant gagné  (inférieur à 500)
srand (time(0)); 
printf("jouer au cartes\n");
 if (Gagne==0);
 {
 printf("Vous avez perdu\n");
 printf("Ne dites rien à votre femme\n");
 }
  else
 {
 printf("Vous avez gagné\n");
 printf("Vous devez faire un cadeaux à votre femme \n");
 Montant = rand ()%500;
 }
 if (montant >100)
 {
 printf("Ce sera un collier\n")	;
 }
 else 
 {
 printf(" Ce sera un bouquet de fleurs \n"); 
 }
 return 0; 
 }
