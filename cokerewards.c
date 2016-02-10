#include<stdio.h>

int main(int c, char *argv[]) 
{
    FILE *origCokeFile = fopen("mycokerewards.txt","r");
    FILE *csvCokeFile = fopen("mycokerewards.csv","w");
    int count = 0;
	
    char temp = NULL;
    fputc('|',csvCokeFile);
    while (1)
    {
        temp = fgetc(origCokeFile);
        if (feof(origCokeFile))
        {
            break;
        }
 
        if (temp != ' ' && temp != '\r' && temp != '\t' && count < 14)
        {
            fputc(temp,csvCokeFile);
	    fputc('|',csvCokeFile);
            count++;
        }
        else if (count >= 14 && temp != ' ' && temp != '\t') 
        {
            if (temp == '\n')
            {
                count = 0;
                fputc('|',csvCokeFile);
            }
            fputc(temp,csvCokeFile);
        }
	if (feof(origCokeFile))
	{
	    break;
	}
    }
    fclose(origCokeFile);
    fclose(csvCokeFile);
}
