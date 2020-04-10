//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//static void sorting(void *array, unsigned n);
//static int cmpar(const void *a, const void *b);
//
//
//int main(int argc, char *argv[])
//{
//	if(argc!= 3) 
//    {
//        printf("usage: ese_3025_4 <infile> <outfile> \n");
//        return 0;
//    }
//    
//    char* pinfile = argv[1];
//    char* poutfile = argv[2];
//    char *content[1000];
//    char l[1024];
//    int i = 0;
//    int j = 0;
//    
//    FILE *fpr = fopen(pinfile, "r");
//    if(0 == fpr)
//    {
//        printf("Failed to open the file %s \n", pinfile);
//        return 0;
//    }
//    
//    if (fpr != NULL)
//    {
//        while (fgets(l, sizeof l, fpr) != NULL)
//        {
////            l[strcspn(l, "\n")] = '\0';
//            if (i < sizeof content / sizeof *content)
//            {
//                content[i++] = strdup(l);
//            }
//            else
//            {
//                break;
//            }
//        }
//        
//        sorting(content, i);
//        
//        
//        for (j = 0; j < i; j++)
//        {
//        printf("%s", content[j]);
//        
//        }
//        
//        FILE *fpw = fopen(poutfile, "w");
//        if(0 == fpw)
//        {
//            printf("Failed to create the file %s \n", poutfile);
//            fclose(fpr);
//            return 0;
//        }
//        
//        for (j = 0; j < i; j++)
//        {
//            fprintf(fpw, "%s\n", content[j]);
////            fwrite(content[j], 4, 1, fpw);
//            
//        }
//        fclose(fpw);
//    }
//    
//    fclose(fpr);
////    fclose(fpw);
//    return 0;
//}
//int cmpar(const void *a, const void *b)
//{
//    return (strcmp(*(char **)a, *(char **)b));
//}
//void sorting(void *array, unsigned n)
//{
//    qsort(array, n, sizeof(const char *), cmpar);
//}

    #include <stdio.h>
    #include <stdlib.h>
     
    int main(int argc, char * argv[])
    {
    	// This program reads a file from its arguments and prints a word by word. Additionally, it counts the words in the file.
    	if (argc < 2) return 1;
    	char * filename = argv[1];
    	FILE * fp = fopen(filename, "r");
    	if (fp == NULL) return 1;
    	char c;
    	int count = 0;
    	char c;
    	while((c = fgetc(fpr)) != EOF)
    	{
    		if(c == ' ' || c == '\n')
    		{
    			printf("\n");
    			++count;
    		}
    		else
    		{
    			printf("%c", c);
    		}
    	}
    	fclose(fp);
     
    	printf("This file has %d words in it.", count);
    	return 0;
    }