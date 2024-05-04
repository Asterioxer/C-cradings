#include<stdio.h>
void main()
{
    int h1,h2,m1,m2,s1,s2;
    printf("Enter the first time period in seconds: \n");
    scanf("%d",&s1);
    m1=s1/60;
    h1=m1/60;
    printf("Enter the second time period in seconds: \n");
    scanf("%d",&s2);
    m2=s2/60;
    h2=m2/60;
    int hour=h1+h2;
    int minute=m1+m2;
    int second=s1+s2;
    printf("The format for two time periods is %d:%d:%d",hour,minute,second);
}