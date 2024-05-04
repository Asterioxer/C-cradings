#include<stdio.h>
void main()
{
    int a[1000];
    int b[1000];
    int i,n;
    printf("Enter size of the array: \n");
    scanf("%d",&n);
    printf("Enter array elements a: \n");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Copying elements of array a into array b: \n");
    for(i=0;i<=n;i++)
    {
        b[i]=a[i];
    }
    printf("Elements of a stored in b: \n");
    for(i=0;i<=n;i++)
    {
        printf("%d\n",b[i]);
    }
}