#include<iostream>
#include<cstring>
using namespace std;

int main (){
    char str1[20] = "Hello, ";
    char str2[] = "World!";
    
    // Concatenate str2 to str1
    strcat(str1, str2);
    
    // Print the concatenated string
    cout << "Concatenated String: " << str1 << endl;
    
    return 0;

    
}
