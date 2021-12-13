#include <stdio.h>
int main(void)
{
         float Rayon;
         float Circonf; 
         float Aire ;
         const float PI=3.14159;
        
// Saisie du rayon       
         printf("Ce pogramme calcle la circonférence et la surface d'un cercle: \n ");
         printf("Entre la valeur du rayon \n ");
         scanf("&d", &Rayon);
         
// calcule 

Circonf=2*PI*Rayon;
Aire=PI*Rayon*Rayon;
// résulats
printf("Circonférence: %0.2f\n",Circonf );
printf("surface:%0.2f\n",Aire);

return 0 ;
}
