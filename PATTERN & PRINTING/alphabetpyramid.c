#include <stdio.h>
int main (){
    int n ; 
    printf ("enter a number : ");
    scanf ("%d",&n);
    for (int i =1; i<=n;i++){ 
    for (int j=1;j<=n-i;j++){
            printf (" ") ;}
            for(int k=1;k<=2*i-1;k++){
                char ch=(char)(k+64);
                printf("%c",ch);
                
            }
            printf("\n");
    }
}