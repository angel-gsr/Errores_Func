#include <stdio.h>

int perimetroFigura(float numero)
{
	float perimetro;
	perimetro=4*numero;
	return perimetro;
}

int areaFigura(float numero)
{
	float area;
	area=numero*numero;
	return area;
}

int main()
{
	int num;
	printf("Lado de un Cuadrado: ");
	scanf("%d",&num);
	
	printf("Perimetro: %d\n",perimetroFigura(num));
	printf("Area: %d\n",areaFigura(num));
	
	return 0;
}
