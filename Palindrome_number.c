#include<stdio.h>
void main()
{
    int i,num,reverse=0,r;
    printf("Enter a number:\n");
    scanf("%d",&num);
    i=num;
    for(;num!=0;num=num/10)
    {
        r=num%10;
        reverse=reverse*10+r;
    }
    if(i==reverse)
    printf("The number is Palindrome");
    else
    printf("The number is not Palindrome");
}