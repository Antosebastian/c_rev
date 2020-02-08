#include<stdio.h>

int vowels(int c)
{
	switch(c)
	{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			return 1;
		break;
	}
	return 0;

}

void printvowels(char *ps)
{
	while(*ps)
	{
		if(vowels(*ps))
			printf("%c \n", *ps);
		ps++;
	}
}

void remove_vowels(char *ps)
{
	char *pDest = ps;
	while(*ps)
	{
		if(!vowels(*ps))
			*pDest++=*ps;
		ps++;
	}
	*pDest='\0';
}



void main()
{
	char str[]="Hello World";      //string
//	char s[]={"Hello World"};
	printvowels("Hello");
	remove_vowels(str);
	printf("After removing vowels = %s \n", str);
}
