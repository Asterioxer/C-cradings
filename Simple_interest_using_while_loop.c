#include<stdio.h>
void main()
{
    int t=1,p;
    float si,r;
    printf("Enter principal amount:\n");
    scanf("%d",&p);
    printf("")
    while(t<=5)
    {
        si=p*r*t/100;
        printf("The Simple interest for %d year is %f\n",t,si);
         t++;
    }
}