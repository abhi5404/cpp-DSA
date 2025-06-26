#include<stdio.h>
int main (){
    int a[50],size, i,num,pos;
    printf("enter size of array :");
    scanf ("%d",&size);
    printf ("enter elements of array :\n");
    for (i=1;i<=size;i++){
        scanf ("%d",&a[i]);
    }
     printf ("Elements in arrays are : ");
         for (i=1;i<=size;i++){
         printf ("%d ",a[i]);
         }
         printf ("\nEnter the number u want to insert in array :");
         scanf("%d",&num);
         printf ("Enter position :");
         scanf ("%d",&pos);
         for (i=size;i>=pos;i--){
            a[i+1]=a[i];
         }
         a[pos]=num;
         size ++;
         printf ("After insertion new arrays's elements are ");
         for (i=1;i<=size;i++){
            printf ("%d ",a[i]);
         }
    
 return 0;
}