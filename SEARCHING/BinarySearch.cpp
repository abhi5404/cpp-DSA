// Binary Search : only works on sorted arrays

#include <iostream>
using namespace std;
int arr[]={5, 7, 23, 32, 34, 62}; // sorted array
int n= sizeof(arr)/sizeof(arr[0]);
int lo=0;
int hi=n-1;
int key=23;
int main (){
    while(lo<=hi){
        int mid= lo+(hi-lo)/2; // to avoid overflow
        if(arr[mid]==key){
            cout<<"Key found at index "<<mid<<endl;
            return 0;
        }
        else if(arr[mid]<key){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    cout<<"Key not found"<<endl;
    return 0;
}