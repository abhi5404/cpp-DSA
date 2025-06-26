#include <stdio.h>
int main(){
    float b,c;
    

    printf ("LENGTH OF THE REACTANGLE IS : %f");
    scanf ("%f",&b);
    printf ("BREADTH OF THE REACTANGLE : %f");
    scanf ("%f",&c);
     float a = b*c ;
    float p = 2*(b+c);
    printf ("AREA OF THE REACTANGLE IS : %f\n",a);
    printf ("PERIMETER OF THE REACTANGLE IS : %f\n",p);
    
if (a>p){
    printf ("AREA IS GREATER THAN PERIMETER\n");
}
else{
    printf ("PERIMETER IS GREATER THAN AREA\n");
}
if (a==p){
    printf ("AREA IS EQUAL TO THE PERIMETER OF THE REACTANGLE");
}
return 0;
}