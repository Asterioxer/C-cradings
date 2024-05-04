#include<stdio.h>
int msg (int,int);
void main()
{
int a,b,sum;
a=3;b=7;
int s=msg(a,b);
printf("Summation=%d\n",s);
printf("%d",sum);
}
int msg (int k, int m)
{
int sum;
sum=k+m;
return(sum);
}