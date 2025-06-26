#include<stdio.h>
void swap (int*x, int*y){
    int n;
    n=*x;
    *x=*y;
    *y=n;
}
int main (){
    int a = 2, b=9;
    swap (&a,&b);
    printf("The value of a :%d",a);
    printf ("The value of b :%d",b);
    return 0;
}