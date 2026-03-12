#include<iostream>
#include<vector>

using namespace std;


void InputMarks(vector<int> &marks) {
    if(marks.empty()) {
        cout<<"No marks entered yet"<<endl;
    }
    cout<<"Students marks: ";
    for(int val : marks) {
        cout<<val<<" ";
    }
    cout<<endl;
}


int main() {

    vector<int> marks;
    int opr;

    cout<<"---Welcome Student Grade management system---"<<endl;

    while(true) {

        cout<<"1. Enter the marks of stuents\n2. Display the marks of students\n3. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>opr;

        if(opr==1) {
            int students;
            cout<<"Enter the number of students: ";
            cin>>students;

            marks.resize(students);
            cout<<"enter the marks of students: ";
            for(int i=0;i<students;i++) {
                cin>>marks[i];
            }
        }
        else if(opr==2) {
            InputMarks(marks);
        }

        else if(opr==3) {
            cout<<"thank you for using the site!!Bye!";
            break;
        }
        else{
            cout<<"Invalid choice! Try again";
        }


    }
}

