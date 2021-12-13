#include <stdio.h>
#include "application.h"

char menu()
{

	char choix;	
	printf("Entrez le choix voulu entre :\n i pour inverse\n d pour quotient et le reste de deux nombre entiers\n m pour minimum et maximum\n f fermera le programme\n");
	scanf(" %c",&choix);
		
	return choix;
}

void traitechoix(char choix)
{
	float x,y,z,u, min, max;
	float resultat;
	int a,b,quotient,reste;
	
	switch(choix)
	{
			case 'i' : 
			printf("\n Entre la valeur de x:  ");
			scanf("%f",&x);
			
			resultat=inverse(x);
			printf("La somme est de %.2f\n\n",resultat);
			break;
			
			
				
					case 'd' : 
					printf("\n Entre la valeur de a:  ");
					scanf("%d",&a);
					printf("\n Entre la valeur de b:  ");
					scanf("%d",&b);
					
					quotreste(a,b,&quotient,&reste);
					printf("\n Le quotient est %d puis le reste est %d\n\n",quotient,reste);
					break;
			
			
								
								case 'm' : 
										
								printf("\n Entre la valeur de x:  ");
								scanf("%f",&x);
						
								printf("\n Entre la valeur de y:  ");
								scanf("%f",&y);
						
								printf("\n Entre la valeur de z:  ");
								scanf("%f",&z);
						
								printf("\n Entre la valeur de u:  ");
								scanf("%f",&u);
								
								minmax(&max,&min,x,y,z,u);
								printf("\n Le minimum est de : %f et le maximum est de : %f\n\n",min,max);
								break;
					
			
			
			case 'f' : printf("Arrêt du programme en cours . . . .\nArrêt du programme\n\n");
			break;
			default: printf("Touche incorrecte /!\ \n\n");
	}
			

}
