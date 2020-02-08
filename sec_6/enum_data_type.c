// An example to enum 

#include<stdio.h>

enum days
{
	Sunday,
	Monday,
	Tuesday, 
	Wednesday,
	Thursday,
	Friday,
};

void main()
{
	enum days myday;
	myday = Sunday;
	printf("Sunday: %d\n", myday);
}
