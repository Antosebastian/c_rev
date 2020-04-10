#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void sort_content(void *array, unsigned n)
{
    qsort(array, n, sizeof(const char *), (int(*) (const void*, const void*)) strcmp);
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
    
//    char buff[1000];
    
//    while(!feof(fpr))
/*    {

        if(0 == fgets(buff, sizeof(buff)/sizeof(buff[0]), fpr))
            break;
        printf("%s", buff);
        qsort(buff, sizeof(buff), sizeof(int), (int(*) (const void*, const void*)) strcmp);
        printf("%s", buff);
        */
//    }

    int i = 0;
    int j = 0;
    char str[1024];
    char* buff[1000];
    if (fpr != NULL)
    {
        while (fgets(str, sizeof str, fpr) != NULL)
        {
            // Trim the newline character
            str[strcspn(str, "\n")] = '\0';
            // Stop processing if line_array is full
            if (i < sizeof buff / sizeof *buff)
            {
                buff[i++] = strdup(str);
            }
            else
            {
                break;
            }
        }
//        fclose(fpr);
        sort_content(buff, i);
        for (j = 0; j < i; j++)
        {
            printf("%s\n", buff[j]);
            char * strndup(const char *str, size_t buff, buff[j++]);
        }
        fputs(str, fpw);
        // Clean up your memory
//        for (j = 0; j < i; j++)
//        {
//            free(line_array[j]);
//        }
    }


    fclose(fpr);
    fclose(fpw);

	return 0;
}

//        qsort(buff, sizeof(buff), sizeof(int), (int(*) (const void*, const void*)) strcmp);
//fputs((buff), fpw);