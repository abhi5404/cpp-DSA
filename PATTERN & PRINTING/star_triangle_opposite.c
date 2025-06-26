#include <stdio.h>
int main (){
    int n ; 
    printf ("enter a number : ");
    scanf ("%d",&n);
    for (int i = 1 ; i<=n;i++){ //  for lines
        
        for (int j =1; j<=(n+1-i);j++){  // for stars 
              printf("*"); 
        }99
        printf ("\n");
        }
    
    return 0;
}


//  WHEN LINE 1 (I=1) NO.OF ROWS(J=N)=N
//WHEN LINE 2 (I=2) NO.OF ROWS(J=N-1)=N-1
// SO WE SEE THAT I+J=N+1 
   //             J=N+1-I