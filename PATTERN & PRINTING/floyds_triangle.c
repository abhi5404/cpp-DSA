#include <stdio.h>
int main (){
    int n ; 
    printf ("enter a number : ");
    scanf ("%d",&n);
    int a=1;
    for (int i = 1 ; i<=n;i++){ // i--> rows
        
        for (int j =1; j<=i;j++){ //j--> columns
              printf("%d ",a);
              a++;
            
        }
        printf ("\n");
        }
    
    return 0;
}