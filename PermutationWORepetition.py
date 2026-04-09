# Function to calculate factorial
def factorial(n):
    fact = 1
    for i in range(1, n + 1):
        fact *= i  # multiply numbers
    return fact

# Taking input
n = int(input("Enter total number of objects (n): "))
r = int(input("Enter number of objects to arrange (r): "))

# Permutation formula
result = factorial(n) // factorial(n - r)

# Display result
print("Permutation without repetition P(", n, ",", r, ") =", result)
