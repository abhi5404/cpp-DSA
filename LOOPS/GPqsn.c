#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    int a = 1; // Starting term of the sequence

    printf("Sequence: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d ", a);
        a = 2*a; // Increment each term by 3
    }

    return 0;
}
