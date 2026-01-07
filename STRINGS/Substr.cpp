// INPUT A STRING OF EVEN LENGTH AND print THE 2nd HALF OF THE STRING using substr


#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
int main (){
    string s;
    cout << "Enter an even length string: ";
    getline(cin, s);
    int n = s.length();
    cout << s.substr(n/2);
}