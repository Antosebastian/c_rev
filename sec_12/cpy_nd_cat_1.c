#define _CRT_SECURE_NO_WARNINGS// one way to avoid warnings that may arise due to strcpy() as it is considered unsafe


#include<stdio.h>
#include<string.h>

void main()
{

	char str[200];// always better to initialize
	
	//destination should always be one(null) + greater that the(string length)

	strcpy(str, "The longest street in world is.....");
	printf("%s\n", str);

	strcat(str,"young street");// to check strcat operation
	printf("%s\n", str);

	strcpy(str, "The longest street in the world is young street");//to better understand the strcpy
	printf("%s\n", str);
}
