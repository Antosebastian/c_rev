#include<stdio.h>

void swap(int* pa, int* pb)
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
 

void main()
{
	int a=5;
	int b=10;
	printf("a = %d \n b = %d \n", a, b);
	swap(&a, &b);
	printf("a = %d \n b = %d \n", a, b);
}
