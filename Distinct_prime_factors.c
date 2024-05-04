#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) {
        return 0; // Not prime
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

// Function to find and print distinct prime factors
void primeFactors(int n) {
    printf("Prime factors of %d are: ", n);

    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && isPrime(i)) {
            printf("%d ", i);

            // Remove all occurrences of i in n
            while (n % i == 0) {
                n /= i;
            }
        }
    }

    printf("\n");
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    primeFactors(num);

    return 0;
}

