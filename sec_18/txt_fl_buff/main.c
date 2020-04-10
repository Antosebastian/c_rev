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
    
    char buff[1000];
    
    while(!feof(fp))
    {
        size_t count = fread(buff, 1, 1000, fp);
        if (count < 1)
            break;
        buff[count] = '\0';
        printf("%s", buff);
    }
    
    printf("\n");
    
    fclose(fp);
    fp = 0;
    
	return 0;
}
