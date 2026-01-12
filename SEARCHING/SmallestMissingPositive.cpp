// // by using linear search
// #include <iostream>
// using namespace std;
// int main (){
//     int arr[]={0,1,2,3,5,6,7,8};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     for (int i=0;i<n;i++){
//         if(arr[i]!=i){
//             cout<<"Smallest missing positive integer is "<<i<<endl;
//             return 0;
//         }
//     }
//     cout<<"Smallest missing positive integer is "<<n<<endl;
// }// time complexity: O(n)

// by using binary search

#include <iostream>
using namespace std;
int arr[]={0,1,2,3,5,6,7,8};
int n= sizeof(arr)/sizeof(arr[0]);
int main (){
    int lo=0;
    int hi=n-1;
    int ans = n;  // If all elements match their index, answer is n
    while(lo<=hi){
        int mid= lo+(hi-lo)/2;
        if(arr[mid]==mid){
            lo=mid+1;
        }
        else{
            ans=mid;
            hi=mid-1;
        }
    }
    cout<<"Smallest missing positive integer is "<<ans<<endl;
}