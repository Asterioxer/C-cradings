#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,*ptr;
    printf("Enter total number of value:");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));

    printf("\n Enter the values: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
 printf("Enter the updated size of n:");
 scanf("%d",&n);

 int*ptr1= (int*)realloc(ptr,n*sizeof(int));

 printf("\n Previous address: %d, New Address: %d",ptr,ptr1);

 printf("\n The Entered values are:");
 for(i=0;i<n;i++)
 {
    printf("%d\t",*(ptr+i));
 }


 free(ptr1);

}
