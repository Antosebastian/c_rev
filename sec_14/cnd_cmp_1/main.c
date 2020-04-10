#include <stdio.h>

int main(int argc, char **argv)
{
	int total = 0;
//    printf("Enter(0 to 100)\n0 -> even number\n1 -> odd number\n");
//    scanf("%d", even_or_odd);
    for(int i = 1; i <= 100; ++i)
    {
        #if 0
            printf("%d\n", (i+1) );
//            ++i;
        #elif 1
            printf("%d\n", i);
            ++i;
        #endif
//        total += i;
    }
    return 0;
}
