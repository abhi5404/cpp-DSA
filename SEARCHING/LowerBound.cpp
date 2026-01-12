// using linear search to find lower bound

#include <iostream>
using namespace std;
int main (){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int n= sizeof(arr)/sizeof(arr[0]);
    int key=16;
    for (int i=0;i<n;i++){
        if(arr[i]>=key){
            cout<<"Lower bound of "<<key<<" is "<<arr[i-1]<<endl;
            return 0;
    }
}
} // time complexity: O(n)

// using binary search to find lower bound


