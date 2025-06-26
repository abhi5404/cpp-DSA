#include<stdio.h>
int main(){
    float a,b ;
    printf ("COST PRICE OF THE ITEM : %f",a);
    scanf ("%f",&a);
    printf("SELLING PRICE OF THE ITEM : %f",b);
    scanf ("%f",&b);
    if (b>a){
        printf("MAKE PROFIT \n");
    }
        else{
            printf("MAKE LOSS\n");
        }
        float c= (b-a);
        if (c>0){
            printf ("OVERALL PROFIT IS : %f",c);
        }
else {
    printf ("OVERALL LOSS IS : %f",c*-1);
}
return 0 ;
    
}