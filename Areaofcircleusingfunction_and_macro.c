#include<stdio.h>
#define PI 3.14
float CircleArea(float radius)
{
    float area;
    area= PI*radius*radius;
    return area;
}
int main()
{
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    printf("The area of the circle is : %f",CircleArea(radius));
    return 0;
}