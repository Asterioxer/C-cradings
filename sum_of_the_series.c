#include <stdio.h>

int series_sum(int n) 
{
    int result = 0;
    int triangular_sum = 0;

    for (int i = 1; i <= n; i++) 
    {
        triangular_sum += i;
        result += triangular_sum;
    }

    return result;
}

int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum_result = series_sum(n);
    printf("The sum of the series is: %d\n", sum_result);

    return 0;
}
