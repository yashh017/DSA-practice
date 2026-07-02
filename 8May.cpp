#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool ValidPallindrome(string &s) {
    int st = 0, n = s.length(), en = n-1;
    while(st < en) {
       if(s[st] == s[en]) {
        st++;
        en--;
       }
       else {
        return false;
       }
    }
    return true;
}
int main() {
    string s = "naman";
 
    cout<<"Input: ";
    for(char c : s) {
        cout<<c;
    }
    bool isbool = ValidPallindrome(s);
    if(isbool == true) {
        cout<<"\nValid Pallindrome";
    }
    else cout<<"\nNot Pallindrome";
    return 0;
}