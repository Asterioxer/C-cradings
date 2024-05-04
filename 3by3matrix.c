#include<stdio.h>
void main()
{
    int a[3][3],i,j;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("Enter element at [%d][%d] position ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
       for(j=0;j<=2;j++)
       {
        printf(" %d ",a[i][j]);
       } 
       printf("\n");
    }
}