#include<iostream>
// #include<climits>
using namespace std;




int main() {
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    sort(arr,arr+8);
    print (arr,8);
    return 0;
}