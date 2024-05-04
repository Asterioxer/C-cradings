#include <stdio.h>

// Function to check if a number is already present in the array
int isUnique(int arr[], int n, int num) 
{
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == num) 
        {
            return 0; // Not unique
        }
    }
    return 1; // Unique
}

int main() 
{
    int n;

    // Get the number of elements from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Number of elements should be greater than 0.\n");
        return 1;
    }

    int arr[n];

    // Get the elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Print unique elements
    printf("Unique elements are: ");
    for (int i = 0; i < n; i++) 
    {
        if (isUnique(arr, i, arr[i])) 
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    return 0;
}
