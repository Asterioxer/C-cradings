#include<stdio.h>
void main()
{
   int i=0,j=0;
   int a[2][2],b[2][2],c[2][2];
   printf("Enter the first matrix:\n");
   for(i=0;i<2;i++)
   {
    for(j=0;j<2;j++)
    {
        scanf("%d",&a[i][j]);
    }
   }
   printf("Enter the second matrix:\n");
   for(i=0;i<2;i++)
   {
    for(j=0;j<2;j++)
    {
        scanf("%d",&b[i][j]);
    }
   }
   printf("The sum of matrix a[][] and b[][] is :\n");
   for(i=0;i<2;i++)
   {
    for(j=0;j<2;j++)
    {
        printf(" %d ",a[i][j]+b[i][j]);
    }
    printf("\n");
   }

}