//WAP TO COUNT DIGITS OF A GOVEN NUMBER 
#include<stdio.h>
int main (){
    int n ; 
    printf ("enter a number :");
    scanf ("%d",&n);
    int count =0 ;
    while (n!=0){
        n=n/10;
        count++;

    }
    printf ("the digits of the numbers are : %d",count);
}