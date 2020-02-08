//pointer arithmetic



#include<stdio.h>

void printarray(int *p, int count)
{
	for(int i=0; i<count; ++i)
	{	printf("%d ", *p);
		p++;
	}
}

void printchar(char *ps, int count)
{
	for(int i = 0; i<count; i++)
	{	printf("%c \n", *ps);
		ps++;
	}
}
void main()
{
	int a[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	printarray(a, 3);
	char s[]={"Hello world!"};
	printchar(s, 5);

}
