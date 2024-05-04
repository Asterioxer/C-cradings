#include<stdio.h>
#define MAX_SIZE 100
void main()
{
    int a[MAX_SIZE];
    int i,ev_count=0,od_count=0,n;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    printf("Enter the elements of the array: \n");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        if(a[i]%2==0)
        {
            ev_count++;
        }
        else if(a[i]%2!=0)
        {
            od_count++;
        }
        else
        {
            ev_count=0;
            od_count=0;
        }
    }
     printf("Counting even numbers: \n");
     printf("count=%d\n",ev_count);
     printf("Counting odd numbers: \n");
     printf("count=%d\n",od_count);
}