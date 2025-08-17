#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(string str){
    int st=0;
    int end = str.length()-1;
    while(st<end){
        if(str[st]!=str[end]){
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;

    
//time complexity is O(n)