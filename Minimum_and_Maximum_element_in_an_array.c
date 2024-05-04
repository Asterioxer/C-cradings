#include<stdio.h>
void main()
{
    int i,n,min,max;
    int a[1000];
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    printf("Enter the elements of the array: \n");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
        else if(min>a[i])
        min=a[i];
    }
    printf("Maximum element in the array: %d",max);
    printf("Minimum element in the array: %d",min);
}