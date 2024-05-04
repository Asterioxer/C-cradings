#include<stdio.h>
void main()
{
    int a,n;
    printf("The number of integers:\n");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
      {
        printf("The number is %d and its cube is %d\n",a,a*a*a);
      }
}