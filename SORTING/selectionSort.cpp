#include<iostream>
using namespace std;
int main (){
    int arr[]={64,25,12,22,11};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){  //outer loop (n-1 passes)
        int min_index=i;
         //inner loop (for traversing unsorted array)

        for(int j=i+1;j<n;j++){  
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        //swap
        swap(arr[i],arr[min_index]);
    }

    cout<<"Sorted array: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


//time complexity: O(n^2)