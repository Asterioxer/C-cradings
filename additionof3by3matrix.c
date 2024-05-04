#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],d[3][3];
    int i=0,j=0;
     printf("Enter the first matrix:\n");
   for(i=0;i<=2;i++)
   {
    for(j=0;j<=2;j++)
    {
        scanf("%d",&a[i][j]);
    }
    printf("\n");
   }
   printf("Enter the second matrix:\n");
   for(i=0;i<=2;i++)
   {
    for(j=0;j<=2;j++)
    {
        scanf("%d",&b[i][j]);
    }
    printf("\n");
   }
   printf("Enter the third matrix:\n");
   for(i=0;i<=2;i++)
   {
    for(j=0;j<=2;j++)
    {
        scanf("%d",&c[i][j]);
    }
    printf("\n");
   }
   printf("The sum of matrix a[][] and b[][] and c[i][j] is :\n");
   for(i=0;i<=2;i++)
   {
    for(j=0;j<=2;j++)
    {
        printf(" %d ",a[i][j]+b[i][j]+c[i][j]);
    }
    printf("\n");
   }
}
   