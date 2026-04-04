#include<iostream>
#include<string>

using namespace std;

bool PallindromeCheck(string &str) {
    int n=str.length();
    int start=0;
    int end=n-1;

    while(start < end) {
        if(str[start] == str[end]) {
            start++;
            end--;
        }
        else {
            return false;
            break;
        }
        return true;
    }
}

int main() {
    string str={"racecar"};

    if(PallindromeCheck(str)) {
        cout<<"The string is Pallindrome";
    }
    else {
        cout<<"The string is not Pallindrome";
    }

    return 0;
}
