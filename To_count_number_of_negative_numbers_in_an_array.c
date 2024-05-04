#include<stdio.h>
#define MAX_SIZE 100
void main()
{
    int a[MAX_SIZE];
    int i,n,count=0;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    printf("Enter array elements: \n");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        if(a[i]<0)
        {
        count++;
        }
        else
        {
        count=0;
        }
    }
     printf("Counting negative numbers: \n");
     printf("count=%d",count);
}