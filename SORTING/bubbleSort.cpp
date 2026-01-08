#include<iostream>
using namespace std;

int main (){
    int arr[]={64,34,25,12,22,11,90};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<n-1;i++){          //outer loop
        for(int j=0;j<n-i-1;j++){    //inner loop
            if(arr[j]>arr[j+1]){
                //swap
                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
                swap(arr[j],arr[j+1]);
            }
        }
    }

    cout<<"Sorted array: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


//time complexity: O(n^2)

// short algorithm for remembering this sort is given below :
// begin : for i=0 to n-1(outer loop)
// begin : for j=0 to n-i-1(inner loop)
// if arr[j]>arr[j+1] then swap(arr[j],arr[j+1])
// end inner loop
// end outer loop