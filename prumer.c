#include<stdio.h>

int main(){
	int znamka=0;
	int vaha=0;
	int znamky=0;
	int vahy=0;
	float vazenyPrumer;
	int rozhodnuti;
	do{
	do{
	printf("Zadej znamku: ");
	scanf("%d", &znamka);
	if(znamka<1 || znamka>5) printf("%d neni platna znamka\n", znamka);
	}while(znamka<1 || znamka>5);
	do{
		printf("Zadej vahu: ");
		scanf("%d", &vaha);
		if(vaha<1 || vaha>10) printf("%d neni platna vaha\n", vaha);
	}while(vaha<1 || vaha>10);
	znamky += (znamka * vaha);
	vahy += vaha;
	printf("Pokud chces zadavat dalsi znamky, zadej 1: ");
	scanf("%d", &rozhodnuti);
	}while(rozhodnuti == 1);
	vazenyPrumer = (float)znamky / vahy;
	printf("Vazeny prumer: %.2f", vazenyPrumer);
	return 0;
}
