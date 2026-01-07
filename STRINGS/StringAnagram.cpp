// given two strings s and t , return true if t is an anagram of s , and false otherwise
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
int main (){
    string s, t;
    cout << "Enter first string: ";
    getline (cin, s);
    cout << "Enter second string: ";
    getline (cin, t);
    
    sort (s.begin(), s.end());
    sort (t.begin(), t.end());
    
    if (s == t){
        cout << "true";
    }
    else{
        cout << "false";
    }
}