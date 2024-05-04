#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE* fp=NULL;
    char ch;
    char str[50];
    fp = fopen("abc.txt", "r");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fseek(fp,31,SEEK_SET);
    ch=fgetc(fp);
    printf("%c",ch);

    fseek(fp,-21,SEEK_CUR);
    ch=fgetc(fp);
    printf("\n%c",ch);

    fseek(fp,-16,SEEK_END);
    ch=fgetc(fp);
    printf("\n%c",ch);
    
    fclose(fp);
}
    