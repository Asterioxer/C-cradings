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

    fputs(str,fp); //keeps on adding several content entered to the abc file

    printf("Successfully Appended");
    fclose(fp);
}
