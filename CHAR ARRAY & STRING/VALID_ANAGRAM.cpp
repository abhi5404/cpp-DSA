// valid anagram using sorting
#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare sorted strings
    return str1 == str2;
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if (isAnagram(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
// time complexity is O(n log n) due to sorting
