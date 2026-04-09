import java.util.Scanner;

public class PermutationWithoutRepetition {

    // Function to calculate factorial
    public static int factorial(int n) {
        int fact = 1;

        for(int i = 1; i <= n; i++) {
            fact *= i; // multiplying numbers
        }

        return fact;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // Taking input
        System.out.print("Enter total number of objects (n): ");
        int n = sc.nextInt();

        System.out.print("Enter number of objects to arrange (r): ");
        int r = sc.nextInt();

        // Permutation calculation
        int result = factorial(n) / factorial(n - r);

        // Output
        System.out.println("Permutation without repetition P(" + n + "," + r + ") = " + result);
    }
}
