//WAP TO PRINT REVERSE OF A GIVEN NUMBER
#include<stdio.h>
int main (){
    int n ; 
    int reversed_digit=0;
    printf ("enter a number :");
    scanf ("%d",&n);
    while (n!=0){
 int  last_digit = n%10;
 reversed_digit = reversed_digit*10+last_digit;
n=n/10;
    }
    printf ("reverse of the digits :%d",reversed_digit);
    return 0;
}