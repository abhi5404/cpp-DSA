//TAKE TWO INTEGERS A AND B : A>B , AND FIND THE REMAINDER WHEN A DIVIDED BY B 
#include<stdio.h>
int main (){
    int a,b ; 
    printf("enter dividend : ");
    scanf("%d",&a);
    printf("enter divisor  : ");
    scanf ("%d",&b);
    int q = a/b;
    int r = a-(b*q);//DIVISOR * QUOTIENT + REMAINDER = DIVIDEND
    printf("the remainder when %d is divided by %d is :%d",a,b,r);

    return 0 ;

}