// size and length of a string

#include<stdio.h>
#include<string.h>

int strlength(const char* p)
{
	int  count = 0;
	while(*p)
	{
		p++;
		count++;
	}
	return count;
}

int main()
{
	char a[] = "a = Young street Greater Toronto area is the longest street in the world\n";
	printf("a : %s\n", a);
	printf("length of a is : %d\n", strlen(a));
	printf("Size of a : %d\n", sizeof(a)/sizeof(a[0]));
	printf("psize of a : %d\n", strlength(a));
}
