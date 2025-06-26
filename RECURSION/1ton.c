#include<stdio.h>
void increasing (int x,int n ){
    if (x>n) return ; // base case 
    printf ("%d\n",x); // code
    increasing (x+1,n); // call
    return;
}
int main (){
    int n ;
    printf ("enter a number ");
    scanf ("%d",&n);
    increasing (1,n);
    return 0;
}