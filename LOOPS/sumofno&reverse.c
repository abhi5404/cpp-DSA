#include<stdio.h>
int main (){
    int n,sum=0 ; 
    int reversed_digit=0;
    printf ("enter a number :");
    scanf ("%d",&n);
    while (n!=0){
 int  last_digit = n%10;
 reversed_digit = reversed_digit*10+last_digit;
n=n/10;
    }
    sum=n+reversed_digit;
    printf ("sum of given number :%d",sum);
    

}