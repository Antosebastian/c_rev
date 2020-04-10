// ways of using pointer arithmetic
#include<stdio.h>

void main()
{
	int a[] = {1, 2, 3, 4, 5};
	int* p = a;
	printf("%d\n", a[3]);
	printf("%d\n", *(a + 3));
	printf("%d\n", p[3]);
	printf("%d\n", *(p + 3));
}
