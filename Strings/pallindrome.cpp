#include<iostream>
#include<string>

using namespace std;


bool PallindromeCheck(string &str) {
    int st=0, en=str.length()-1;

    while(st < en) {
        if(str[st] != str[en]) {
            return false;
            break;
        }

        else {
            st++;
            en--;
        }
        return true;
    }
}
int main() {
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);

    if(PallindromeCheck(str)) {
        cout<<"The string is PALLINDROME";
    }
    else {
        cout<<"The string is not PALLINDROME";
    }
    return 0;
}

