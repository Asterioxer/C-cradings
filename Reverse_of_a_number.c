#include<stdio.h>
void main()
{
    int reverse=0,r,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(;n!=0;n=n/10)
    {
        r=n%10;
        reverse=reverse*10+r;
    }
    printf("The reversed number is %d",reverse);
}