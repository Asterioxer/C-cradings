#include<stdio.h>
int msg (void);
void main()
{
int s=msg();
printf("Summation=%d\n",s);
}
int msg (void)
{
int a,b,sum;
a=3;b=5;
sum=a+b;
return(sum);
}