#include <stdio.h>
#include <math.h>

int main (void)
{
	float a, b, c, discri, X1, X2 ;
	
	printf("Calcul des racines d'une équation du second degré \n");
	
	printf("Entre le coefficiant a \n");
	scanf("%f",&a);
	
	printf("Entre le coefficiant b \n");
	scanf("%f",&b);
	
	printf("Entre le coefficiant c\n");
	scanf("%f",&c);
	
	discri= pow(b,2)-(4*a*c);
	
	if (discri>=0)
	{
        X1=(-b-sqrt(discri))/(2*a);
        X2=(-b+sqrt(discri))/(2*a);
        if(X1=X2) 
        {
        	printf("Racine double X=%f\n",X1);
        }
        
        else 
        {
        	printf("X1=%f et X2=%f\n",&X1,&X2);
        }
    }
     else 
     {
     	printf("Pas de solution\n");
     
     }
     
       
     return 0;
}
