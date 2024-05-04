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

    printf("%d",ftell(fp));

    //ch=fgetc(fp);
    fscanf(fp,"%s",str);
    printf("\n%s",str);

    fseek(fp,0,SEEK_END);
    printf("\n%d",ftell(fp));

    fclose(fp);

}