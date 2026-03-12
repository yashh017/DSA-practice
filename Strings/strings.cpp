#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

// int main() {
//     string str1 ;

//     getline(cin,str1,'&');

//     cout<<str1<<endl;
//     return 0;
// }

// int main() {

//     string s1="Yashvardhan Joshi";               //This is from iterator loop

//     for(int i= 0;i <s1.length();i++) {
//         cout<<s1[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// int main() {
//     string y1="This planet is the only one which is habitable";     

//     for(char ch : y1) {               
//         cout<<ch<<" ";                  //This is from for each loop
//     }
//     cout<<endl;
//     return 0;
// }

// void StringReverse(char ch,int n) {
//     int st = 0, end=n-1;

//     while(st<end) {
//         swap(ch[st],ch[end]);
//         st++;
//         end--;
//     }
    
// }

// int main() {
//     char ch = {"h","e","l","l","o","\0"};
//     int n = ch.length();

//     cout<<"Character array before reversal: "<<ch<<endl;

//     cout<<StringReverse(ch,n);
//     cout<<"Character array after reversal: "<<ch<<endl;

//     return 0;

// }

// int main() {
//     string str="This is the DSA folder";

//     reverse(str.begin(),str.end());
//     cout<<str<<endl;
//     return 0;
// }

int main() {
    string str="I love coding";
    int k = 0;

    reverse(str.begin(),str.end());

    for(int i=0;i<str.length();i++) {
        if(str[i]==' ') {
            reverse(str.begin()+k,str.begin()+i);
            k=i+1;
        }
    }
    cout<<str;
    return 0;
}