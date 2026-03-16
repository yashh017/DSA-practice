#include<iostream>
#include<string>

using namespace std;

void RemoveSpaces(string &str) {

    if(str.length() <=0) {
        cout<<str;
    }

    int j=0;
    for(int i=0;i<str.length();i++) {
        if(str[i] != ' ') {
            str[j] =str[i];
            j++;
        }
    }
    str.resize(j);
}

int main() {
    string str;
    cout<<"Enter a string with spaces: ";
    getline(cin,str);
    RemoveSpaces(str);

    cout<<"String after removing the spaces: "<<str<<endl;
    return 0;

}