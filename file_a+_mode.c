#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    fp=fopen("f.txt","a+"); //this a plus mode can read as well as well as append
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }

    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fputs("this is awesome",fp);

    fclose(fp);
}