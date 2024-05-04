#include<stdio.h>
void main()
{
    int num,count=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for(;num!=0;num=num/10)
    {
        count++;
    }
    printf("The number of digits in the number is %d",count);
}