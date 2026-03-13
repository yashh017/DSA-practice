#include<iostream>
#include<string>

using namespace std;

string ReverseString(string &str) {
    int st=0,end=str.length()-1;        //Declaring function which has return type string.
                                        
    if(str.length()<=1) {
        return str;
    }
    while(st<end) {
        swap(str[st],str[end]);
        st++;
        end--;
    }
    return str;
}

int main() {
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    cout<<"Reversed string: "<<ReverseString(str);
    return 0;
}