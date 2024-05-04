#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,*ptr;
    printf("Enter total number of value:");
    scanf("%d",&n);

    ptr=(int*)calloc(n,sizeof(int));

    printf("\n Enter the values: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }

    printf("\n The entered values are:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }

    free(ptr);
}