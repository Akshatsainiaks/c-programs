#include<stdio.h>
int main()
{
	int a;
	int cm;
	int mm;
	float inches;
	
	printf(" enter distance between two cties in km =  ",& a);
	scanf("%d",& a);
	cm=a*100000;
	mm=a*1000000;
	inches=a*39370.079;
	
	
	printf(" distance between two cities in cm =  %d \n",cm);
	printf(" distance between two cities in mimmimeters = %d \n", mm);
	printf(" distance between two cities in inches = %f \n", inches);
	return 0;
}
