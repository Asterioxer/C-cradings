#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    char str[50];
    fp=fopen("abc.txt","r");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fgets(str,45,fp);  //does not read the next line
    printf("%s",str);
fclose(fp);
}
