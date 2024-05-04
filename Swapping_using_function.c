#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("Enter first number: \n");
    scanf("%d",&a);
    printf("Enter second number: \n");
    scanf("%d",&b);
    swap(&a,&b);
    printf("After swapping a=%d , b=%d",a,b);
    return 9;
}

void swap(int *x, int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
