#include<stdio.h>
int main (){
    int n, sum = 0; 
    int reversed_digit = 0;
    printf ("enter a number :");
    scanf ("%d",&n);
    int original_number = n; // Store the original number for later use
    while (n != 0){
        int last_digit = n % 10;
        reversed_digit = reversed_digit * 10 + last_digit;
        n = n / 10;
    }
    sum = original_number + reversed_digit;
    printf ("sum of given number and its reverse : %d", sum);
    return 0;
}
