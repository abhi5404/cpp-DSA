//PRINT THE SUM OF THIS SERIES:
//1-2+3-4+5-6....UPTO N

#include<stdio.h>
int main (){
    int i, n ,sum=0; 
    printf("enter the number :");
    scanf ("%d",&n);
    for(int i=1;i<=n;i++){
    if (i%2==0) sum= (sum-i);
      else sum=sum+i;
           }
    
printf("sum of the series:%d",sum);
}

// MAKE THIS WITHOUT LOOP 

#include<stdio.h>
int main (){
    int i, n ,sum=0; 
    printf("enter the number :");
    scanf ("%d",&n);
        if (i%2==0){
            sum=-n/2;
        }
        else {
            sum=-n/2+n;
            }
            printf ("SUM : %d\n",sum);
}