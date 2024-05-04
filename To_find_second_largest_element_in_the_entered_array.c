#include<stdio.h>
void main()
{
    int i,n,sec_max,fir_max;
    int a[1000];
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    printf("Enter the elements of the array: \n");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    fir_max=sec_max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>fir_max)
        {
            sec_max=fir_max;
            fir_max=a[i];
        }
        else if((a[i]>sec_max) && (a[i]!=fir_max))
        {
            sec_max=a[i];
        }
    }
    printf("Second Maximum element in the array: %d",sec_max);
}