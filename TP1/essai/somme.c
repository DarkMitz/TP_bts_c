#include <stdio.h>

int main (void)
{
	int Somme=0; //Contient la somme 
	int I=1 ; // sert à la progression  

	do 
	{	
		Somme = Somme + I;
		I = I + 1 ;
	}
	while ( I <= 100 );
	
	printf("La somme des 100 premiers entier est %d ,Somme \n",Somme)  ;
	
	return 0 ;
}
	
	
