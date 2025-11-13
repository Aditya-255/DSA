#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	int arr[n]={2,10,12,1,11};
	int ans[n];
	stack<int> st;
	for(int i=2*n-1;i>=0;i--){
		while(!st.empty()&& st.top()<=arr[i%n]){
			st.pop();
		}
		if(i<n){
			if(st.empty()){
				ans[i]=-1;
			}
			else{
				ans[i]=st.top();
			}
		}
		st.push(arr[i%n]);
	}
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
}
