#include <iostream>
using namespace std;
int arr[]={1,2,2,3,3,3,3,4,4,5,5,6,7,8,9};
int n= sizeof(arr)/sizeof(arr[0]);
int key=4;
int main (){
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if (arr[mid]==key){
            if(arr[mid-1]!=key){
            flag=true;
            cout<<"First occurrence of "<<key<<" is at index "<<mid<<endl;
              
            break;
            }
            else{ // arr[mid-1]==key
                hi=mid-1;
            }
          
        }
        else if(arr[mid]<key){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
   
} 