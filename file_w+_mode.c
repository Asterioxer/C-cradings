#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char str[50];
    fp=fopen("abc.txt","w+"); //this w plus mode can write in a special way
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    while(!feof(fp))
    {
        fgets(str,45,fp);
        printf("%s",str);
    }
    fputs("jenny suck me",fp);
    //fputc('z',fp);
    fclose(fp);
}