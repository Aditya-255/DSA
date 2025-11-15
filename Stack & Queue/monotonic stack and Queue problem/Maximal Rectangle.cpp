#include<bits/stdc++.h>
using namespace std;
int func2(int arr[], int m){
    stack<int> st;
    int maxarea = 0;
    int i = 0;

    while(i < m){
        if(st.empty() || arr[st.top()] <= arr[i])
            st.push(i++);
        else{
            int tp = st.top();
            st.pop();
            int width = st.empty() ? i : i - st.top() - 1;
            maxarea = max(maxarea, arr[tp] * width);
        }
    }

    while(!st.empty()){
        int tp = st.top();
        st.pop();
        int width = st.empty() ? i : i - st.top() - 1;
        maxarea = max(maxarea, arr[tp] * width);
    }

    return maxarea;
}

int func(int arr[4][5],int n,int m){
	int maxarea=0;
	int psum[n][m];
	for(int i=0;i<m;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			sum+=arr[j][i];
			if(arr[j][i]==0){
				sum=0;
			}
			psum[j][i]=sum;
		}	
	}
	for(int i=0;i<n;i++){
		maxarea=max(maxarea,func2(psum[i],m));
	}
	return maxarea;
}
int main(){
	int n=4;
	int m=5;
	int arr[4][5] = {
        {  1,  0,  1,  0,1 },
        {  1,  0,  1,  1,1},
        {  1,  1,  1,  1,1 },
        {1,  0,  0,  0,1}
    };
    cout << func(arr, n, m);
}
