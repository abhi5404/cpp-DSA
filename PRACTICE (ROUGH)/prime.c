#include<stdio.h>
int main (){
    int n ,a =0;
    printf ("enter no . ");
    scanf ("%d",&n);
    for (int i=2;i<=n-1;i++){
        if (n%i==0){
           a=1;
            break;
        }
    }
    if (a==0) printf("the no is prime ");
    else {printf("the no is not prime\n");}
    }
    
    
    