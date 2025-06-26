#include<stdio.h>
int main (){
    int n, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        int a = 0; // Initialize 'a' inside the loop
        if(i % 2 == 0)
            a = -i; // If i is even, make 'a' negative
        sum += (i + a); // Accumulate the sum
    }
    
    printf("Sum of the series: %d", sum);
    
    return 0;
}
