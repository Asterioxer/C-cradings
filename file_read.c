#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    fp=fopen("abc.txt","r");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    while(!feof(fp)) //using this loop is found beneficial as reads all the lines
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
}