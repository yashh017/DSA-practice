#include <iostream>
#include <stack>
#include <queue>
using namespace std;

// Changed return type to stack<int> and passed by reference using &
stack<int> reverseStack(stack<int> &st) {
    queue<int> q;

    while(!st.empty()) {
        q.push(st.top());
        st.pop();
    }

    while(!q.empty()) {
        st.push(q.front());
        q.pop();
    }
    return st;
}

int main() {
    stack<int> st;
    // Pushing elements (older C++ versions don't support initializer lists for stacks)
    for(int i : {1, 2, 3, 4, 5}) st.push(i);

    // Call the function
    reverseStack(st);

    // To print a stack, we must loop through it
    cout << "Reversed Stack (Top to Bottom): ";
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}