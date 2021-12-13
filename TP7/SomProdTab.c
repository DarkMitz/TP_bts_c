//////////////////////////////////////////////////////////////////////
#include <stdio.h>
void SomProdTab(int Tab[],int *psomme,int *pproduit);

int main()
{
	int Tab[10] ={1,2,3,4,5,6,7,8,9,10};
	int somme;
	int produit;
	SomProdTab(Tab,&somme,&produit);
	printf("La somme est : %d\n et donc le produit : %d\n",somme,produit);
	return 0;
}
///////////////////////////////////////////////////////////////////////

void SomProdTab(int Tab[],int *psomme,int *pproduit)
{
	int i;
	*psomme = 0;
	*pproduit = 1;
	for(i=0;i<10;i++)
	{
		*psomme = *psomme + Tab[i];
	}

	for(i=0;i<10;i++)
	{
		*pproduit = *pproduit * Tab[i];
	}

}

//////////////////////////////////////////////////////////////////////////
