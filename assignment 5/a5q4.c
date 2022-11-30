#include<stdio.h>
int main()
{
	int l;
	int b;
	int a;
	printf("write side of square = ", & l);
	scanf("%d", & l);
	printf("write side of square = ",& b);
	scanf("%d", & b);
	a=l*b;
	printf("area of square is = % d", a);
	return 0;
}
