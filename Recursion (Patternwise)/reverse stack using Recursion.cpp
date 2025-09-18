#include <bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &st, int x) {
    if (st.empty()) {
        st.push(x);
        return;
    }

    int topVal = st.top();
    st.pop();

    insertAtBottom(st, x);

    st.push(topVal);
}
void reverseStack(stack<int> &st) {
    if (st.empty()) return;

    int topVal = st.top();
    st.pop();

    reverseStack(st);

    insertAtBottom(st, topVal);
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << "Original Stack : 4 3 2 1\n";

    reverseStack(st);

    cout << "Reversed Stack : ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}

