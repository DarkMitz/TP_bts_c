#include <stdio.h>
#include <math.h>

int main (void)

{
	int Somme=0; //Contient la Somme
	int I=1;   //Sert à la progression.

	do
    {
     	Somme = Somme + I;
        I = I + 1;
    }   
    while (I <= 100);
         
    printf(" La somme des 100 premiers entiers est:%d\n",Somme);
       
return 0;
}
