#include <stdio.h>
#include <string.h>


int main()
{
	int a = 10;
    int b = 20;
    char mystr[128];
    sprintf(mystr, "This is an example with 2 integers %d + %d = %d\n", a, b, a+b);
    printf(mystr);
    return 0;
}
