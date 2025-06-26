//TAKKE A POSITIVE INTEGER AND FIND IT IS DIVISIBLE BY 5 AND 3 OR NOT


#include <stdio.h>
int main (){
    int a ;
    printf ("ENTER A NUMBER :");
    scanf ("%d",&a);
    if (a%5==0 || a%3==0){
        printf ("THE NUMBER IS DIVISIBLE BY 5 OR 3 \n");
    }
    else {
        printf ("NOT DIVISIBLE BY 5 OR 3 \n");
    }
    return 0 ;


}