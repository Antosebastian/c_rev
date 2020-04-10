#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc != 2)
    {
        printf("Sorry...! Usage: Txt_fl <file name>\n");
        return 0;
    }
    
    FILE * fp = fopen(argv[1], "r");
    if (0 == fp)
    {
        printf("Failed to open file\n");
        return 0;
    }
    
    while(!feof(fp))
    {
        int c = fgetc(fp);
        printf("%c", c);
    }
    
    printf("\n");
    
    fclose(fp);
    fp = 0;
    
	return 0;
}
