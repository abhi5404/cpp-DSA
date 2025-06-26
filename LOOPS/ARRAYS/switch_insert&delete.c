#include<stdio.h>
int main (){
    int choice, continue_program = 1;

    while (continue_program) {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    int choice , display_program;
   scanf("%d",&choice);
    switch (choice){
        case 1 : int a[50],size, i,num,pos;
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
    break;
    case 2: 
    int b[50],size2, j,posi;
    printf("enter size of array :");
    scanf ("%d",&size2);
    printf ("enter elements of array :");
    for (j=1;j<=size2;j++){
        scanf ("%d",&b[j]);
    }
   printf ("\nEnter position :");
   scanf ("%d",&posi);
   for (j=posi;i<=size2;j++){
            b[j]=b[j+1];
         }
   size --;
   printf ("After deletion new arrays's elements are ");
         for (j=1;j<=size2;j++){
            printf ("%d ",b[j]);
         }
         break;
         default : printf("error"); 
 }
 
 return 0;
    } 
    
}