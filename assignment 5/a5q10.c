#include<stdio.h>
int main()
{
	float M,E,H,P,C;
	float percentage;
	printf("enter marks of maths = ",& M);
	scanf("%f",& M);
	printf("enter marks of english = ", & E);
	scanf("%f",& E);
	printf("enter marks of hindi = ", & H);
	scanf("%f", & H);
	printf("enter marks of physics = ", & P);
	scanf("%f",& P);
	printf("enter marks of chemistry = ", & C);
	scanf("%f", & C);
	percentage=(M+E+H+P+C)/500*100;
	printf("percentage obtained by student = %f", percentage);
	return 0;
}
