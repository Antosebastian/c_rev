// string compare using 'strcmp' and case insensitive 'stricmp'


#include <stdio.h>
#include <string.h>

int main()
{
	char* p1 = "ABC";
    char* p2 = "Abc";
    char* p3 = "ABC";
//  char str[] = "message";
    
    int result = strcmp(p1, p2);
    printf("compairing %c and %c = %d\n", p1, p2, strcmp(p1, p2));
    
    result = strcmp(p1, p3);
    printf("compairing %c and %c = %d\n", p1, p3, result);
    
//    if(0 == stricmp(str, "message"))
//        printf("have a wonderful day\n");
    
	return 0;
}
