#include<stdio.h>
int main()
{
	int a,b,c;
printf("enter first number = ",a);
scanf("%d",&a);
printf("enter second number = ",b);
scanf("%d",&b);
printf("enter third number = ");
scanf("%d",&c);	
if(a>b && a>c)
{
printf("number is greater than among three numbers = %d", a);
}
else if(b>c && b>a)
{
printf("number is greater than among three numbers = %d", b);
}
else
{
	printf("number is greater than among three numbers = %d", c);
}
return 0;

}
