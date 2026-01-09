
#include<iostream>
using namespace std;
int main(){
    int arr[]={45,23,11,89,77};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){ 
        int curr=arr[i];
        int prev=i-1;
        //inner loop
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }

    
    cout<<"Sorted array: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
