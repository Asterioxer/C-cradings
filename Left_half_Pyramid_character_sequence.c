#include<stdio.h>
void main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<2*(5-i)-1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<=i;k++)
        {
            printf("%c ",'A'+k);
        }
        printf("\n");
    }
}