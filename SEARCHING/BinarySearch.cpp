// Binary Search : only works on sorted arrays

#include <iostream>
using namespace std;
int lo=0;
int hi=n-1;
while(lo<=hi){
    int mid=lo+(hi-lo)/2; // to avoid overflow
    if(arr[mid]==key){
        return mid; // key found at index mid
    }
    else if(arr[mid]<key){
        lo=mid+1; // search in right half
    }
    else{
        hi=mid-1; // search in left half
    }
}