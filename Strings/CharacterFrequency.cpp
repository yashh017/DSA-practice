#include<iostream>
#include<string>
using namespace std;

void CharacterFrequency(string &s) {
    int freq[26] = {0};

    for(char c : s) {
        freq[c - 'a']++;
    }
    for(int i = 0;i <26;i++) {
        if(freq[i] > 0) {
            char ch = i + 'a';

            cout<<ch<<"->"<<freq[i]<<endl;
        }
    }
}

int main() {
    string s = "yashvardhanjoshiandaverytigj";

    CharacterFrequency(s);
    return 0;
}