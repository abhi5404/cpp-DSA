//Take input percentage of a student and print the Grade according to marks:
//1) 91-100 Excellent
//2) 81-90 Very Good
//3) 71-80 Good
// 4) 61-70 Can do better
//5) 51-60 Average
//6) 41-50 Below Average
//7)<40 Fail

#include <stdio.h>
int main (){
    int a;
    printf ("PERCENTAGE OF MARKS :");
    scanf ("%d",&a);
    if (a>90){
        printf ("excellent");
    }
    if (a>80 && a<=90){
        printf ("very good");
    }
    if (a>70 && a<=80){
        printf ("good");
    }
    if (a>60 && a<=70){
        printf ("can do better ");
    }
    if (a>50 && a<=60){
        printf ("average");
    }
    if (a>40 && a<=50){
        printf ("below average");
    }
    if (a<=40){
        printf ("fail");
    }
    
return 0;
}