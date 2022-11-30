#include<stdio.h>
int main()
{
	int A,B,C;
printf("enter sides of traingle = ",& A,B,C);
scanf("%d\n %d\n %d",&A,&B,&C);
if(A<B+C || B<C+A || C<A+B)
{
	printf("given sides of triangle are valid ");

}
else
{
	printf("given sides of triangle are not valid");
	
}

return 0;
}
