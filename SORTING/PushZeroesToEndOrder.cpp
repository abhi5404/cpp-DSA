// push zeroes to end of array maintaining the order of non-zero elements
#include<iostream>
using namespace std;
int main (){
    int arr[]={5,0,3,0,0,2,1,0,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
            }
    }
}
    cout<<"Array after pushing zeroes to end: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}