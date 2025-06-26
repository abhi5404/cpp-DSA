#include<stdio.h>
int main (){
    int a[50],size, i;
    printf("enter size of array :");
    scanf ("%d",&size);
    printf ("enter elements of array :");
    for (i=0;i<size;i++){
        scanf ("%d",&a[i]);
    }
     printf ("Elements in arrays are : ");
         for (i=0;i<size;i++){
         printf ("%d ",a[i]);
    }
  return 0;
}