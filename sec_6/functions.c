// Functions in C
// a prrogram to add two numbers using functions
#include<stdio.h>

int sum(int a, int b)
{
	int result = a+b;
	return result;
}

float avg(int c, int d)
{
	return sum(c, d)/2.0;
}

void main()
{
	int n1 = 10;
	int n2 = 11;
	int result = sum(n1, n2);
//	float ave = avg(n1, n2);
	printf("%d + %d = %d\n", n1,n2,result);
	printf("Average of %d and %d is %f\n", n1, n2, avg(n1, n2));
}

