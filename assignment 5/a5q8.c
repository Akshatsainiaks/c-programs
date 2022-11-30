#include<stdio.h>
int main()
{
	int A;
	int B;
	int C;
	int S;
	
	printf("enter  first side of triangle = ", & A );
	scanf("%d",& A);
	printf("enter second of triangle = ", & B);
	scanf("%d",& B);
	printf("enter third side of triangle = ", & C);
	scanf("%d",& C);
	S=A+B+C;
	printf("sum of three sides of triangle is = %d", S);
	return 0;
	
}
