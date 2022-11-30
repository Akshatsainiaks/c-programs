#include<stdio.h>
int main()
{
	int sub1 ,sub2, sub3, sub4, sub5;
	
	printf("enter marks of first subject = ", & sub1);
	scanf("%d", & sub1);
	printf("enter marks of second subject = ", & sub2);
	scanf("%d", & sub2);
	printf("enter marks of third subject = ", & sub3);
	scanf("%d", & sub3);
	printf("enter marks of forth subject = ", & sub4);
	scanf("%d", & sub4);
	printf("entr marks of fifth subject = ", & sub5);
	scanf("%d", & sub5);
	printf("aggregate marks = %d ", sub1+sub2+sub3+sub4+sub5);
	return 0;
}
