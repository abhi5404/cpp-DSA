// PRINT Nth FIBONACCI SERIES

#include<stdio.h>
int main ( ){
    int a=1,b=1,n,sum=1;
    printf ("enter a number : ");
    scanf ("%d",&n);
    for (int i=1;i<=n-2;i++){ //N-2 BECAUSE ALLREADY TWO TERMS (A,B)ARE GIVEN SO WHEN WE PUT N HERE OUTPUT BECOMES 2TH TERM MORE
        sum=a+b;
        a=b;
        b=sum;
    }
    printf ("fibonacci number is :%d ",sum);
}