#include<stdio.h>
int main()
{
	int M,H,E,P,C;
	int totalmarks;
    int  per;
	int averagemarks;
	
	printf("enter marks of maths =  ", & M);
	scanf("%d",& M);
	printf("enter marks of hindi = ",& H);
	scanf("%d",& H);
	printf("enter marks of english = ", & E);
	scanf("%d",& E);
	printf("enter marks of physics = ", & P);
	scanf("%d",& P);
	printf("enter marks of chemistry = ",& C);
	scanf("%d", & C);
	totalmarks= M+H+E+P+C;
	per= (M+H+E+P+C)/5*1;
	averagemarks= totalmarks/5;
	printf("Total marks of student = %d \n ", totalmarks);
	printf("percentage of student = %d \n", per);
	printf("averge marks of students = %d \n", averagemarks);
}
