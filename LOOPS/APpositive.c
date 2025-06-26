//DISPLAY THIS AP 100,97,94 UPTO ALL TERMS ARE  POSITIVE 
#include <stdio.h>

int main() {
    int a;
    for (a = 100; a > 0; a -= 3) {
        printf("%d ", a);
    }
    return 0;
}
