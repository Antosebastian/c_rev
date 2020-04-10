#include <stdio.h>

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
//        size_t count = fread(buff, 1, 1000, fp);
//        if (count < 1)
//            break;
//        buff[count] = '\0';
//        printf("%s", buff);
        if(0 == fgets(buff, sizeof(buff)/sizeof(buff[0]), fpr))
            break;
        fputs(buff, fpw);
    }
       
	return 0;
}