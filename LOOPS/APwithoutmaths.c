//DISPLAY THIS AP 4,7,10,13,17...UPTO NTH TERM .
#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    int a = 4; // Starting term of the sequence

    printf("Sequence: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d ", a);
        a += 3; // Increment each term by 3
    }

    return 0;
}
