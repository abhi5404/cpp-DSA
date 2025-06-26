#include <stdio.h>

int main() {
    int n, factorial = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    // Calculating factorial
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial: %d\n", factorial);

    return 0;
}
