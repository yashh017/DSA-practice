#include<iostream>
#include<string>

using namespace std;

int Count_Vowels_and_Consonants(string &str1) {
    int vowels=0;
    int consonants=0;

    for(char ch : str1) {
        if(ch>='a'&& ch<='z') {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
            vowels++;
        }
        else {
            consonants++;
        }
        }
    }
    cout<<"The vowels present in the given string: "<<vowels<<endl;
    cout<<"The consonants present in the given string: "<<consonants;

}

int main() {
    string str1;
    
    cout<<"Enter a string: ";
    getline(cin,str1);

    Count_Vowels_and_Consonants(str1);
    return 0;
}