//TAKE 4 POSITIVE INTEGER AND FIND THE GREATEST NUMBER AMONG THEM
#include <stdio.h>
int main (){
    int a,b,c,d ;
    printf("enter first no :");
    scanf ("%d",&a);
     printf("enter second no :");
    scanf ("%d",&b);
     printf("enter third no :");
    scanf ("%d",&c);
     printf("enter fourth no :");
    scanf ("%d",&d);
    if (a>b && a>c && a>d){
        printf("greatest no is : %d",a);
 }
if (b>a && b>c && b>d){
 printf("greatest no is : %d",b);
}
if (c>a && c>b && c>d){
     printf("greatest no is : %d",c);

}
if (d>a && d>b && d>c){
 printf("greatest no is : %d",d);
}

 return 0 ;




}