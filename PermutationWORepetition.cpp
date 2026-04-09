#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact *= i; // multiply numbers
    }

    return fact;
}

int main()
{
    int n, r;

    // Taking input
    cout << "Enter total number of objects (n): ";
    cin >> n;

    cout << "Enter number of objects to arrange (r): ";
    cin >> r;

    // Calculating permutation
    int result = factorial(n) / factorial(n - r);

    // Display result
    cout << "Permutation without repetition P(" << n << "," << r << ") = " << result;

    return 0;
}
