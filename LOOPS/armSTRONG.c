#include <stdio.h>
int main (){
    int a =0 , n , r,c;
    printf ("enter a number : ");
    scanf ("%d",&n);
    c=n;
    while (n>0){
        r=n%10;
        a = (r*r*r)+a;
         n=n/10;
     
    }
    if (c==a){printf ("the no is armstrong");}
    else { printf ("the no is not armstrong");}
}
