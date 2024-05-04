#include<stdio.h>
#define MAX_SIZE 100
void main()
{
    int a[MAX_SIZE];
    int i,n;
    printf("Enter size of the array: \n");
    scanf("%d",&n);
    printf("Enter array elements: \n");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements in reverse order: \n");
    for(i=n;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}