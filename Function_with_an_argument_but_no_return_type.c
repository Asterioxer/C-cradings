#include<stdio.h>
void msg (int,int);
void main()
{
int a,b;
a=3;b=7;
msg(a,b);
}
void msg (int a, int b)
{
int s;
s=a+b;
printf("%d",s);
}