// Linear search 

#include <iostream>
using namespace std;
int arr[]={34, 7, 23, 32, 5, 62};
int n= sizeof(arr)/sizeof(arr[0]);
int key=23;
int main (){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Key found at index "<<i<<endl;
            return 0;
        }
    }
    cout<<"Key not found"<<endl;
    return 0;
}

//time complexity: O(n)