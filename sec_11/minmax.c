#include<stdio.h>

void minmax(int a[],int count,int* pmin,int* pmax)
{
	int min, max;
	min = max = a[0];
	for(int i=0; i<count; ++i)
	{
		if(a[i]<min)
			min = a[i];
		else if(a[i]>max)
			max = a[i];
	}
	*pmin = min;
	*pmax = max;
}

void main()
{
	int array[] = {100,2,55,-5,8,-25,56,88,12};
	int min = 0;
	int max = 0;
	int count = sizeof(array)/sizeof(array[0]);
	minmax(array, count, &min, &max);
	printf("min = %d \nmax = %d\n", min, max);
}
