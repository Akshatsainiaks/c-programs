#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	
	printf("write lenght of rectangle = ", & a);
	scanf("%d",& a);
	printf("write breadth of rectangle = ", & b);
	scanf("%d",& b);
	c=a*b;
	printf("area of rectangle is = %d",  c);
	return 0;
}
