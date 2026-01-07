// INPUT A STRING OF EVEN LENGTH AND REVERSE THE FIRST HALF OF THE STRING

#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
int main (){
    string s;
    getline(cin, s);
    int n = s.length();
    reverse(s.begin(), s.begin() + n / 2);
    cout << s;
}