#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char str[50];
    fp=fopen("abc.txt","a");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    printf("Enter the content you want to append: ");
    gets(str);

    fprintf(fp,"\n %s",str); //simply for shifting the content the user wants to add to the next line

    printf("Successfully Appended");
    fclose(fp);
}