#include <stdio.h>
int main (){
    int n,m ; 
    printf ("enter rows number : ");
    scanf ("%d",&n);
    printf ("enter columns number : ");
    scanf ("%d",&m);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if (i==1||i==n||j==m||j==1) printf ("*");
            else printf (" ");
   }
        printf ("\n");
 }
}          