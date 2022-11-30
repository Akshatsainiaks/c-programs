#include<stdio.h>
int main()
{
	int a,b;
	int Sum;
	int sub;
	int multiply;
	float divide;
	
	printf("enter first number  = ",& a);
	scanf("%d",& a);
	printf("enter second number = ",& b);
	scanf("%d",& b);
	Sum=a+b;
	sub=a-b;
	multiply=a*b;
	divide=a/b;
	printf("sum is = %d \n", Sum);
	printf("difference is = %d \n", sub);
	printf("multiply is = %d \n", multiply);
	printf("division is = %f \n ", divide);
	return 0;
}
