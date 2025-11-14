#include<bits/stdc++.h>
using namespace std;
vector<int> nextSmaller(vector<int>& arr, int n) {
    vector<int> nse(n);
    stack<int> st;

    for(int i = n - 1; i >= 0; i--) {
        while(!st.empty() && arr[st.top()] > arr[i]) {
            st.pop();
        }
        nse[i] = st.empty() ? n : st.top();
        st.push(i);
    }
    return nse;
}

vector<int> prevSmaller(vector<int>& arr, int n) {
    vector<int> pse(n);
    stack<int> st;

    for(int i = 0; i < n; i++) {
        while(!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }
        pse[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    return pse;
}

long long summin(int arr[], int n) {
    vector<int> a(arr, arr + n);
    vector<int> nse = nextSmaller(a, n);
    vector<int> pse = prevSmaller(a, n);

    long long total = 0;
    for(int i = 0; i < n; i++) {
        long long left = i - pse[i];
        long long right = nse[i] - i;
        total += left * right * a[i];
    }
    return total;
}

vector<int> nextGreater(vector<int>& arr, int n) {
    vector<int> nge(n);
    stack<int> st;

    for(int i = n - 1; i >= 0; i--) {
        while(!st.empty() && arr[st.top()] < arr[i]) {
            st.pop();
        }
        nge[i] = st.empty() ? n : st.top();
        st.push(i);
    }
    return nge;
}

vector<int> prevGreater(vector<int>& arr, int n) {
    vector<int> pge(n);
    stack<int> st;

    for(int i = 0; i < n; i++) {
        while(!st.empty() && arr[st.top()] <= arr[i]) {
            st.pop();
        }
        pge[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    return pge;
}

long long summax(int arr[], int n) {
    vector<int> a(arr, arr + n);
    vector<int> nge = nextGreater(a, n);
    vector<int> pge = prevGreater(a, n);

    long long total = 0;
    for(int i = 0; i < n; i++) {
        long long left = i - pge[i];
        long long right = nge[i] - i;
        total += left * right * a[i];
    }
    return total;
}
int sum(int arr[],int n){
	return summax(arr,n)-summin(arr,n);
}
int main(){
	int n=4;
	int arr[n]={1,4,3,2};
	int ans=sum(arr,n);
	cout<<ans<<endl;
}
