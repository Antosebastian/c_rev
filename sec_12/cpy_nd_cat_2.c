// a second way to disable warnimgs when using the strcpy

#include<stdio.h>
#include<string.h>
#include<windows.h>
void main()
{

        char str[200];// always better to initialize

        //destination should always be one(null) + greater that the(string leng$

        strcpy_s(str, 200, "The longest street in world is.....");
        printf("%s\n", str);

        strcat(str,"young street");// to check strcat operation
        printf("%s\n", str);

        strcpy_s(str, ARRAYSIZE(str), "The longest street in the world is Young street");//by making use of the windows.h 
        printf("%s\n", str);
}
