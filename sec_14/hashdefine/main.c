//learning #define

#include <stdio.h>

#define VERSION "1.0"
#define C 5

int main(int argc, char **argv)
{
    for(int i = 0; i < C; i++)
    {
        printf("The pragram version is %s\n", VERSION);
	}
    return 0;
}
