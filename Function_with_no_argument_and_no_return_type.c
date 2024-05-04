#include<stdio.h>
int a=9,b=2;
void msg (void);
void main()
{
msg();
int d;
d=a*b;
printf("%d\n",d);
}
void msg (void)
{
a=8;b=3;
int c;
c=a+b;
printf("%d\n",c);
}