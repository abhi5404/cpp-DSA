// DISPLAY THIS AP 4,7,10,13,17...UPTO NTH TERM .
#include <stdio.h>
int main (){
    int n ;
    printf ("enter a integer  :");
    scanf ("%d",&n);
    for (int i = 4; i<=3*n+1;i=i+3){
    
          printf ("%d  ",i);
        }
        return 0;
    }