#include<stdio.h>
void increasing (int n){
    if (n==0) return ;  // base case 
       increasing (n-1); // call
    printf ("%d\n",n); // code 
  return;
}

int main (){
    int n ;
    printf ("enter a number ");
    scanf ("%d",&n);
    increasing (n);
     return 0;
}

// WHEN WE WRITE N TO 1 CODE THE SEQUENCE WAS - BASE CASE , CODE , CALL
// WE CHANGE POSITION OF CODE AND CALL AND WE GET REVERSE OF IT .