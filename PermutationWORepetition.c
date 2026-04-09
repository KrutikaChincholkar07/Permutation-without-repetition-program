#include <stdio.h>

// Function to calculate factorial
int factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact *= i; // multiplying numbers
    }

    return fact;
}

int main()
{
    int n, r, result;

    // Taking input from user
    printf("Enter total number of objects (n): ");
    scanf("%d", &n);

    printf("Enter number of objects to arrange (r): ");
    scanf("%d", &r);

    // Permutation formula
    result = factorial(n) / factorial(n - r);

    // Display result
    printf("Permutation without repetition P(%d,%d) = %d\n", n, r, result);

    return 0;
}
