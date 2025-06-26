//DISPLAY THIS GP - 100,50,25 ...UPTO NTH TERM 
#include <stdio.h>

int main() {
    float a=100;
    int n;
    printf (" enter term no :");
    scanf ("%d",&n);
    for (int i=1;i<=n;i++) {
        printf("%f ", a);
        a=a/2;
    }
    return 0;
}