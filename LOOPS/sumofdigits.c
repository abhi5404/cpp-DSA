// WAP TO PRINT SUM OF DIGITS OF A GIVEN NUMBER .
#include<stdio.h>
int main (){
    int n ; 
    printf ("enter a number :");
    scanf ("%d",&n);
    int sum =0 ;
    while (n!=0){
    int last_digit=n%10;
    sum = sum+last_digit;
    n=n/10;}
    printf ("sum of the digits :%d",sum);
    return 0;
}
//  KEY POINT: KONO NUMBER K 10 DIYE DIVISION KORLE
// ALWAYS TAR REMAINDER LAST DIGIT HOI.