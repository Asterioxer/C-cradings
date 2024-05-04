#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,r1,r2,dis,rp,ip;
    printf("Enter the coefficients:\n");
    scanf("%f%f%f",&a,&b,&c);
    dis=b*b-(4*a*c);
    if(dis>0)
    {
        r1=b+sqrt(dis)/(2*a);
        r2=b-sqrt(dis)/(2*a);
        printf("The first root is %.2f amd the seconf root is %.2f",r1,r2);
    }
    else if(dis==0)
    {
        r1=r2=b/(2*a);
        printf("The first root is %.2f amd the seconf root is %.2f",r1,r2);
    }
    else
    {
      rp=b/(2*a);
      ip=sqrt(-dis)/(2*a);
      printf("The first root is r1=%.2f+%.2fi and the second root is r2=%.2f-%.2fi",rp,ip,rp,ip);
    }
    }