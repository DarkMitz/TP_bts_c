float moyenne (float note[])
{
	float somme =0;
	float Moyenne;
	int i;
	
	for(i=0;i<3;i++)
	{
		somme += note[i];
	}
	
	Moyenne = somme / 3;
	return Moyenne ;
}
