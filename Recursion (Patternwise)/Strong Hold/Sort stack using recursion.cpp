#include <bits/stdc++.h>
using namespace std;

void insertSorted(stack<int> &st, int x) {
    if (st.empty() || st.top() <= x) {
        st.push(x);
        return;
    }

    int topVal = st.top();
    st.pop();

    insertSorted(st, x);

    st.push(topVal);
}

void sortStack(stack<int> &st) {
    if (st.empty()) return;

    int topVal = st.top();
    st.pop();

    sortStack(st);

    insertSorted(st, topVal);
}

int main() {
    stack<int> st;
    st.push(3);
    st.push(1);
    st.push(4);
    st.push(2);

    cout << "Original Stack (top ? bottom): 2 4 1 3\n";

    sortStack(st);

    cout << "Sorted Stack (top ? bottom): ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}

