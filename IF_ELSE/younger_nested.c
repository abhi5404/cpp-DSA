//If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.

#include <stdio.h>
int main(){
    int a,b,c ;
    printf ("AGES OF RAM :");
    scanf ("%d",&a);
    printf ("AGES OF SHYAM :");
    scanf ("%d",&b);
    printf ("AGES OF AJAY :");
    scanf ("%d",&c);
    if(a<b){
        if (a<c)
        printf ("RAM IS YOUNGER %d",a);
        else 
        printf("AJAY IS YOUNGER %d",c);
    }
    else{
        if (b<c)
        printf ("SHYAM IS YOUNGER %d",b);
        else
        printf ("AJAY IS YOUNGER %d",c);
    }
    return 0;
}