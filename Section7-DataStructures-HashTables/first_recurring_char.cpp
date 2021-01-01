/*
Section Problem
Simple hash table check
*/

#include "string"
#include "iostream"
#include "unordered_set"
using namespace std;

char fst_rec_char(string &str) {
    unordered_set<char> track;
    int arr_len = str.length();
    for (int i = 0; i < arr_len; i++) {
        if (track.find(str[i]) != track.end()){
            return str[i];
        }
        else track.insert(str[i]);
    }
    return '\0';
}

int main () {
    string str = "thisIstherepeattext";
    cout << fst_rec_char(str);
    return 0;
}
