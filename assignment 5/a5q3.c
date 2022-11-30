#include<stdio.h>
int main()
{
	int a;
	int b;
	int p;
	
	printf("write lenght of rectangle = ", & a);
    scanf("%d", & a);	
    printf("write breadth of rectangle = ", & b);
    scanf("%d",&b);
    p=2*(a+b);
    printf("perimeter of rectangle % d", p);
return 0;
}
