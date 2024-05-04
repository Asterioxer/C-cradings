#include<stdio.h>
void main()
{
    int a,n,sum=0;
    printf("Enter upto the number of natural numbers:");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        sum+=a;
    }
        printf("The sum of %d natural numbers is %d",n,sum);
    
}