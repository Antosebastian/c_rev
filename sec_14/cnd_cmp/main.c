//conditional compilation 
#include <stdio.h>

# define LINUX

int main(int argc, char **argv)
{
	#if defined(WINDOWS)
        printf("Hello there on Windows\n");
    #elif defined(MAC)
        printf("Hello there on Mac\n");
    #elif defined(LINUX)
        printf("Hello there on LINUX\n");
    #else
        printf("You are on a new platform\n");
    #endif
	return 0;
}
