//WAP INPUT A DIGIT AND FIND 
//SUM OF ALL EVEN NUMBERS

#include<stdio.h>
int main (){
    int n ; 
    printf ("enter a number :");
    scanf ("%d",&n);
    int sum =0 ;
    while (n!=0){
         int last_digit=n%10;
        if( last_digit%2==0)
   sum = sum+last_digit;
    n=n/10;}
    printf ("sum of the digits :%d",sum);
    return 0;
}
