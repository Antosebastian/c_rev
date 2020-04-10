//learning #define

#include <stdio.h>

#define VERSION "1.0"
#define SUM(a, b) a+b
#define MAX(a, b) a > b? a : b
//#define MULT(a, b) a*b
#define MULT(a, b) ((a)*(b)) 

inline int max(int a, int b)
{
    if (a > b) return a; 
    else return b;
}

int main(int argc, char **argv)
{
    printf("The pragram version is %s\n", VERSION);
    int c = SUM(10, 20);
    printf("Sum = %d\n", c);
    printf("max out of %d and %d is %d\n", 19, 33, MAX(19, 33));
    printf("product of %d ans %d is %d\n", 10+2, 10, MULT(10+2,10));
//    printf("max out of %d and %d is %d\n", 19, 33, max(19, 33));
    return 0;
}