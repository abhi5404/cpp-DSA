//CHECK THE NUMBER PRIME OR COMPOSITE ***
#include <stdio.h>
int main (){
    int n ; 
    int a =0;
    printf ("enter a number :");
    scanf ("%d",&n);
    for (int i = 2; i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
       
        }
    }
     if(n==1)printf ("1 is neither prime nor composite");
   else if (a==0) printf ("the given number is prime number\n");
     else printf ("the given number is composite\n ");
    return 0;
}