
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

int main(int argc, char* argv[])
{
	if(argc < 3)
    {
        printf("Usage: main_arg {sum/avg} <numbers>\n");
        return -1;
    }
    if (0 == strcmp(argv[1], "sum"))
    {
        int sum = 0;
        for (int i = 2; i<argc; ++i)
            sum += atoi(argv[i]);
        printf("sum numbers = %d \n", sum);
    }
    else if(0 == strcmp(argv[1], "avg"))
    {
        int sum = 0;
        for (int i = 2; i<argc; ++i)
            sum += atoi(argv[i]);
        printf("sum numbers = %f \n", (float)sum/ (argc-2));
    }
    else
    {
        printf("Usage: main_arg.exe {sum/avg} <numbers>\n");
        return -2;
    }
    
	return 0;
}
// in ubuntu to run from terminal access debug inthe project directory and use the command './main_arg {sum/avg} <numbers>'