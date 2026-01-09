#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main (){
    int arr[]={64,25,12,22,11};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){  
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int>v(n,0); // 0 means not visited 
    int x=0;

    for (int i=0;i<n;i++){
        int min = INT_MAX;
        int mindx=-1;
        for(int j=0;j<n;j++){
            if(arr[j]<min && v[j]==0){
                min=arr[j];
                mindx=j;
            }
        }
        arr[mindx]=x;
        v[mindx]=1; // mark as visited
        x++;
    }
    for(int i=0;i<n;i++){  
       cout<<arr[i]<<" ";
    }
    cout<<endl;
}

