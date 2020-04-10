#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

static void sort_a(void *array, unsigned n);
static int cmpr(const void *pa, const void *pb);

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
    
    FILE* fpw = fopen(poutfile, "w+");
    if(0 == fpw)
    {
        printf("Failed to create the file %s \n", poutfile);
        fclose(fpr);
        return 0;
    }
//        char filename[] = "a";
        char *line_array[1000];
        char line[1024];
        int i = 0;
        int j = 0;
//        FILE *file = fopen(filename, "r");
        while (fpr != NULL)
        {
            while (fgets(line, sizeof line, fpr) != NULL)
            {
                // Trim the newline character
                line[strcspn(line, "\n")] = '\0';
                // Stop processing if line_array is full
                if (i < sizeof line_array / sizeof *line_array)
                {
                    line_array[i++] = strdup(line);
                }
                else
                {
                    break;
                }
            }
//            fclose(file);
            sort_a(line_array, i);
            for (j = 0; j < i; j++)
            {
                printf("%s\n", line_array[j]);
            }
            // Clean up your memory
            for (j = 0; j < i; j++)
            {
                free(line_array[j]);
            }
        }
    return 0;
    fclose(fpr);
    fclose(fpw);
}

    int cmpr(const void *a, const void *b)
    {
        return (strcmp(*(char **)a, *(char **)b));
    }
    void sort_a(void *array, unsigned n)
    {
        qsort(array, n, sizeof(const char *), cmpr);
    }
