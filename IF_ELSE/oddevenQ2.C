// TAKE A POSITIVE INTEGER INPUT AND TELL IT IS DIVISIBLE BY 5 OR NOT 
#include <stdio.h>
int main (){
    int a ;
    scanf("%d",&a);
    if (a<0){
        a=a*(-1);
    
    }
     printf("the absolute value is : %d\n",a);
    if (a%5==0){ // a%5 = A MODULO 5 MATLAB AFTER DIVIDED BY 5 REMAINDER SHOULD BE 0 
        printf("DIVISIBLE BY 5");
    }
    else{
    printf("NOT DIVISIBLE BY 5");
    }
}