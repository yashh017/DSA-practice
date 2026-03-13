#include<iostream>
#include<string>
using namespace std;

int CharacterCount(string &s) {
    int count = 0;
    for(char ch : s) {
        count++;
    }
    return count;
}

int main() {
    string s="Procastination";
    cout<<CharacterCount(s);
    return 0;
}