// using linear search to find lower bound

// #include <iostream>
// using namespace std;
// int main (){
//     int arr[]={1,2,4,5,9,15,18,21,24};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int key=16;
//     for (int i=0;i<n;i++){
//         if(arr[i]>=key){
//             cout<<"Upper bound of "<<key<<" is "<<arr[i+1]<<endl;
//             return 0;
//     }
// }
// } time complexity: O(n)

// using binary search to find lower bound

#include <iostream>
using namespace std;
int arr[]={1,2,4,5,9,15,18,21,24};
int n= sizeof(arr)/sizeof(arr[0]);
int key=18;
int main (){
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if (arr[mid]==key){
            flag=true;
            cout<<"Upper bound of "<<key<<" is "<<arr[mid+1]<<endl;
            break;
        }
        else if(arr[mid]<key){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    if(flag==false){
        cout<<"Upper bound of "<<key<<" is "<<arr[lo]<<endl;
    }
} // time complexity: O(log n)
