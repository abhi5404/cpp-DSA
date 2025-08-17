#include<iostream>
#include<cstring>
using namespace std;

// to copy string
void copyString (char*a1, char*a2) {
    int i = 0;
    while (a1[i] != '\0') {
        a2[i] = a1[i];
        i++;
    }
    a2[i] = '\0'; // null-terminate the copied string
}

// to concatenate strings
void concatenateStrings (char*a1, const char*a2) {
    int i = 0;
    while (a1[i] != '\0') {
        i++;
    }
    int j = 0;
    while (a2[j] != '\0') {
        a1[i] = a2[j];
        i++;
        j++;
    }
    a1[i] = '\0'; // null-terminate the concatenated string
}