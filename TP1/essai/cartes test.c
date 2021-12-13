#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

int main(void)
{
        int Gagne,Montant;// Nombre entier généré par systeme et Montant gagné inferieur a 500 
        
        srand(time(0)) 
        
        pintf("Jouer aux cartes\n");
        Gagne = rand() % 2 
        
        if (Gagne ==0)
        {
        printf("vous avez perdu\n Ne dites pas à votre femme \n");
        }
        else 
        {
        printf("vous avez gagné\n vous devez faire un cadeaux a votre femme\n");
        Montant= rand () % 500 
        
        if (Monant > 100)
        {
        printf("Ce sera un collier");
        }
        else 
        {
        pintf("Ce sera un bouquet de fleurs\n");
        }
        }
        return=0
     }
