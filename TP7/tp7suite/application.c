float inverse (float x)
{
	float inv;
	
	inv = 1/x;
	
	return inv ;
}
//////////////////////////////////

void quotreste(int a, int b, int *pquo,int *preste)
{
	*pquo = a / b;
	
	*preste = a % b;
}
///////////////////////////////////

void minmax(float *pmax ,float *pmin , float x , float y ,float z , float u ) 
{	
	*pmax =(x>y) ? x:y;
	*pmax =(*pmax>z) ? *pmax:z;
	*pmax =(*pmax>u) ? *pmax:u;
	
	*pmin =(x<y) ? x:y;
	*pmin =(*pmin<z) ? *pmin:z;
	*pmin =(*pmin<u) ? *pmin:u;
}
//////////////////////////////////
