#include<iostream>
using namespace std;

int main (){
    int arr[]={64,34,25,12,22,11,90};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    // for(int i=0;i<n-1;i++){  //outer loop (n-1 passes)
        
    //      //inner loop (for traversing unsorted array)

    //     for(int j=0;j<n-i-1;j++){  
    //         if(arr[j]>arr[j+1]){
    //             //swap
    //             // int temp=arr[j];
    //             // arr[j]=arr[j+1];
    //             // arr[j+1]=temp;
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }


    //optimized bubble sort
    for(int i=0;i<n-1;i++){  //outer loop (n-1 passes)
        bool flag=false;
         //inner loop (for traversing unsorted array)

        for(int j=0;j<n-i-1;j++){  
            if(arr[j]>arr[j+1]){
                //swap
                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        if(flag==false){
            break; //array is already sorted
        }
    }

    cout<<"Sorted array: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}




// short algorithm for remembering this sort is given below :
// begin : for i=0 to n-1(outer loop)
// begin : for j=0 to n-i-1(inner loop)
// if arr[j]>arr[j+1] then swap(arr[j],arr[j+1])
// end inner loop
// end outer loop

// Time Complexity: O(n^2) in worst and average case, O(n) in best case (when array is already sorted)