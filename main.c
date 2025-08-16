#include <stdio.h>

// declare functions from other files
int biggest(int a, int b);
int factorial(int n);

int main() {
    int a = 10, b = 20, n = 5;

    printf("Biggest of %d and %d = %d\n", a, b, biggest(a, b));
    printf("Factorial of %d = %d\n", n, factorial(n));

    return 0;
}

