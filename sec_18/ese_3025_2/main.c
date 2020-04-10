#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

static int myCompare(const void* a, const void* b) 
{ 
  
    
    return strcmp(*(const char**)a, *(const char**)b); 
} 
  

void sort(const char* arr[], int n) 
{ 
    
    qsort(arr, n, sizeof(const char*), myCompare); 
} 

int main(int argc, char *argv[])
{
	if(argc!= 3) 
    {
        printf("usage: ese_3025 <infile> <outfile> \n");
        return 0;
    }
    
    char* pinfile = argv[1];
    char* poutfile = argv[2];
    
    FILE* fpr = fopen(pinfile, "r");
    if(0 == fpr)
    {
        printf("Failed to open the file %s \n", pinfile);
        return 0;
    }
    
    FILE* fpw = fopen(poutfile, "w");
    if(0 == fpw)
    {
        printf("Failed to create the file %s \n", poutfile);
        fclose(fpr);
        return 0;
    }
    
    char buff[1000];
    while(!feof(fpr))
    {
        if(0 == fgets(buff, sizeof(buff)/sizeof(buff[0]), fpr))
            break;
       
        printf("%s", buff);
        fputs(buff, fpw);
    }
    int n = sizeof(buff) / sizeof(buff[0]);
    sort(buff, n); 
    
    printf("%s", buff);
    fclose(fpr);
    fclose(fpw);
    
    return 0;
}

